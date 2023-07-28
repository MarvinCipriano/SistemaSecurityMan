#include "C_EmpresaController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void C_EmpresaController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void C_EmpresaController::cerrarConexion() {
	this->objConexion->Close();
}

C_EmpresaController::C_EmpresaController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< C_Empresa^>^ C_EmpresaController::BuscarListaC_EmpresaxNombrexRUC(String^ nombre, String^ ruc) {
	List<C_Empresa^>^ listaEmpresaEncontradas = gcnew List<C_Empresa^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from C_Empresa where Nombre like '" + nombre + "%' and RUC like '" + ruc + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ RUC = safe_cast<String^>(objData[1]);
		String^ Email = safe_cast<String^>(objData[2]);
		String^ Contrasenha = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]); 
		int Telefono = safe_cast<int>(objData[6]);
		//	
		C_Empresa^ objEmpresa = gcnew C_Empresa(Nombre, RUC, Email, Contrasenha, Direccion, Distrito, Telefono);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
}
//////////////////////////////////////////////////////////
//ELIMINAR
List<C_Empresa^>^ C_EmpresaController::BuscarC_EmpresaTodas() {
	List<C_Empresa^>^ listaEmpresaEncontradas = gcnew List<C_Empresa^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from C_Empresa";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ RUC = safe_cast<String^>(objData[1]);
		String^ Email = safe_cast<String^>(objData[2]);
		String^ Contrasenha = safe_cast<String^>(objData[3]);
		String^ Direccion = safe_cast<String^>(objData[4]);
		String^ Distrito = safe_cast<String^>(objData[5]);
		int Telefono = safe_cast<int>(objData[6]);
		//	
		C_Empresa^ objEmpresa = gcnew C_Empresa(Nombre, RUC, Email, Contrasenha, Direccion, Distrito, Telefono);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
};

void C_EmpresaController::EliminarC_Empresa(String^ ruc) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from C_Empresa where RUC='" + ruc + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int C_EmpresaController::ExisteC_EmpresaNombre(String^ Nombre) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getNombre() == Nombre) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int C_EmpresaController::ExisteC_EmpresaEmail(String^ email) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getEmail() == email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int C_EmpresaController::ExisteC_EmpresaTelefono(int Telefono) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getTelefono() == Telefono) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int C_EmpresaController::ExisteC_EmpresaRUC(String^ ruc) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getRUC() == ruc) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void C_EmpresaController::RegistrarC_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert C_Empresa(Nombre,RUC,Email,Contrasenha,Direccion,Distrito,Telefono) values ('" + Nombre + "','" + RUC + "','" + Email + "','" + Contrasenha + "','" + Direccion + "','" + Distrito + "'," + Telefono + ")";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
C_Empresa^ C_EmpresaController::BuscarUnC_EmpresaxRUC(String^ ruc) {
	C_Empresa^ objEmpresa;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		if (listaEmpresa[i]->getRUC() == ruc) {
			objEmpresa = listaEmpresa[i];
			break;
		}
	}
	return objEmpresa;
}

C_Empresa^ C_EmpresaController::BuscarUnC_EmpresaxEmail(String^ email) {
	C_Empresa^ objEmpresa;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		if (listaEmpresa[i]->getEmail() == email) {
			objEmpresa = listaEmpresa[i];
			break;
		}
	}
	return objEmpresa;
}

void C_EmpresaController::ActualizarC_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update C_Empresa set Email='" + Email + "', Contrasenha='" + Contrasenha + "', Direccion='" + Direccion + "', Distrito='" + Distrito + "', Telefono=" + Telefono + " where RUC='" + RUC + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

int C_EmpresaController::ExisteC_EmpresaEmailconRUC(String^ Email, String^ RUC) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getEmail() == Email && objEmpresa->getRUC() != RUC) {
			existe = 1;
			break;
		}
	}
	return existe;
}
int C_EmpresaController::ExisteC_EmpresaTelefonoconRUC(int Telefono, String^ RUC) {
	int existe = 0;
	List<C_Empresa^>^ listaEmpresa = BuscarC_EmpresaTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		C_Empresa^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getTelefono() == Telefono && objEmpresa->getRUC() != RUC) {
			existe = 1;
			break;
		}
	}
	return existe;
}