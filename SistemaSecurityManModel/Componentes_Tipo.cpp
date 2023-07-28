#include "Componentes_Tipo.h"

using namespace SistemaSecurityManModel;

Componentes_Tipo::Componentes_Tipo() {
}
Componentes_Tipo::Componentes_Tipo(int Codigo, String^ Nombre, String^ Utilidad, Tipo_Producto^ objTipo_Producto) {

	this->Nombre = Nombre;
	this->Utilidad = Utilidad;
	this->Codigo = Codigo;
	this->objTipo_Producto = objTipo_Producto;

}

String^ Componentes_Tipo::getNombre() {
	return this->Nombre;
};//obtiene el valor
void Componentes_Tipo::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ Componentes_Tipo::getUtilidad() {
	return this->Utilidad;
};
void Componentes_Tipo::setUtilidad(String^ Utilidad) {
	this->Utilidad = Utilidad;
};

int Componentes_Tipo::getCodigo() {
	return this->Codigo;
};
void Componentes_Tipo::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};

Tipo_Producto^ Componentes_Tipo::getTipo_Producto() {
	return this->objTipo_Producto;
};
void Componentes_Tipo::setTipo_Producto(Tipo_Producto^ objTipo_Producto) {
	this->objTipo_Producto = objTipo_Producto;
};