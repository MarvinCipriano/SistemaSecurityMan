#include "CostoEnvioController.h"
using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void CostoEnvioController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void CostoEnvioController::cerrarConexion() {
	this->objConexion->Close();
}

CostoEnvioController::CostoEnvioController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Costo_Envio^>^ CostoEnvioController::BuscarListaCosto_EnvioxDistrito(String^ distrito) {
	List<Costo_Envio^>^ listaCosto_EnvioEncontradas = gcnew List<Costo_Envio^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Costo_Envio where Distrito like '" + distrito + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Distrito = safe_cast<String^>(objData[0]);
		Decimal Costo = safe_cast<Decimal>(objData[1]);
		String^ Tiempo = safe_cast<String^> (objData[2]);
		//
		Costo_Envio^ objCosto_Envio = gcnew Costo_Envio(Distrito, Convert::ToDouble(Costo), Tiempo);
		listaCosto_EnvioEncontradas->Add(objCosto_Envio);
	}
	cerrarConexion();
	return listaCosto_EnvioEncontradas;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<Costo_Envio^>^ CostoEnvioController::BuscarCosto_EnvioTodas() {
	List<Costo_Envio^>^ listaCosto_EnvioEncontradas = gcnew List<Costo_Envio^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Costo_Envio";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Distrito = safe_cast<String^>(objData[0]);
		Decimal Costo = safe_cast<Decimal>(objData[1]);
		String^ Tiempo = safe_cast<String^> (objData[2]);
		//
		Costo_Envio^ objCosto_Envio = gcnew Costo_Envio(Distrito, Convert::ToDouble(Costo), Tiempo);
		listaCosto_EnvioEncontradas->Add(objCosto_Envio);
	}
	cerrarConexion();
	return listaCosto_EnvioEncontradas;
};

void CostoEnvioController::EliminarCosto_EnvioxDistrito(String^ distrito) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Costo_Envio where Distrito='" + distrito + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int CostoEnvioController::ExisteCosto_EnvioxDistrito(String^ Distrito) {
	int existe = 0;
	List<Costo_Envio^>^ listaCosto_Envio = BuscarCosto_EnvioTodas();
	for (int i = 0; i < listaCosto_Envio->Count; i++) {
		Costo_Envio^ objCosto_Envio = listaCosto_Envio[i];
		if (objCosto_Envio->getDistrito() == Distrito) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void CostoEnvioController::RegistrarCosto_Envio(String^ Distrito, double Costo, String^ Tiempo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Costo_Envio(Distrito,Costo,Tiempo) values ('" + Distrito + "'," + Costo + ",'" + Tiempo +"')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
Costo_Envio^ CostoEnvioController::BuscarUnCosto_EnvioxDistrito(String^ Distrito) {
	Costo_Envio^ objCosto_Envio = gcnew Costo_Envio();
	List<Costo_Envio^>^ listaCosto_Envio = BuscarCosto_EnvioTodas();
	for (int i = 0; i < listaCosto_Envio->Count; i++) {
		if (listaCosto_Envio[i]->getDistrito() == Distrito) {
			objCosto_Envio = listaCosto_Envio[i];
			break;
		}
	}
	return objCosto_Envio;
}

void CostoEnvioController::ActualizarCosto_Envio(String^ Distrito, double Costo, String^ Tiempo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Costo_Envio set Costo='" + Costo + "', Tiempo='" + Tiempo + "' where Distrito='" + Distrito + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
