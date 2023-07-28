#include "ProductoController.h"
#include "Tipo_ProductoController.h"
#include "LocalesController.h"
#include "ClientesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void ProductoController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void ProductoController::cerrarConexion() {
	this->objConexion->Close();
}

ProductoController::ProductoController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}

///////////////////////////////////////////////////////////////
//BUSCAR
List<Producto^>^ ProductoController::BuscarListaProductoxLocal(String^ codigolocal) {
	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Producto where CodigoLocales = " + codigolocal;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if (objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		Producto^ objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
		listaProducto->Add(objProducto);
	}
	cerrarConexion();
	return listaProducto;
}

List<Producto^>^ ProductoController::BuscarListaProductoxClienteSinLocal(String^ idCliente) {
	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Producto where IdentificacionClientes='" + idCliente + "' and CodigoLocales is null";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if (objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		Producto^ objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
		listaProducto->Add(objProducto);
	}
	cerrarConexion();
	return listaProducto;
}

List<Producto^>^ ProductoController::BuscarListaProductoxCliente(String^ idCliente) {
	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Producto where IdentificacionClientes = '" + idCliente + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if (objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		Producto^ objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
		listaProducto->Add(objProducto);
	}
	cerrarConexion();
	return listaProducto;
}

List<Producto^>^ ProductoController::BuscarListaProductoxClientexTipo(String^ idCliente, String^ tipo) {
	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DECLARE @cliente VARCHAR(20) = '" + idCliente + "%' DECLARE @tipo VARCHAR(20) = '" + tipo + "%' " + 
								"IF @cliente = '%' and @tipo != '%' " +
									"BEGIN " + 
									"select * from Producto where NombreTipo_Producto LIKE '" + tipo+ "%' " +
									"END " + 
								"ELSE IF @tipo = '%' and @cliente != '%' " +
									"BEGIN " + 
									"select * from Producto where IdentificacionClientes LIKE '" + idCliente + "%' " +
									"END " + 
								"ELSE IF @tipo = '%' and @cliente = '%' " + 
									"BEGIN " +
									"select * from Producto " +
									"END " + 
								"ELSE " + 
									"BEGIN " +
									"select * from Producto where IdentificacionClientes LIKE '" +idCliente + "%' and NombreTipo_Producto like '" + tipo + "%' " +
									"END";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if (objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		Producto^ objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
		listaProducto->Add(objProducto);
	}
	cerrarConexion();
	return listaProducto;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<Producto^>^ ProductoController::BuscarProductoTodas() {
	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * from Producto";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if(objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		Producto^ objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
		listaProducto->Add(objProducto);
	}
	cerrarConexion();
	return listaProducto;
};

//////////////////////////////////////////////////////////
//NUEVO
int ProductoController::ExisteProductoxCodigo(String^ codigo) {
	int existe = 0;
	List<Producto^>^ listaProducto = BuscarProductoTodas();
	for (int i = 0; i < listaProducto->Count; i++) {
		Producto^ objProducto = listaProducto[i];
		if (objProducto->getCodigo() == Convert::ToInt32(codigo)) {
			existe = 1;
			break;
		}
	}
	return existe;
}


void ProductoController::AregarProducto(Producto^ objProducto) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Producto(NombreTipo_Producto,Fecha_Creacion,IMEI,N_Serie,Tiempo_Garantia,CodigoLocales,IdentificacionClientes) values ('" + objProducto->getTipo_Producto()->getNombre() + "','" + objProducto->getFecha_Creacion() + "','" + objProducto->getIMEI() + "','" + objProducto->getN_Serie() + "','" + objProducto->getTiempo_Garantia() + "',null,null)";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//EDITAR
Producto^ ProductoController::BuscarUnProductoxCodigo(String^ codigo) {
	Producto^ objProducto = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Producto where Codigo=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int codigo = safe_cast<int>(objData[0]);
		String^ Tipo = safe_cast<String^>(objData[1]);
		String^ fecha_creacion = safe_cast<String^>(objData[2]);
		String^ IMEI = safe_cast<String^>(objData[3]);
		String^ N_Serie = safe_cast<String^>(objData[4]);
		String^ Garantia = safe_cast<String^>(objData[5]);
		int CodigoLocal;
		Object^ objData6 = objData[6];
		if (objData6->GetType() == Int32::typeid) {
			CodigoLocal = safe_cast<int>(objData6);
		}
		String^ IDCliente;
		Object^ objDat7 = objData[7];
		if (objDat7->GetType() == String::typeid) {
			IDCliente = safe_cast<String^>(objDat7);
		}
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		objProducto = gcnew Producto(codigo, objTipo_Producto, fecha_creacion, IMEI, N_Serie, Garantia, objLocales, objClientes);
	}
	cerrarConexion();
	return objProducto;
}

//////////////////////////////////////////////////////////////
//OTROS
int ProductoController::ContarProductos(String^ Tipo) {

	List<Producto^>^ listaProducto = gcnew List<Producto^>();
	int stock = 0;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * from Producto where IdentificacionClientes is null and NombreTipo_Producto = '" + Tipo + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		stock++;
	}
	cerrarConexion();
	return stock;
}

//ASIGNAR A UN PRODUCTO A UN CLIENTE

void ProductoController::ActualizarProductoCliente(int codigo, Clientes^ id) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Producto set IdentificacionClientes='" + id->getIdentificacion() + "' where Codigo=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();	
}

//ASIGNAR A UN PRODUCTO A UN LOCAL

void ProductoController::ActualizarProductoLocal(String^ codproduc, Locales^ codlocal) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Producto set CodigoLocales=" + codlocal->getCodigo() + " where Codigo=" + codproduc;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}


void ProductoController::ActualizarProductoLocalEliminar(String^ codproduc, Locales^ codlocal) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Producto set CodigoLocales= null where Codigo=" + codproduc;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}