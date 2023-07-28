#include "CarritoCompra.h"

using namespace SistemaSecurityManModel;

CarritoCompra::CarritoCompra() {

}

CarritoCompra::CarritoCompra(Tipo_Producto^ objTipo, int Unidades, double Precio_t) {
	this->Unidades = Unidades;
	this->objTipo = objTipo;
	this->Precio_t = Precio_t;
}

int CarritoCompra::getUnidades() {
	return this->Unidades;
};
void CarritoCompra::setUnidades(int Unidades) {
	this->Unidades = Unidades;
};

Tipo_Producto^ CarritoCompra::getTipo() {
	return this->objTipo;
};//obtiene el valor
void CarritoCompra::setTipo(Tipo_Producto^ objTipo) {
	this->objTipo = objTipo;
};// actualiza el valor

double CarritoCompra::getPrecio_t() {
	return this->Precio_t;
};
void CarritoCompra::setPrecio_t(double Precio_t) {
	this->Precio_t = Precio_t;
};