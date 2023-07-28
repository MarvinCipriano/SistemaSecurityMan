#include "CarritoFacturaClienteController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void CarritoFacturaClienteController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void CarritoFacturaClienteController::cerrarConexion() {
	this->objConexion->Close();
}

CarritoFacturaClienteController::CarritoFacturaClienteController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< CarritoFacturaCliente^>^ CarritoFacturaClienteController::BuscarListaCarritoxFactura(String^ Factura) {
	List<CarritoFacturaCliente^>^ listaEmpresaEncontradas = gcnew List<CarritoFacturaCliente^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from CarritoFacturaCliente where NumFacturaModel=" + Factura;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ TipoProducto = safe_cast<String^>(objData[0]);
		int Unidades = safe_cast<int>(objData[1]);
		Decimal^ PrecioUnidad = safe_cast<Decimal^>(objData[2]);
		Decimal^ Total = safe_cast<Decimal^>(objData[3]);
		int NumFacturaModel = safe_cast<int>(objData[4]);
		//	
		CarritoFacturaCliente^ objEmpresa = gcnew CarritoFacturaCliente(TipoProducto, Unidades, Convert::ToDouble(PrecioUnidad), Convert::ToDouble(Total), NumFacturaModel);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
}
//////////////////////////////////////////////////////////
//ELIMINAR
List<CarritoFacturaCliente^>^ CarritoFacturaClienteController::BuscarCarritoTodas() {
	List<CarritoFacturaCliente^>^ listaEmpresaEncontradas = gcnew List<CarritoFacturaCliente^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from FacturaClienteModel";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ TipoProducto = safe_cast<String^>(objData[0]);
		int Unidades = safe_cast<int>(objData[1]);
		Decimal^ PrecioUnidad = safe_cast<Decimal^>(objData[2]);
		Decimal^ Total = safe_cast<Decimal^>(objData[3]);
		int NumFacturaModel = safe_cast<int>(objData[4]);
		//	
		CarritoFacturaCliente^ objEmpresa = gcnew CarritoFacturaCliente(TipoProducto, Unidades, Convert::ToDouble(PrecioUnidad), Convert::ToDouble(Total), NumFacturaModel);
		listaEmpresaEncontradas->Add(objEmpresa);
	}
	cerrarConexion();
	return listaEmpresaEncontradas;
};

//////////////////////////////////////////////////////////
//NUEVO
void CarritoFacturaClienteController::RegistrarCarrito(String^ TipoProducto, int Unidades, double PrecioUnidad, double Total, int NumFacturaModel) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert CarritoFacturaCliente(TipoProducto,Unidades,PrecioUnidad,Total,NumFacturaModel) values ('" + TipoProducto + "'," + Unidades + "," + Convert::ToDecimal(PrecioUnidad) + "," + Convert::ToDecimal(Total) + "," + NumFacturaModel + ")";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}
