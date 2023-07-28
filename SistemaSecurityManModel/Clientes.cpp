#include "Clientes.h"

using namespace SistemaSecurityManModel;

Clientes::Clientes() {
}
Clientes::Clientes(String^ Identificacion, String^ Email, String^ Contrasenha) {
	this->Identificacion = Identificacion;
	this->Email = Email;
	this->Contrasenha = Contrasenha;
}

String^ Clientes::getIdentificacion() {
	return this->Identificacion;
};//obtiene el valor
void Clientes::setIdentificacion(String^ Identificacion) {
	this->Identificacion = Identificacion;
};// actualiza el valor

String^ Clientes::getEmail() {
	return this->Email;
};
void Clientes::setEmail(String^ Email) {
	this->Email = Email;
};

String^ Clientes::getContrasenha() {
	return this->Contrasenha;
};
void Clientes::setContrasenha(String^ Contrasenha) {
	this->Contrasenha = Contrasenha;
};
