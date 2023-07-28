#include "Orden_Produccion.h"


using namespace SistemaSecurityManModel;

Orden_Produccion::Orden_Produccion() {

}


Orden_Produccion::Orden_Produccion(int numero_produccion, Tecnico^ objTecnico, int cant_AlarmaBasica, int cant_AlarmaPremimum, String^ FechaLimite) {
	this->numero_produccion = numero_produccion;
	this->objTecnico = objTecnico;
	this->cant_AlarmaBasica = cant_AlarmaBasica;
	this->cant_AlarmaPremimum = cant_AlarmaPremimum;
	this->FechaLimite = FechaLimite;
}

int Orden_Produccion::getnumero_produccion() {
	return this->numero_produccion;
};
void Orden_Produccion::setnumero_produccion(int numero_produccion) {
	this->numero_produccion = numero_produccion;
};


Tecnico^ Orden_Produccion::getTecnico() {
	return this->objTecnico;
}
void Orden_Produccion::setTecnico(Tecnico^ objTecnico) {
	this->objTecnico = objTecnico;
}


int Orden_Produccion::getcant_AlarmaBasica() {
	return this->cant_AlarmaBasica;
};
void Orden_Produccion::setcant_AlarmaBasica(int cant_AlarmaBasica) {
	this->cant_AlarmaBasica = cant_AlarmaBasica;
};


int Orden_Produccion::getcant_AlarmaPremimum() {
	return this->cant_AlarmaPremimum;
};
void Orden_Produccion::setcant_AlarmaPremimum(int cant_AlarmaPremimum) {
	this->cant_AlarmaPremimum = cant_AlarmaPremimum;
};


String^ Orden_Produccion::getFechaLimite() {
	return this->FechaLimite;
}
void Orden_Produccion::setFechaLimite(String^ FechaLimite) {
	this->FechaLimite = FechaLimite;
}