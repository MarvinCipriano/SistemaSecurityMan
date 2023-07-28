#include "ClientesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void ClientesController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void ClientesController::cerrarConexion() {
	this->objConexion->Close();
}

ClientesController::ClientesController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
//BUSCAR
List< Clientes^>^ ClientesController::BuscarListaClientesxID(String^ id) {
	List<Clientes^>^ listaClientesEncontradas = gcnew List<Clientes^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Clientes where Identificacion = '" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ ID = safe_cast<String^>(objData[0]);
		String^ Email = safe_cast<String^> (objData[1]);
		String^ Contra = safe_cast<String^>(objData[2]);
		//
		Clientes^ objClientes = gcnew Clientes(ID, Email, Contra);
		listaClientesEncontradas->Add(objClientes);
	}
	cerrarConexion();
	return listaClientesEncontradas;
}
List< Clientes^>^ ClientesController::BuscarListaClientesxEmail(String^ email) {
	List<Clientes^>^ listaClientesEncontradas = gcnew List<Clientes^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Clientes where Email = '" + email + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ ID = safe_cast<String^>(objData[0]);
		String^ Email = safe_cast<String^> (objData[1]);
		String^ Contra = safe_cast<String^>(objData[2]);
		//
		Clientes^ objClientes = gcnew Clientes(ID, Email, Contra);
		listaClientesEncontradas->Add(objClientes);

	}
	cerrarConexion();
	return listaClientesEncontradas;
}
//////////////////////////////////////////////////////////
//ELIMINAR
List<Clientes^>^ ClientesController::BuscarClientesTodas() {
	List<Clientes^>^ listaClientesEncontradas = gcnew List<Clientes^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Clientes";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ ID = safe_cast<String^>(objData[0]);
		String^ Email = safe_cast<String^> (objData[1]);
		String^ Contra = safe_cast<String^>(objData[2]);
		//
		Clientes^ objClientes = gcnew Clientes(ID, Email, Contra);
		listaClientesEncontradas->Add(objClientes);
		
	}
	cerrarConexion();
	return listaClientesEncontradas;
};

void ClientesController::EliminarClientesxID(String^ id) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Clientes where Identificacion='" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
void ClientesController::EscribirArchivo(List < Clientes^>^ listaClientes) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaClientes->Count);
	for (int i = 0; i < listaClientes->Count; i++) {
		Clientes^ objClientes = listaClientes[i];
		lineasArchivo[i] = objClientes->getIdentificacion() + ";" + objClientes->getEmail() + ";" + objClientes->getContrasenha();
	}
	File::WriteAllLines("Clientes.txt", lineasArchivo);
};
//////////////////////////////////////////////////////////
//NUEVO
int ClientesController::ExisteClientesxEmail(String^ Email) {
	int existe = 0;
	List<Clientes^>^ listaClientes = BuscarClientesTodas();
	for (int i = 0; i < listaClientes->Count; i++) {
		Clientes^ objClientes = listaClientes[i];
		if (objClientes->getEmail() == Email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int ClientesController::ExisteClientesxID(String^ id) {
	int existe = 0;
	List<Clientes^>^ listaClientes = BuscarClientesTodas();
	for (int i = 0; i < listaClientes->Count; i++) {
		Clientes^ objClientes = listaClientes[i];
		if (objClientes->getIdentificacion() == id) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void ClientesController::RegistrarClientes(String^ id, String^ email, String^ contra) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Clientes(Identificacion,Email,Contrasenha) values ('" + id + "','" + email + "','" + contra + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
Clientes^ ClientesController::BuscarUnClientesxID(String^ id) {
	Clientes^ objClientes = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Clientes where Identificacion = '" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ ID = safe_cast<String^>(objData[0]);
		String^ Email = safe_cast<String^> (objData[1]);
		String^ Contra = safe_cast<String^>(objData[2]);
		//
		objClientes = gcnew Clientes(ID, Email, Contra);
	}
	cerrarConexion();
	return objClientes;
}

Clientes^ ClientesController::BuscarUnClientesxEmail(String^ email) {
	Clientes^ objClientes;
	List<Clientes^>^ listaClientes = BuscarClientesTodas();
	for (int i = 0; i < listaClientes->Count; i++) {
		if (listaClientes[i]->getEmail() == email) {
			objClientes = listaClientes[i];
			break;
		}
	}
	return objClientes;
}

void ClientesController::ActualizarClientes(String^ id, String^ email, String^ contra) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Clientes set Email='" + email + "', Contrasenha='" + contra + "' where Identificacion='" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

int ClientesController::ExisteClientesEmailconDNI(String^ Email, String^ id) {
	int existe = 0;
	List<Clientes^>^ listaClientes = BuscarClientesTodas();
	for (int i = 0; i < listaClientes->Count; i++) {
		Clientes^ objClientes = listaClientes[i];
		if (objClientes->getEmail() == Email && objClientes->getIdentificacion() != id) {
			existe = 1;
			break;
		}
	}
	return existe;
}