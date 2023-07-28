#include "Tipo_Producto.h"

using namespace SistemaSecurityManModel;

Tipo_Producto::Tipo_Producto() {


}
Tipo_Producto::Tipo_Producto(int Codigo, String^ Nombre, double Precio, String^ Caracteristicas) {

	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->Caracteristicas = Caracteristicas;

}

//propiedades GET y SET        
int Tipo_Producto::getCodigo() {
	return this->Codigo;
};//obtiene el valor
void Tipo_Producto::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};// actualiza el valor

String^ Tipo_Producto::getNombre() {
	return this->Nombre;
};
void Tipo_Producto::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};

double Tipo_Producto::getPrecio() {
	return this->Precio;
};
void Tipo_Producto::setPrecio(double Precio) {
	this->Precio = Precio;
};

String^ Tipo_Producto::getCaracteristicas() {
	return this->Caracteristicas;
};
void Tipo_Producto::setCaracteristicas(String^ Caracteristicas) {
	this->Caracteristicas = Caracteristicas;
};