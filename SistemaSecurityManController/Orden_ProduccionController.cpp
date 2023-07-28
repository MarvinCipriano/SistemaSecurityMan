#include"Orden_ProduccionController.h"
#include"TecnicoController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void Orden_ProduccionController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void Orden_ProduccionController::cerrarConexion() {
	this->objConexion->Close();
}

Orden_ProduccionController::Orden_ProduccionController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////
//BUSCAR
List< Orden_Produccion^>^ Orden_ProduccionController::BuscarListaOrden_ProduccionxTecnico(String^ DNITecnico) {
	List<Orden_Produccion^>^ listaOrden_ProduccionEncontradas = gcnew List<Orden_Produccion^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Orden_Produccion where DNITecnico = " + DNITecnico;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int n_produccion = safe_cast<int>(objData[0]);
		String^ DNI = safe_cast<String^>(objData[1]);
		int Cant_Basico = safe_cast<int>(objData[2]);
		int Cant_Premium = safe_cast<int>(objData[3]);
		String^ FechaLimite = safe_cast<String^>(objData[4]);
		//
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		Tecnico^ objTecnico = objTecnicoController->BuscarUnTecnicoxDNI(DNI);
		//
		Orden_Produccion^ objOrden_Produccion = gcnew Orden_Produccion(n_produccion, objTecnico, Cant_Basico, Cant_Premium, FechaLimite);
		listaOrden_ProduccionEncontradas->Add(objOrden_Produccion);
	}
	cerrarConexion();
	return listaOrden_ProduccionEncontradas;
}
///////////////////
//BORRAR
List<Orden_Produccion^>^ Orden_ProduccionController::BuscarOrden_ProduccionTodas() {
	List<Orden_Produccion^>^ listaOrden_ProduccionEncontradas = gcnew List<Orden_Produccion^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Orden_Produccion";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int n_produccion = safe_cast<int>(objData[0]);
		String^ DNI = safe_cast<String^>(objData[1]);
		int Cant_Basico = safe_cast<int>(objData[2]);
		int Cant_Premium = safe_cast<int>(objData[3]);
		String^ FechaLimite = safe_cast<String^>(objData[4]);
		//
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		Tecnico^ objTecnico = objTecnicoController->BuscarUnTecnicoxDNI(DNI);
		//
		Orden_Produccion^ objOrden_Produccion = gcnew Orden_Produccion(n_produccion, objTecnico, Cant_Basico, Cant_Premium, FechaLimite);
		listaOrden_ProduccionEncontradas->Add(objOrden_Produccion);
	}
	cerrarConexion();
	return listaOrden_ProduccionEncontradas;
};

void Orden_ProduccionController::EscribirArchivo(List <Orden_Produccion^>^ listaOrden) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaOrden->Count);
	for (int i = 0; i < listaOrden->Count; i++) {
		Orden_Produccion^ objOrdenProduccion = listaOrden[i];
		lineasArchivo[i] = objOrdenProduccion->getnumero_produccion() + ";" + objOrdenProduccion->getTecnico()->getDNI() + ";" + objOrdenProduccion->getcant_AlarmaBasica() + ";" + objOrdenProduccion->getcant_AlarmaPremimum() + ";" + objOrdenProduccion->getFechaLimite();
	}
	File::WriteAllLines("OrdenProduccion.txt", lineasArchivo);
};

void Orden_ProduccionController::EliminarOrden_ProduccionxCodigo(String^ codigo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "delete Orden_Produccion where numero_produccion =" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
///////////////////
//NUEVO
void Orden_ProduccionController::RegistrarOrden_Produccion(int numero_produccion, Tecnico^ objTecnico, int cantBasico, int cantPremium, String^ FechaLimite) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Orden_Produccion(DNITecnico,cant_AlarmaBasica,cant_AlarmaPremimum,FechaLimite) values ('" + objTecnico->getDNI() + "'," + cantBasico +"," + cantPremium +",'" + FechaLimite +"')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}



