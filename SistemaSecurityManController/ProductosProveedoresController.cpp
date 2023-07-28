#include "ProductosProveedoresController.h"
#include "ProveedoresController.h"
#include "ComponentesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void ProductosProveedoresController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void ProductosProveedoresController::cerrarConexion() {
	this->objConexion->Close();
}

ProductosProveedoresController::ProductosProveedoresController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List<ProductosProveedores^>^ ProductosProveedoresController::BuscarListaProductosProveedoresxProveedor(String^ Proveedor) {
	List<ProductosProveedores^>^ listaProductos = gcnew List<ProductosProveedores^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select *  from ProductosProveedores where NombreProveedores = '" + Proveedor + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ proveedor = safe_cast<String^>(objData[1]);
		String^ componente = safe_cast<String^>(objData[4]);
		Decimal^ precio = safe_cast<Decimal^>(objData[2]);
		int stock = safe_cast<int>(objData[3]);
		//
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		Proveedores^ objProveedores = objProveedoresController->BuscarUnProveedoresxNombre(proveedor);
		//
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(componente);
		//
		ProductosProveedores^ objProductosProveedores = gcnew ProductosProveedores(codigo, objProveedores, objComponentes, Convert::ToDouble(precio), stock);
		listaProductos->Add(objProductosProveedores);
	}
	cerrarConexion();
	return listaProductos;
}
List<ProductosProveedores^>^ ProductosProveedoresController::BuscarListaProductosProveedoresxProveedorxComponente(String^ Proveedor, String^ Componente) {
	List<ProductosProveedores^>^ listaProductos = gcnew List<ProductosProveedores^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select *  from ProductosProveedores where NombreProveedores = '" + Proveedor + "' and NombreComponentes like '" + Componente + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ proveedor = safe_cast<String^>(objData[1]);
		String^ componente = safe_cast<String^>(objData[4]);
		Decimal^ precio = safe_cast<Decimal^>(objData[2]);
		int stock = safe_cast<int>(objData[3]);
		//
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		Proveedores^ objProveedores = objProveedoresController->BuscarUnProveedoresxNombre(proveedor);
		//
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(componente);
		//
		ProductosProveedores^ objProductosProveedores = gcnew ProductosProveedores(codigo, objProveedores, objComponentes, Convert::ToDouble(precio), stock);
		listaProductos->Add(objProductosProveedores);
	}
	cerrarConexion();
	return listaProductos;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<ProductosProveedores^>^ ProductosProveedoresController::BuscarProductosProveedoresTodas() {
	List<ProductosProveedores^>^ listaProductos = gcnew List<ProductosProveedores^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from ProductosProveedores";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ proveedor = safe_cast<String^>(objData[1]);
		String^ componente = safe_cast<String^>(objData[4]);
		Decimal^ precio = safe_cast<Decimal^>(objData[2]);
		int stock = safe_cast<int>(objData[3]);
		//
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		Proveedores^ objProveedores = objProveedoresController->BuscarUnProveedoresxNombre(proveedor);
		//
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(componente);
		//
		ProductosProveedores^ objProductosProveedores = gcnew ProductosProveedores(codigo, objProveedores, objComponentes, Convert::ToDouble(precio), stock);
		listaProductos->Add(objProductosProveedores);
	}
	cerrarConexion();
	return listaProductos;
}

void ProductosProveedoresController::EliminarProductosProveedoresxProveedorxComponente(int codigo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE ProductosProveedores  where Codigo= " + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int ProductosProveedoresController::ExisteProductosProveedoresxProveedorxComponente(String^ provedor, String^ componente) {
	int existe = 0;
	List<ProductosProveedores^>^ listaLocales = BuscarProductosProveedoresTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		ProductosProveedores^ objProveedores = listaLocales[i];
		if (objProveedores->getProveedores()->getNombre() == provedor && objProveedores->getComponentes()->getNombre() == componente) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void ProductosProveedoresController::RegistrarProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert ProductosProveedores(NombreProveedores,Precio,Stock,NombreComponentes) values ('" + objProveedores->getNombre() + "'," + Convert::ToDecimal(Precio) + "," + Stock +",'" + objComponentes->getNombre() + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
ProductosProveedores^ ProductosProveedoresController::BuscarUnProductosProveedoresxCodigo(String^ codigo) {
	ProductosProveedores^ objLocales;
	List<ProductosProveedores^>^ listaLocales = BuscarProductosProveedoresTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		if (listaLocales[i]->getCodigo() == Convert::ToInt32(codigo)) {
			objLocales = listaLocales[i];
			break;
		}
	}
	return objLocales;
}

ProductosProveedores^ ProductosProveedoresController::BuscarUnProductosProveedoresxProveedorxComponente(String^ Proveedor, String^ componente) {
	ProductosProveedores^ objLocales;
	List<ProductosProveedores^>^ listaLocales = BuscarProductosProveedoresTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		if (listaLocales[i]->getProveedores()->getNombre() == Proveedor && listaLocales[i]->getComponentes()->getNombre() == componente) {
			objLocales = listaLocales[i];
			break;
		}
	}
	return objLocales;
}

void ProductosProveedoresController::ActualizarProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock) {
	List<ProductosProveedores^>^ listaLocales = BuscarProductosProveedoresTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		if (listaLocales[i]->getCodigo() == Convert::ToInt32(Codigo)) {
			//editar
			abrirConexion();
			SqlCommand^ objSentencia = gcnew SqlCommand();
			objSentencia->Connection = this->objConexion;
			objSentencia->CommandText = "UPDATE ProductosProveedores SET Precio=" + Convert::ToDecimal(Precio) + ", Stock = " + Stock + " WHERE Codigo = " + Codigo;
			SqlDataReader^ objData = objSentencia->ExecuteReader();
			cerrarConexion();
		}
	}
}

void ProductosProveedoresController::ActualizarProductosProveedoresTecnico(int Codigo, int unidades) {
	List<ProductosProveedores^>^ listaLocales = BuscarProductosProveedoresTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		if (listaLocales[i]->getCodigo() == Convert::ToInt32(Codigo)) {
			//editar
			abrirConexion();
			SqlCommand^ objSentencia = gcnew SqlCommand();
			objSentencia->Connection = this->objConexion;
			objSentencia->CommandText = "UPDATE ProductosProveedores SET Stock = " + (listaLocales[i]->getStock() - unidades) + " WHERE Codigo = " + Codigo;
			SqlDataReader^ objData = objSentencia->ExecuteReader();
			cerrarConexion();
		}
	}
}