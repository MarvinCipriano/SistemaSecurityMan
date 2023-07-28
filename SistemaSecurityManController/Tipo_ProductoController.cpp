#include "Tipo_ProductoController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void Tipo_ProductoController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void Tipo_ProductoController::cerrarConexion() {
	this->objConexion->Close();
}

Tipo_ProductoController::Tipo_ProductoController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Tipo_Producto^>^ Tipo_ProductoController::BuscarListaTipo_ProductoxNombre(String^ nombre) {
	List<Tipo_Producto^>^ listaTipo_ProductoEncontradas = gcnew List<Tipo_Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Tipo_Producto where Nombre like '" + nombre + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		Decimal Precio = safe_cast<Decimal>(objData[2]);
		String^ Caracteristicas = safe_cast<String^>(objData[3]);
		//
		Tipo_Producto^ objTipo_Producto = gcnew Tipo_Producto(Codigo, Nombre, Convert::ToDouble(Precio), Caracteristicas);
		listaTipo_ProductoEncontradas->Add(objTipo_Producto);
	}
	cerrarConexion();
	return listaTipo_ProductoEncontradas;
}


///////////////////////////////////////////////////////////////
//ELIMINAR
List<Tipo_Producto^>^ Tipo_ProductoController::BuscarTipo_ProductoTodas() {
	List<Tipo_Producto^>^ listaTipo_ProductoEncontradas = gcnew List<Tipo_Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Tipo_Producto";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		Decimal Precio = safe_cast<Decimal>(objData[2]);
		String^ Caracteristicas = safe_cast<String^>(objData[3]);
		//
		Tipo_Producto^ objTipo_Producto = gcnew Tipo_Producto(Codigo, Nombre, Convert::ToDouble(Precio), Caracteristicas);
		listaTipo_ProductoEncontradas->Add(objTipo_Producto);
	}
	cerrarConexion();
	return listaTipo_ProductoEncontradas;
};

void Tipo_ProductoController::EliminarTipo_ProductoxCodigo(int codigo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Tipo_Producto where Codigo=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

void Tipo_ProductoController::EscribirArchivo(List < Tipo_Producto^>^ listaTipo_Producto) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaTipo_Producto->Count);
	for (int i = 0; i < listaTipo_Producto->Count; i++) {
		Tipo_Producto^ objTipo_Producto = listaTipo_Producto[i];
		lineasArchivo[i] = objTipo_Producto->getCodigo() + ";" + objTipo_Producto->getNombre() + ";" + objTipo_Producto->getPrecio() + ";" + 
						   objTipo_Producto->getCaracteristicas();
	}
	File::WriteAllLines("Tipo_Producto.txt", lineasArchivo);
};
//////////////////////////////////////////////////////////
//NUEVO
int Tipo_ProductoController::ExisteTipo_ProductoxNombre(String^ nombre) {
	int existe = 0;
	List<Tipo_Producto^>^ listaTipo_Producto = BuscarTipo_ProductoTodas();
	for (int i = 0; i < listaTipo_Producto->Count; i++) {
		Tipo_Producto^ objTipo_Producto = listaTipo_Producto[i];
		if (objTipo_Producto->getNombre() == nombre) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void Tipo_ProductoController::RegistrarTipo_Producto(int Codigo, String^ Nombre, double Precio, String^ Caracteristicas) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Tipo_Producto(Nombre,Precio,Caracteristicas) values ('" + Nombre + "'," + Precio + ",'" + Caracteristicas + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
Tipo_Producto^ Tipo_ProductoController::BuscarUnTipo_ProductoxNombre(String^ Nombre) {
	Tipo_Producto^ objTipo_Producto = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Tipo_Producto where Nombre = '" + Nombre + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		Decimal Precio = safe_cast<Decimal>(objData[2]);
		String^ Caracteristicas = safe_cast<String^>(objData[3]);
		//
		objTipo_Producto = gcnew Tipo_Producto(Codigo, Nombre, Convert::ToDouble(Precio), Caracteristicas);
	}
	cerrarConexion();
	return objTipo_Producto;
}

void Tipo_ProductoController::ActualizarTipo_Producto(String^ Nombre, double Precio, String^ Caracteristicas) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Tipo_Producto set Precio=" + Precio + ", Caracteristicas='" + Caracteristicas + "' where Nombre='" + Nombre + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();	
}

