#include "C_Independiente.h"

using namespace SistemaSecurityManModel;

C_Independiente::C_Independiente() {
}
C_Independiente::C_Independiente(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {

	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->Email = Email;
	this->Contrasenha = Contrasenha;
	this->Direccion = Direccion;
	this->Distrito = Distrito;
	this->Telefono = Telefono;

}

String^ C_Independiente::getNombre() {
	return this->Nombre;
};//obtiene el valor
void C_Independiente::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ C_Independiente::getApellido() {
	return this->Apellido;
};
void C_Independiente::setApellido(String^ Apellido) {
	this->Apellido = Apellido;
};

String^ C_Independiente::getDNI() {
	return this->DNI;
};
void C_Independiente::setDNI(String^ DNI) {
	this->DNI = DNI;
};

String^ C_Independiente::getEmail() {
	return this->Email;
};
void C_Independiente::setEmail(String^ Email) {
	this->Email = Email;
};

String^ C_Independiente::getContrasenha() {
	return this->Contrasenha;
};
void C_Independiente::setContrasenha(String^ Contrasenha) {
	this->Contrasenha = Contrasenha;
};

String^ C_Independiente::getDireccion() {
	return this->Direccion;
};
void C_Independiente::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

String^ C_Independiente::getDistrito() {
	return this->Distrito;
};
void C_Independiente::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
};

int C_Independiente::getTelefono() {
	return this->Telefono;
};
void C_Independiente::setTelefono(int Telefono) {
	this->Telefono = Telefono;
};