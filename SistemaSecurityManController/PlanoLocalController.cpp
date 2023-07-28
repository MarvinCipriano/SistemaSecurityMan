#include "PlanoLocalController.h"
#include "LocalesController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;
//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void PlanoLocalController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void PlanoLocalController::cerrarConexion() {
	this->objConexion->Close();
}

PlanoLocalController::PlanoLocalController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR

///////////////////////////////////////////////////////////////
//ELIMINAR
List<PlanoLocal^>^ PlanoLocalController::BuscarPlanoLocalTodas() {
	List<PlanoLocal^>^ listaLocales = gcnew List<PlanoLocal^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from select * from PlanoLocales ";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		int CodigoLocal = safe_cast<int>(objData[1]);
		String^ NombreImagen = safe_cast<String^>(objData[2]);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		PlanoLocal^ objPlanoLocal = gcnew PlanoLocal(Codigo, objLocales, NombreImagen);
		listaLocales->Add(objPlanoLocal);
	}
	cerrarConexion();
	return listaLocales;
}
//////////////////////////////////////////////////////////
//NUEVO

void PlanoLocalController::RegistrarPlanoLocal(int CodigoLocal, String^ NombrePlano) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert PlanoLocales(CodigoLocal,NombrePlano) values (" + CodigoLocal + ",'" + NombrePlano + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
//////////////////////////////////////////////////////////
//EDITAR
PlanoLocal^ PlanoLocalController::BuscarUnPlanoLocalxCodigo(int codigo) {
	PlanoLocal^ objPlanoLocal = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from PlanoLocales where CodigoLocal = " + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		int CodigoLocal = safe_cast<int>(objData[1]);
		String^ NombreImagen = safe_cast<String^>(objData[2]);
		//
		LocalesController^ objLocalesController = gcnew LocalesController();
		Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(Convert::ToString(CodigoLocal));
		//
		objPlanoLocal = gcnew PlanoLocal(Codigo, objLocales, NombreImagen);
		
	}
	cerrarConexion();
	return objPlanoLocal;
}