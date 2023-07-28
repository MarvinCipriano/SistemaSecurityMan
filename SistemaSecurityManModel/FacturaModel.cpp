#include "FacturaModel.h"

using namespace SistemaSecurityManModel;

FacturaModel::FacturaModel() {
}
FacturaModel::FacturaModel(int NumFactura, String^ Fecha, int NumCompra, String^ NombreCliente, String^ ID, String^ Direccion, String^ Distrito, double CostoEnvio, double Total) {

	this->NumFactura = NumFactura;
	this->Fecha = Fecha;
	this->NumCompra = NumCompra;
	this->NombreCliente = NombreCliente;
	this->ID = ID;
	this->Direccion = Direccion;
	this->Distrito = Distrito;
	this->CostoEnvio = CostoEnvio;
	this->Total = Total;

}

int FacturaModel::getNumFactura() {
	return this->NumFactura;
};
void FacturaModel::setNumFactura(int NumFactura) {
	this->NumFactura = NumFactura;
};

String^ FacturaModel::getFecha() {
	return this->Fecha;
};//obtiene el valor
void FacturaModel::setFecha(String^ Fecha) {
	this->Fecha = Fecha;
};// actualiza el valor

int FacturaModel::getNumCompra() {
	return this->NumCompra;
};
void FacturaModel::setNumCompra(int NumCompra) {
	this->NumCompra = NumCompra;
};

String^ FacturaModel::getNombreCliente() {
	return this->NombreCliente;
};
void FacturaModel::setNombreCliente(String^ NombreCliente) {
	this->NombreCliente = NombreCliente;
};

String^ FacturaModel::getID() {
	return this->ID;
};
void FacturaModel::setID(String^ ID) {
	this->ID = ID;
};

String^ FacturaModel::getDireccion() {
	return this->Direccion;
};
void FacturaModel::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

String^ FacturaModel::getDistrito() {
	return this->Distrito;
};
void FacturaModel::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
};

double FacturaModel::getCostoEnvio() {
	return this->CostoEnvio;
};
void FacturaModel::setCostoEnvio(double CostoEnvio) {
	this->CostoEnvio = CostoEnvio;
};

double FacturaModel::getTotal() {
	return this->Total;
};
void FacturaModel::setTotal(double Total) {
	this->Total = Total;
};






