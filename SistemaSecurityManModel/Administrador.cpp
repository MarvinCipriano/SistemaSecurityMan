#include "Administrador.h"

using namespace SistemaSecurityManModel;

Administrador::Administrador() {

}

Administrador::Administrador(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono) {

    this->Nombre = Nombre;
    this->Apellido = Apellido;
    this->DNI = DNI;
    this->Email = Email;
    this->Contrasenha = Contrasenha;
    this->Telefono = Telefono;
}


String^ Administrador::getNombre() {
    return this->Nombre;
};//obtiene el valor
void Administrador::setNombre(String^ Nombre) {
    this->Nombre = Nombre;
};// actualiza el valor

String^ Administrador::getApellido() {
    return this->Apellido;
};
void Administrador::setApellido(String^ Apellido) {
    this->Apellido = Apellido;
};

String^ Administrador::getDNI() {
    return this->DNI;
};
void Administrador::setDNI(String^ DNI) {
    this->DNI = DNI;
};

String^ Administrador::getEmail() {
    return this->Email;
};
void Administrador::setEmail(String^ Email) {
    this->Email = Email;
};

String^ Administrador::getTelefono() {
    return this->Telefono;
};
void Administrador::setTelefono(String^ Telefono) {
    this->Telefono = Telefono;
};

String^ Administrador::getContrasenha() {
    return this->Contrasenha;
};
void Administrador::setContrasenha(String^ Contrasenha) {
    this->Contrasenha = Contrasenha;
};