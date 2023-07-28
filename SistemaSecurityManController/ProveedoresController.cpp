#include "ProveedoresController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void ProveedoresController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void ProveedoresController::cerrarConexion() {
	this->objConexion->Close();
}

ProveedoresController::ProveedoresController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Proveedores^>^ ProveedoresController::BuscarListaProveedoresxNombrexRUC(String^ nombre, String^ ruc) {
	List<Proveedores^>^ listaEmpresaEncontradas = gcnew List<Proveedores^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Proveedores where Nombre like '" + nombre + "%' and RUC like '" + ruc + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^> (objData[0]);
		String^ RUC = safe_cast<String^> (objData[1]);
		String^ Email = safe_cast<String^>(objData[2]);
		String^ Direccion = safe_cast<String^>(objData[3]);
		int NumeroTel = safe_cast<int> (objData[4]);
		//
		Proveedores^ objEmpresa = gcnew Proveedores(Nombre, RUC, Email, Direccion, NumeroTel);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
}

///////////////////////////////////////////////////////////////
//ELIMINAR
List<Proveedores^>^ ProveedoresController::BuscarProveedoresTodas() {
	List<Proveedores^>^ listaEmpresaEncontradas = gcnew List<Proveedores^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Proveedores";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^> (objData[0]);
		String^ RUC = safe_cast<String^> (objData[1]);
		String^ Email = safe_cast<String^>(objData[2]);
		String^ Direccion = safe_cast<String^>(objData[3]);
		int NumeroTel = safe_cast<int> (objData[4]);
		//
		Proveedores^ objEmpresa = gcnew Proveedores(Nombre, RUC, Email, Direccion, NumeroTel);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
};

void ProveedoresController::EliminarProveedoresxRUC(String^ ruc) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Proveedores where RUC='" + ruc + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int ProveedoresController::ExisteProveedoresxNombre(String^ Nombre) {
	int existe = 0;
	List<Proveedores^>^ listaEmpresa = BuscarProveedoresTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		Proveedores^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getNombre() == Nombre) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int ProveedoresController::ExisteProveedoresxRUC(String^ ruc) {
	int existe = 0;
	List<Proveedores^>^ listaEmpresa = BuscarProveedoresTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		Proveedores^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getRUC() == ruc) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int ProveedoresController::ExisteProveedoresxEmail(String^ email) {
	int existe = 0;
	List<Proveedores^>^ listaEmpresa = BuscarProveedoresTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		Proveedores^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getEmail() == email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int ProveedoresController::ExisteProveedoresxTelefono(String^ telefono) {
	int existe = 0;
	List<Proveedores^>^ listaEmpresa = BuscarProveedoresTodas();
	for (int i = 0; i < listaEmpresa->Count; i++) {
		Proveedores^ objEmpresa = listaEmpresa[i];
		if (objEmpresa->getTelefono() == Convert::ToInt32(telefono)) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void ProveedoresController::RegistrarProveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int NumeroTel) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Proveedores(Nombre,RUC,Email,Direccion,Telefono) values ('" + Nombre + "','" + RUC + "','" + Email + "','" + Direccion + "'," + NumeroTel + ")";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
Proveedores^ ProveedoresController::BuscarUnProveedoresxRUC(String^ ruc) {
	Proveedores^ objProveedores = gcnew Proveedores();
	List<Proveedores^>^ listaProveedores = BuscarProveedoresTodas();
	for (int i = 0; i < listaProveedores->Count; i++) {
		if (listaProveedores[i]->getRUC() == ruc) {
			objProveedores = listaProveedores[i];
			break;
		}
	}
	return objProveedores;
}

Proveedores^ ProveedoresController::BuscarUnProveedoresxNombre(String^ nombre) {
	Proveedores^ objProveedores;
	List<Proveedores^>^ listaProveedores = BuscarProveedoresTodas();
	for (int i = 0; i < listaProveedores->Count; i++) {
		if (listaProveedores[i]->getNombre() == nombre) {
			objProveedores = listaProveedores[i];
			break;
		}
	}
	return objProveedores;
}

void ProveedoresController::ActualizarProveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int NumeroTel) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Proveedores set Email='" + Email + "', Direccion='" + Direccion + "', Telefono=" + NumeroTel + " where RUC='" + RUC + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

int ProveedoresController::ExisteProveedoresEmailconRUC(String^ Email, String^ RUC) {
	int existe = 0;
	List<Proveedores^>^ listaProveedores = BuscarProveedoresTodas();
	for (int i = 0; i < listaProveedores->Count; i++) {
		Proveedores^ objProveedores = listaProveedores[i];
		if (objProveedores->getEmail() == Email && objProveedores->getRUC() != RUC) {
			existe = 1;
			break;
		}
	}
	return existe;
}
int ProveedoresController::ExisteProveedoresTelefonoconRUC(int Telefono, String^ RUC) {
	int existe = 0;
	List<Proveedores^>^ listaProveedores = BuscarProveedoresTodas();
	for (int i = 0; i < listaProveedores->Count; i++) {
		Proveedores^ objProveedores = listaProveedores[i];
		if (objProveedores->getTelefono() == Telefono && objProveedores->getRUC() != RUC) {
			existe = 1;
			break;
		}
	}
	return existe;
}