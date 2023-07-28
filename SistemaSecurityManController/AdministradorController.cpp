#include "AdministradorController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void AdministradorController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void AdministradorController::cerrarConexion() {
	this->objConexion->Close();
}

AdministradorController::AdministradorController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
//BUSCAR
List< Administrador^>^ AdministradorController::BuscarListaAdminxNombrexApellidoxDNI(String^ nombre, String^ apellido, String^ dni) {
	List<Administrador^>^ listaAdminEncontradas = gcnew List<Administrador^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Administrador where Nombre like '" + nombre + "%' and Apellido like '" + apellido + "%' and DNI like '" + dni + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//--
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[4]);
		String^ Telefono = safe_cast<String^>(objData[5]);
		//--
		Administrador^ objAdmin = gcnew Administrador(Nombre, Apellido, DNI, Email, Contrasenha, Telefono);
		listaAdminEncontradas->Add(objAdmin);
	}
	cerrarConexion();
	return listaAdminEncontradas;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<Administrador^>^ AdministradorController::BuscarAdminTodas() {
	List<Administrador^>^ listaAdminEncontradas = gcnew List<Administrador^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Administrador";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//--
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[4]);
		String^ Telefono = safe_cast<String^>(objData[5]);
		//--
		Administrador^ objAdmin = gcnew Administrador(Nombre, Apellido, DNI, Email, Contrasenha, Telefono);
		listaAdminEncontradas->Add(objAdmin);
	}
	cerrarConexion();
	return listaAdminEncontradas;
};

void AdministradorController::EliminarAdminxDNI(String^ dni) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Administrador where DNI='" + dni + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int AdministradorController::ExisteAdminxDNI(String^ dni) {
	int existe = 0;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		Administrador^ objAdmin = listaAdmin[i];
		if (objAdmin->getDNI() == dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int AdministradorController::ExisteAdminxEmail(String^ email) {
	int existe = 0;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		Administrador^ objAdmin = listaAdmin[i];
		if (objAdmin->getEmail() == email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int AdministradorController::ExisteAdminxTelefono(String^ telefono) {
	int existe = 0;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		Administrador^ objAdmin = listaAdmin[i];
		if (objAdmin->getTelefono() == telefono) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void AdministradorController::RegistrarAdmin(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Administrador(Nombre,Apellido,DNI,Email,Contrasenha,Telefono) values ('" + Nombre + "','" + Apellido + "','" + DNI + "','" + Email + "','" + Contrasenha + "','" + Telefono + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}


//////////////////////////////////////////////////////////
//EDITAR
Administrador^ AdministradorController::BuscarUnAdminxDNI(String^ dni) {
	Administrador^ objAdmin;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		if (listaAdmin[i]->getDNI() == dni) {
			objAdmin = listaAdmin[i];
			break;
		}
	}
	return objAdmin;
}

Administrador^ AdministradorController::BuscarUnAdminxEmail(String^ email) {
	Administrador^ objAdmin;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		if (listaAdmin[i]->getEmail() == email) {
			objAdmin = listaAdmin[i];
			break;
		}
	}
	return objAdmin;
}

void AdministradorController::ActualizarAdmin(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Administrador set Email = '" + Email + "', Contrasenha = '" + Contrasenha + "', Telefono = '" + Telefono + "' where DNI = '" + DNI + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

int AdministradorController::ExisteAdminEmailconDNI(String^ Email, String^ dni) {
	int existe = 0;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		Administrador^ objAdmin = listaAdmin[i];
		if (objAdmin->getEmail() == Email && objAdmin->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int AdministradorController::ExisteAdminTelefonoconDNI(String^ telefono, String^ dni) {
	int existe = 0;
	List<Administrador^>^ listaAdmin = BuscarAdminTodas();
	for (int i = 0; i < listaAdmin->Count; i++) {
		Administrador^ objAdmin = listaAdmin[i];
		if (objAdmin->getTelefono() == telefono && objAdmin->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}