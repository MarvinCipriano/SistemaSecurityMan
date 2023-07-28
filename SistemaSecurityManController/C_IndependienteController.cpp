#include "C_IndependienteController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void C_IndependienteController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void C_IndependienteController::cerrarConexion() {
	this->objConexion->Close();
}

C_IndependienteController::C_IndependienteController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}

//BUSCAR
List< C_Independiente^>^ C_IndependienteController::BuscarListaC_IndependientexNombrexApellidoxDNI(String^ nombre, String^ apellido, String^ dni) {
	List<C_Independiente^>^ listaIndependienteEncontradas = gcnew List<C_Independiente^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from C_Independiente where Nombre like '" + nombre + "%' and Apellido like '" + apellido + "%' and DNI like '" + dni + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[4]);
		String^ Direccion = safe_cast<String^>(objData[5]);
		String^ Distrito = safe_cast<String^>(objData[6]);
		int Telefono = safe_cast<int>(objData[7]);
		//
		C_Independiente^ objIndependiente = gcnew C_Independiente(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, Distrito, Telefono);
		listaIndependienteEncontradas->Add(objIndependiente);
	}
	cerrarConexion();
	return listaIndependienteEncontradas;
}
//////////////////////////////////////////////////////////
//ELIMINAR
List<C_Independiente^>^ C_IndependienteController::BuscarC_IndependienteTodas() {
	List<C_Independiente^>^ listaIndependienteEncontradas = gcnew List<C_Independiente^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from C_Independiente";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[4]);
		String^ Direccion = safe_cast<String^>(objData[5]);
		String^ Distrito = safe_cast<String^>(objData[6]);
		int Telefono = safe_cast<int>(objData[7]);
		//
		C_Independiente^ objIndependiente = gcnew C_Independiente(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, Distrito, Telefono);
		listaIndependienteEncontradas->Add(objIndependiente);
	}
	cerrarConexion();
	return listaIndependienteEncontradas;
};

void C_IndependienteController::EliminarC_Independiente(String^ dni) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from C_Independiente where DNI='" + dni + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
//////////////////////////////////////////////////////////
//NUEVO
int C_IndependienteController::ExisteC_IndependienteEmail(String^ Email) {
	int existe = 0;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		C_Independiente^ objIndependiente = listaIndependiente[i];
		if (objIndependiente->getEmail() == Email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int C_IndependienteController::ExisteC_IndependienteTelefono(int Telefono) {
	int existe = 0;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		C_Independiente^ objIndependiente = listaIndependiente[i];
		if (objIndependiente->getTelefono() == Telefono) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int C_IndependienteController::ExisteC_IndependienteDNI(String^ Dni) {
	int existe = 0;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		C_Independiente^ objIndependiente = listaIndependiente[i];
		if (objIndependiente->getDNI() == Dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void C_IndependienteController::RegistrarC_IndeIndependiente(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert C_Independiente(Nombre,Apellido,DNI,Email,Contrasenha,Direccion,Distrito,Telefono) values ('" + Nombre + "','" + Apellido + "','" + DNI + "','" + Email + "','" + Contrasenha + "','" + Direccion + "','" + Distrito + "'," + Telefono + ")";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
C_Independiente^ C_IndependienteController::BuscarUnC_IndependientexDNI(String^ dni) {
	C_Independiente^ objIndependiente;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		if (listaIndependiente[i]->getDNI() == dni) {
			objIndependiente = listaIndependiente[i];
			break;
		}
	}
	return objIndependiente;
}

C_Independiente^ C_IndependienteController::BuscarUnC_IndependientexEmail(String^ email) {
	C_Independiente^ objIndependiente;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		if (listaIndependiente[i]->getEmail() == email) {
			objIndependiente = listaIndependiente[i];
			break;
		}
	}
	return objIndependiente;
}

void C_IndependienteController::ActualizarC_Independiente(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update C_Independiente set Email='" + Email + "', Contrasenha='" + Contrasenha + "', Direccion='" + Direccion + "', Distrito='" + Distrito + "', Telefono=" + Telefono + " where DNI='" + DNI + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

int C_IndependienteController::ExisteC_IndependienteEmailconDNI(String^ Email, String^ dni) {
	int existe = 0;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		C_Independiente^ objIndependiente = listaIndependiente[i];
		if (objIndependiente->getEmail() == Email && objIndependiente->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}
int C_IndependienteController::ExisteC_IndependienteTelefonoconDNI(int Telefono, String^ dni) {
	int existe = 0;
	List<C_Independiente^>^ listaIndependiente = BuscarC_IndependienteTodas();
	for (int i = 0; i < listaIndependiente->Count; i++) {
		C_Independiente^ objIndependiente = listaIndependiente[i];
		if (objIndependiente->getTelefono() == Telefono && objIndependiente->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}
