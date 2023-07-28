#include "TecnicoController.h"
using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void TecnicoController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void TecnicoController::cerrarConexion() {
	this->objConexion->Close();
}


TecnicoController::TecnicoController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Tecnico^>^ TecnicoController::BuscarListaTecnicoxNombrexApellidoxDNI(String^ nombre, String^ apellido, String^ dni) {
	List<Tecnico^>^ listaTecnicoEncontradas = gcnew List<Tecnico^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Tecnico where Nombre like '" + nombre + "%' and Apellido like '" + apellido + "%' and DNI like '" + dni + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[5]);
		String^ Direccion = safe_cast<String^>(objData[6]);
		int NumeroTel = safe_cast<int>(objData[4]);
		//
		Tecnico^ objTecnico = gcnew Tecnico(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, NumeroTel);
		listaTecnicoEncontradas->Add(objTecnico);
	}
	cerrarConexion();
	return listaTecnicoEncontradas;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<Tecnico^>^ TecnicoController::BuscarTecnicoTodas() {
	List<Tecnico^>^ listaTecnicoEncontradas = gcnew List<Tecnico^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Tecnico";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Apellido = safe_cast<String^>(objData[1]);
		String^ DNI = safe_cast<String^>(objData[2]);
		String^ Email = safe_cast<String^>(objData[3]);
		String^ Contrasenha = safe_cast<String^>(objData[5]);
		String^ Direccion = safe_cast<String^>(objData[6]);
		int NumeroTel = safe_cast<int>(objData[4]);
		//
		Tecnico^ objTecnico = gcnew Tecnico(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, NumeroTel);
		listaTecnicoEncontradas->Add(objTecnico);
	}
	cerrarConexion();
	return listaTecnicoEncontradas;
};

void TecnicoController::EliminarTecnico(String^ dni) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Tecnico where DNI='" + dni + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
void TecnicoController::EscribirArchivo(List < Tecnico^>^ listaTecnico) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaTecnico->Count);
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		lineasArchivo[i] = objTecnico->getNombre() + ";" + objTecnico->getApellido() + ";" + objTecnico->getDNI() + ";" + objTecnico->getEmail() + ";" + objTecnico->getContrasenha() + ";" + objTecnico->getDireccion() + ";" + objTecnico->getTelefono();
	}
	File::WriteAllLines("Tecnico.txt", lineasArchivo);
};

//////////////////////////////////////////////////////////
//NUEVO
int TecnicoController::ExisteTecnicoxDNI(String^ DNI) {
	int existe = 0;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		if (objTecnico->getDNI() == DNI) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int TecnicoController::ExisteTecnicoxEmail(String^ email) {
	int existe = 0;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		if (objTecnico->getEmail() == email) {
			existe = 1;
			break;
		}
	}
	return existe;
}

int TecnicoController::ExisteTecnicoxTelefono(int telefono) {
	int existe = 0;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		if (objTecnico->getTelefono() == telefono) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void TecnicoController::RegistrarTecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Tecnico(Nombre,Apellido,DNI,Email,Telefono,Contrasenha,Direccion) values ('" + Nombre + "','" + Apellido + "','" + DNI + "','" + Email + "'," + Telefono + ",'" + Contrasenha + "','" + Direccion +"')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
Tecnico^ TecnicoController::BuscarUnTecnicoxDNI(String^ dni) {
	Tecnico^ objTecnico;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		if (listaTecnico[i]->getDNI() == dni) {
			objTecnico = listaTecnico[i];
			break;
		}
	}
	return objTecnico;
}

Tecnico^ TecnicoController::BuscarUnTecnicoxEmail(String^ email) {
	Tecnico^ objTecnico;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		if (listaTecnico[i]->getEmail() == email) {
			objTecnico = listaTecnico[i];
			break;
		}
	}
	return objTecnico;
}

void TecnicoController::ActualizarTecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int Telefono) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Tecnico set Email='" + Email + "', Contrasenha='" + Contrasenha + "', Telefono=" + Telefono + ", Direccion='" + Direccion + "' where DNI='" + DNI + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();	
}

int TecnicoController::ExisteTecnicoxEmailconDNI(String^ Email, String^ dni) {
	int existe = 0;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		if (objTecnico->getEmail() == Email && objTecnico->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}
int TecnicoController::ExisteTecnicoxTelefonoconDNI(int Telefono, String^ dni) {
	int existe = 0;
	List<Tecnico^>^ listaTecnico = BuscarTecnicoTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		Tecnico^ objTecnico = listaTecnico[i];
		if (objTecnico->getTelefono() == Telefono && objTecnico->getDNI() != dni) {
			existe = 1;
			break;
		}
	}
	return existe;
}