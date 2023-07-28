#include "HistoricoOcurrenciasController.h"
#include "ClientesController.h"
#include "LocalesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;
//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void HistoricoOcurrenciasController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void HistoricoOcurrenciasController::cerrarConexion() {
	this->objConexion->Close();
}

HistoricoOcurrenciasController::HistoricoOcurrenciasController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List<HistoricoOcurrencias^>^ HistoricoOcurrenciasController::BuscarListaHistoricoOcurrenciasxClientes(String^ id) {
	List<HistoricoOcurrencias^>^ listaHistoricoOcurrencias = gcnew List<HistoricoOcurrencias^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from HistoricoOcurrencias where IdentificacionClientes = " + id ;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ IdentificacionClientes = safe_cast<String^>(objData[1]);
		int CodigoLocales = safe_cast<int>(objData[2]);
		String^ Fecha = safe_cast<String^>(objData[3]);
		String^ Hora	 = safe_cast<String^>(objData[4]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IdentificacionClientes);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocales));
		//
		HistoricoOcurrencias^ objHistoricoOcurrencias = gcnew HistoricoOcurrencias(Codigo, objClientes, objLocales, Fecha, Hora);
		listaHistoricoOcurrencias->Add(objHistoricoOcurrencias);
	}
	cerrarConexion();
	return listaHistoricoOcurrencias;
}
///////////////////////////////////////////////////////////////
//ELIMINAR
List<HistoricoOcurrencias^>^ HistoricoOcurrenciasController::BuscarHistoricoOcurrenciasTodas() {
	List<HistoricoOcurrencias^>^ listaHistoricoOcurrencias = gcnew List<HistoricoOcurrencias^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from HistoricoOcurrencias";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ IdentificacionClientes = safe_cast<String^>(objData[1]);
		int CodigoLocales = safe_cast<int>(objData[2]);
		String^ Fecha = safe_cast<String^>(objData[3]);
		String^ Hora = safe_cast<String^>(objData[4]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IdentificacionClientes);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocales));
		//
		HistoricoOcurrencias^ objHistoricoOcurrencias = gcnew HistoricoOcurrencias(Codigo, objClientes, objLocales, Fecha, Hora);
		listaHistoricoOcurrencias->Add(objHistoricoOcurrencias);
	}
	cerrarConexion();
	return listaHistoricoOcurrencias;
};

//////////////////////////////////////////////////////////
//NUEVO

void HistoricoOcurrenciasController::RegistrarHistoricoOcurrencias(String^ objClientes, int objLocales, String^ Fecha, String^ Hora) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert HistoricoOcurrencias(IdentificacionClientes,CodigoLocales,Fecha,Hora) values ('" + objClientes + "'," + objLocales + ",'" + Fecha + "','" + Hora + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
HistoricoOcurrencias^ HistoricoOcurrenciasController::BuscarUnHistoricoOcurrenciasxCodigo(int codigo) {
	HistoricoOcurrencias^ objHistoricoOcurrencias = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from HistoricoOcurrencias";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ IdentificacionClientes = safe_cast<String^>(objData[1]);
		int CodigoLocales = safe_cast<int>(objData[2]);
		String^ Fecha = safe_cast<String^>(objData[3]);
		String^ Hora = safe_cast<String^>(objData[4]);
		//
		ClientesController^ objClientesController = gcnew ClientesController();
		Clientes^ objClientes = objClientesController->BuscarUnClientesxID(IdentificacionClientes);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocales));
		//
		objHistoricoOcurrencias = gcnew HistoricoOcurrencias(Codigo, objClientes, objLocales, Fecha, Hora);
	}
	cerrarConexion();
	return objHistoricoOcurrencias;
}
