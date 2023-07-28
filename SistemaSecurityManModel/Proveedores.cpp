#include "Proveedores.h"

using namespace SistemaSecurityManModel;

Proveedores::Proveedores() {
}
Proveedores::Proveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int Telefono) {

	this->Nombre = Nombre;
	this->RUC = RUC;
	this->Email = Email;
	this->Direccion = Direccion;
	this->Telefono = Telefono;
}

String^ Proveedores::getNombre() {
	return this->Nombre;
};//obtiene el valor
void Proveedores::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ Proveedores::getRUC() {
	return this->RUC;
};
void Proveedores::setRUC(String^ RUC) {
	this->RUC = RUC;
};

String^ Proveedores::getEmail() {
	return this->Email;
};
void Proveedores::setEmail(String^ Email) {
	this->Email = Email;
};

String^ Proveedores::getDireccion() {
	return this->Direccion;
};
void Proveedores::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

int Proveedores::getTelefono() {
	return this->Telefono;
};
void Proveedores::setTelefono(int Telefono) {
	this->Telefono = Telefono;
};