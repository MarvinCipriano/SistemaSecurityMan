#include "CarritoFacturaCliente.h"

using namespace SistemaSecurityManModel;

CarritoFacturaCliente::CarritoFacturaCliente() {

}

CarritoFacturaCliente::CarritoFacturaCliente(String^ TipoProducto, int Unidades, double PrecioUnidad, double Total, int NumFacturaModel) {
	this->TipoProducto = TipoProducto;
	this->Unidades = Unidades;
	this->PrecioUnidad = PrecioUnidad;
	this->Total = Total;
	this->NumFacturaModel = NumFacturaModel;
}

String^ CarritoFacturaCliente::getTipoProducto() {
	return this->TipoProducto;
};//obtiene el valor
void CarritoFacturaCliente::setTipoProducto(String^ TipoProducto) {
	this->TipoProducto = TipoProducto;
};// actualiza el valor

int CarritoFacturaCliente::getUnidades() {
	return this->Unidades;
};
void CarritoFacturaCliente::setUnidades(int Unidades) {
	this->Unidades = Unidades;
};

double CarritoFacturaCliente::getPrecioUnidad() {
	return this->PrecioUnidad;
};
void CarritoFacturaCliente::setPrecioUnidad(double PrecioUnidad) {
	this->PrecioUnidad = PrecioUnidad;
};

double CarritoFacturaCliente::getTotal() {
	return this->Total;
};
void CarritoFacturaCliente::setTotal(double Total) {
	this->Total = Total;
};

int CarritoFacturaCliente::getNumFacturaModel() {
	return this->NumFacturaModel;
};
void CarritoFacturaCliente::setNumFacturaModel(int NumFacturaModel) {
	this->NumFacturaModel = NumFacturaModel;
};
