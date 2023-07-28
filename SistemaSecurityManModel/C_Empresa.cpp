#include "C_Empresa.h"

using namespace SistemaSecurityManModel;

C_Empresa::C_Empresa() {
}
C_Empresa::C_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono) {

	this->Nombre = Nombre;
	this->RUC = RUC;
	this->Email = Email;
	this->Contrasenha = Contrasenha;
	this->Direccion = Direccion;
	this->Distrito = Distrito;
	this->Telefono = Telefono;

}

String^ C_Empresa::getNombre() {
	return this->Nombre;
};//obtiene el valor
void C_Empresa::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
};// actualiza el valor

String^ C_Empresa::getRUC() {
	return this->RUC;
};
void C_Empresa::setRUC(String^ RUC) {
	this->RUC = RUC;
};

String^ C_Empresa::getEmail() {
	return this->Email;
};
void C_Empresa::setEmail(String^ Email) {
	this->Email = Email;
};

String^ C_Empresa::getContrasenha() {
	return this->Contrasenha;
};
void C_Empresa::setContrasenha(String^ Contrasenha) {
	this->Contrasenha = Contrasenha;
};

String^ C_Empresa::getDireccion() {
	return this->Direccion;
};
void C_Empresa::setDireccion(String^ Direccion) {
	this->Direccion = Direccion;
};

String^ C_Empresa::getDistrito() {
	return this->Distrito;
};
void C_Empresa::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
};

int C_Empresa::getTelefono() {
	return this->Telefono;
};
void C_Empresa::setTelefono(int Telefono) {
	this->Telefono = Telefono;
};