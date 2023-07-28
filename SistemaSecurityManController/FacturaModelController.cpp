#include "FacturaModelController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void FacturaModelController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void FacturaModelController::cerrarConexion() {
	this->objConexion->Close();
}

FacturaModelController::FacturaModelController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< FacturaModel^>^ FacturaModelController::BuscarListaFacturaxID(String^ id) {
	List<FacturaModel^>^ listaEmpresaEncontradas = gcnew List<FacturaModel^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from FacturaClienteModel where ID='" + id + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int NumFactura = safe_cast<int>(objData[0]);
		String^ Fecha = safe_cast<String^>(objData[1]);
		int NumCompra = safe_cast<int>(objData[2]);
		String^ NombreCliente = safe_cast<String^>(objData[3]);
		String^ ID = safe_cast<String^>(objData[4]);
		String^ Direccion = safe_cast<String^>(objData[5]);
		String^ Distrito = safe_cast<String^>(objData[6]);
		Decimal^ CostoEnvio = safe_cast<Decimal^>(objData[7]);
		Decimal^ Total = safe_cast<Decimal^>(objData[8]);
		//	
		FacturaModel^ objEmpresa = gcnew FacturaModel(NumFactura, Fecha, NumCompra, NombreCliente, ID, Direccion, Distrito, Convert::ToDouble(CostoEnvio), Convert::ToDouble(Total));
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
}

//////////////////////////////////////////////////////////
//ELIMINAR
List<FacturaModel^>^ FacturaModelController::BuscarFacturaTodas() {
	List<FacturaModel^>^ listaEmpresaEncontradas = gcnew List<FacturaModel^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from FacturaClienteModel";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int NumFactura = safe_cast<int>(objData[0]);
		String^ Fecha = safe_cast<String^>(objData[1]);
		int NumCompra = safe_cast<int>(objData[2]);
		String^ NombreCliente = safe_cast<String^>(objData[3]);
		String^ ID = safe_cast<String^>(objData[4]);
		String^ Direccion = safe_cast<String^>(objData[5]);
		String^ Distrito = safe_cast<String^>(objData[6]);
		Decimal^ CostoEnvio = safe_cast<Decimal^>(objData[7]);
		Decimal^ Total = safe_cast<Decimal^>(objData[8]);
		//	
		FacturaModel^ objEmpresa = gcnew FacturaModel(NumFactura, Fecha, NumCompra, NombreCliente, ID, Direccion, Distrito, Convert::ToDouble(CostoEnvio), Convert::ToDouble(Total));
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
}; 

//////////////////////////////////////////////////////////
//NUEVO
void FacturaModelController::RegistrarFactura(int NumFactura, String^ Fecha, int NumCompra, String^ NombreCliente, String^ ID, String^ Direccion, String^ Distrito, Decimal^ CostoEnvio, Decimal^ Total) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert FacturaClienteModel(NumFactura,Fecha,NumCompra,NombreCliente,ID,Direccion,Distrito,CostoEnvio,Total) values(" + NumFactura + ",'" + Fecha + "','" + NumCompra + "','" + NombreCliente + "','" + ID + "','" + Direccion + "','" + Distrito + "','" + CostoEnvio + "','" + Total + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
FacturaModel^ FacturaModelController::BuscarUnFacturaxCodigo(int codigo) {
	FacturaModel^ objEmpresa = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from FacturaClienteModel where NumFactura=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int NumFactura = safe_cast<int>(objData[0]);
		String^ Fecha = safe_cast<String^>(objData[1]);
		int NumCompra = safe_cast<int>(objData[2]);
		String^ NombreCliente = safe_cast<String^>(objData[3]);
		String^ ID = safe_cast<String^>(objData[4]);
		String^ Direccion = safe_cast<String^>(objData[5]);
		String^ Distrito = safe_cast<String^>(objData[6]);
		Decimal^ CostoEnvio = safe_cast<Decimal^>(objData[7]);
		Decimal^ Total = safe_cast<Decimal^>(objData[8]);
		//	
		objEmpresa = gcnew FacturaModel(NumFactura, Fecha, NumCompra, NombreCliente, ID, Direccion, Distrito, Convert::ToDouble(CostoEnvio), Convert::ToDouble(Total));
	}
	cerrarConexion();
	return objEmpresa;
}