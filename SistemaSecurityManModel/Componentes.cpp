#include "Componentes.h"

using namespace SistemaSecurityManModel;

Componentes::Componentes() {
}
Componentes::Componentes(String^ Nombre, String^ Utilidad, int Stock, String^ Imagen) {
	this->Nombre = Nombre;
	this->Utilidad = Utilidad;
	this->Stock = Stock;
	this->Imagen = Imagen;
}

String^ Componentes::getNombre() {
	return this->Nombre;
};//obtiene el valor
void Componentes::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ Componentes::getUtilidad() {
	return this->Utilidad;
};
void Componentes::setUtilidad(String^ Utilidad) {
	this->Utilidad = Utilidad;
};

int Componentes::getStock() {
	return this->Stock;
};
void Componentes::setStock(int Stock) {
	this->Stock = Stock;
};

String^ Componentes::getImagen() {
	return this->Imagen;
};
void Componentes::setImagen(String^ Imagen) {
	this->Imagen = Imagen;
};