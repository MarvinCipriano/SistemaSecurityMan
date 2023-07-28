#include "LocalesController.h"
#include "ClientesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;
//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void LocalesController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void LocalesController::cerrarConexion() {
	this->objConexion->Close();
}

LocalesController::LocalesController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List<Locales^>^ LocalesController::BuscarListaLocalesxCodigo(String^ codigo) {
	List<Locales^>^ listaLocales = gcnew List<Locales^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales where Codigo=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		Locales^ objLocales = gcnew Locales(Codigo, Nombre, Ubicacion, objClientes, Direccion, Distrito);
		listaLocales->Add(objLocales);
	}
	cerrarConexion();
	return listaLocales;
}

List<Locales^>^ LocalesController::BuscarListaLocalesxClientes(String^ id) {
	List<Locales^>^ listaLocales = gcnew List<Locales^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales where IdentificacionClientes='" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		Locales^ objLocales = gcnew Locales(Codigo, Nombre, Ubicacion, objClientes, Direccion, Distrito);
		listaLocales->Add(objLocales);
	}
	cerrarConexion();
	return listaLocales;
}
List<Locales^>^ LocalesController::BuscarListaLocalesxDistrito(String^ distrito) {
	List<Locales^>^ listaLocales = gcnew List<Locales^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales where Distrito='" + distrito + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		Locales^ objLocales = gcnew Locales(Codigo, Nombre, Ubicacion, objClientes, Direccion, Distrito);
		listaLocales->Add(objLocales);
	}
	cerrarConexion();
	return listaLocales;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<Locales^>^ LocalesController::BuscarLocalesTodas() {
	List<Locales^>^ listaLocales = gcnew List<Locales^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		Locales^ objLocales = gcnew Locales(Convert::ToInt32(Codigo), Nombre, Ubicacion, objClientes, Direccion, Distrito);
		listaLocales->Add(objLocales);
	}
	cerrarConexion();
	return listaLocales;
};

void LocalesController::EliminarLocalesxCodigo(int codigo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "delete Locales where Codigo = " + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
//////////////////////////////////////////////////////////
//NUEVO
int LocalesController::ExisteLocalesxCodigo(String^ codigo) {
	int existe = 0;
	List<Locales^>^ listaLocales = BuscarLocalesTodas();
	for (int i = 0; i < listaLocales->Count; i++) {
		Locales^ objLocales = listaLocales[i];
		if (objLocales->getCodigo() == Convert::ToInt32(codigo)) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int LocalesController::ExisteLocalxClientexNombre(Clientes^ objcliente, String^ Nombre) {
	int existe = 0;
	List<Locales^>^ lineasArchivo = BuscarLocalesTodas();
	for (int i = 0; i < lineasArchivo->Count; i++) {
		Locales^ objLocales = lineasArchivo[i];
		if (objLocales->getNombre() == Nombre && objLocales->getClientes()->getIdentificacion() == objcliente->getIdentificacion()) {
			existe = 1;
			break;
		}
	}
	return existe;
}


void LocalesController::RegistrarLocales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Locales(Nombre,Ubicacion,IdentificacionClientes,Direccion,Distrito) values ('" + Nombre + "','" + Ubicacion + "','" + objClientes->getIdentificacion() + "','" + Direccion +"','" + Distrito +"')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
Locales^ LocalesController::BuscarUnLocalesxCodigo(String^ codigo) {
	Locales^ objLocales = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales where Codigo = " + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		objLocales = gcnew Locales(Convert::ToInt32(Codigo), Nombre, Ubicacion, objClientes, Direccion, Distrito);
	}
	cerrarConexion();
	return objLocales;
}

Locales^ LocalesController::BuscarUnLocalesxNombrexCliente(String^ Nombre, String^ Cliente) {
	Locales^ objLocales = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Locales where Nombre = '" + Nombre + "' and IdentificacionClientes = '" + Cliente + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		String^ Ubicacion = safe_cast<String^>(objData[2]);
		String^ IDCliente = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IDCliente);
		//
		objLocales = gcnew Locales(Convert::ToInt32(Codigo), Nombre, Ubicacion, objClientes, Direccion, Distrito);
	}
	cerrarConexion();
	return objLocales;
}


int LocalesController::ExisteLocalxClientexNombreDifetente(Clientes^ objcliente, String^ Nombre) {
	int existe = 0;
	List<Locales^>^ lineasArchivo = BuscarLocalesTodas();
	for (int i = 0; i < lineasArchivo->Count; i++) {
		Locales^ objLocales = lineasArchivo[i];
		if (objLocales->getNombre() == Nombre && objLocales->getClientes()->getIdentificacion() != objcliente->getIdentificacion()) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void LocalesController::ActualizarLocales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Locales set Ubicacion='" + Ubicacion + "', Direccion='" + Direccion + "', Distrito='" + Distrito + "' where Codigo=" + Codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}