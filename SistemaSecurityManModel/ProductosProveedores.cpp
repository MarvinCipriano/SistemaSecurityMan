#include "ProductosProveedores.h"

using namespace SistemaSecurityManModel;

ProductosProveedores::ProductosProveedores() {
}
ProductosProveedores::ProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock) {

	this->Codigo = Codigo;
	this->objProveedores = objProveedores;
	this->Precio = Precio;
	this->Stock = Stock;
	this->objComponentes = objComponentes;
}

//propiedades GET y SET   
int ProductosProveedores::getCodigo() {
	return this->Codigo;
};
void ProductosProveedores::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};

Proveedores^ ProductosProveedores::getProveedores() {
	return this->objProveedores;
};//obtiene el valor
void ProductosProveedores::setProveedores(Proveedores^ objProveedores) {
	this->objProveedores = objProveedores;
};// actualiza el valor

Componentes^ ProductosProveedores::getComponentes() {
	return this->objComponentes;
};
void ProductosProveedores::setComponentes(Componentes^ objComponentes) {
	this->objComponentes = objComponentes;
};

double ProductosProveedores::getPrecio() {
	return this->Precio;
};
void ProductosProveedores::setPrecio(double Precio) {
	this->Precio = Precio;
};

int ProductosProveedores::getStock() {
	return this->Stock;
};
void ProductosProveedores::setStock(int Stock) {
	this->Stock = Stock;
};