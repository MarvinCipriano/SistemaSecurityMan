#include "Tecnico.h"

using namespace SistemaSecurityManModel;

Tecnico::Tecnico() {

}

Tecnico::Tecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int Telefono) {

	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->Email = Email;
	this->Contrasenha = Contrasenha;
	this->Direccion = Direccion;
	this->Telefono = Telefono;
}
String^ Tecnico::getNombre() {
	return this->Nombre;
};//obtiene el valor
void Tecnico::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ Tecnico::getApellido() {
	return this->Apellido;
};
void Tecnico::setApellido(String^ Apellido) {
	this->Apellido = Apellido;
};

String^ Tecnico::getDNI() {
	return this->DNI;
};
void Tecnico::setDNI(String^ DNI) {
	this->DNI = DNI;
};

String^ Tecnico::getEmail() {
	return this->Email;
};
void Tecnico::setEmail(String^ Email) {
	this->Email = Email;
};

String^ Tecnico::getContrasenha() {
	return this->Contrasenha;
};
void Tecnico::setContrasenha(String^ Contrasenha) {
	this->Contrasenha = Contrasenha;
};

String^ Tecnico::getDireccion() {
	return this->Direccion;
};
void Tecnico::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

int Tecnico::getTelefono() {
	return this->Telefono;
};
void Tecnico::setTelefono(int Telefono) {
	this->Telefono = Telefono;
};