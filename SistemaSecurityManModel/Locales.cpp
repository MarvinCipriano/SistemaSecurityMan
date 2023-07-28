#include "Locales.h"

using namespace SistemaSecurityManModel;

Locales::Locales() {
}
Locales::Locales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->Ubicacion = Ubicacion;
	this->objClientes = objClientes;
	this->Direccion = Direccion;
	this->Distrito = Distrito;

}

int Locales::getCodigo() {
	return this->Codigo;
};//obtiene el valor
void Locales::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};// actualiza el valor

String^ Locales::getNombre() {
	return this->Nombre;
};
void Locales::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};

String^ Locales::getUbicacion() {
	return this->Ubicacion;
};
void Locales::setUbicacion(String^ Ubicacion) {
	this->Ubicacion = Ubicacion;
};

Clientes^ Locales::getClientes() {
	return this->objClientes;
};
void Locales::setClientes(Clientes^ objClientes) {
	this->objClientes = objClientes;
};

String^ Locales::getDireccion() {
	return this->Direccion;
};
void Locales::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

String^ Locales::getDistrito() {
	return this->Distrito;
};
void Locales::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
};