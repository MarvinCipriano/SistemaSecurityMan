#include "BalanceController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void BalanceController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void BalanceController::cerrarConexion() {
	this->objConexion->Close();
}

BalanceController::BalanceController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
//BUSCAR
Balance^ BalanceController::BuscarBalance() {
	Balance^ objAdmin = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Balance";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//--
		double Ingresos = safe_cast<double>(objData[0]);
		double Egresos = safe_cast<double>(objData[1]);
		//--
		objAdmin = gcnew Balance(Ingresos, Egresos);
	}
	cerrarConexion();
	return objAdmin;
}

void BalanceController::ReiniciarBalance() {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Balance set Ingresos = 0, Egresos = 0";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

void BalanceController::ActualizarIngresos(double ingresos) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Balance set Ingresos =" + ingresos;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

void BalanceController::ActualizarEgresos(double egresos) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Balance set Egresos = " + egresos;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
