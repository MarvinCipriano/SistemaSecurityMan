#include "CarritoProveedores.h"

using namespace SistemaSecurityManModel;

CarritoProveedores::CarritoProveedores() {
}

CarritoProveedores::CarritoProveedores(ProductosProveedores^ objComponentes, int Unidades, double Precio_t) {
	this->Unidades = Unidades;
	this->objComponentes = objComponentes;
	this->Precio_t = Precio_t;
}

int CarritoProveedores::getUnidades() {
	return this->Unidades;
};
void CarritoProveedores::setUnidades(int Unidades) {
	this->Unidades = Unidades;
};

ProductosProveedores^ CarritoProveedores::getProductosProveedores() {
	return this->objComponentes;
};//obtiene el valor
void CarritoProveedores::setProductosProveedores(ProductosProveedores^ objComponentes) {
	this->objComponentes = objComponentes;
};// actualiza el valor

double CarritoProveedores::getPrecio_t() {
	return this->Precio_t;
};
void CarritoProveedores::setPrecio_t(double Precio_t) {
	this->Precio_t = Precio_t;
};