#include "Costo_Envio.h"

using namespace SistemaSecurityManModel;

Costo_Envio::Costo_Envio() {
}

Costo_Envio::Costo_Envio(String^ Distrito, double Costo, String^ Tiempo) {

	this->Distrito = Distrito;
	this->Costo = Costo;
	this->Tiempo = Tiempo;

}

String^ Costo_Envio::getDistrito() {
	return this->Distrito;
};//obtiene el valor
void Costo_Envio::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
};// actualiza el valor

double Costo_Envio::getCosto() {
	return this->Costo;
};
void Costo_Envio::setCosto(double Costo) {
	this->Costo = Costo;
};

String^ Costo_Envio::getTiempo() {
	return this->Tiempo;
};
void Costo_Envio::setTiempo(String^ Tiempo) {
	this->Tiempo = Tiempo;
};