#include "HistoricoOcurrencias.h"

using namespace SistemaSecurityManModel;

HistoricoOcurrencias::HistoricoOcurrencias() {

}

HistoricoOcurrencias::HistoricoOcurrencias(int Codigo, Clientes^ objClientes, Locales^ objLocales, String^ Fecha, String^ Hora) {

    this->Codigo = Codigo;
    this->objClientes = objClientes;
    this->objLocales = objLocales;
    this->Fecha = Fecha;
    this->Hora = Hora;
}


int HistoricoOcurrencias::getCodigo() {
    return this->Codigo;
};
void HistoricoOcurrencias::setCodigo(int Codigo) {
    this->Codigo = Codigo;
};

Clientes^ HistoricoOcurrencias::getClientes() {
    return this->objClientes;
};//obtiene el valor
void HistoricoOcurrencias::setClientes(Clientes^ objClientes) {
    this->objClientes = objClientes;
};// actualiza el valor

Locales^ HistoricoOcurrencias::getLocales() {
    return this->objLocales;
};
void HistoricoOcurrencias::setLocales(Locales^ objLocales) {
    this->objLocales = objLocales;
};

String^ HistoricoOcurrencias::getFecha() {
    return this->Fecha;
};//obtiene el valor
void HistoricoOcurrencias::setFecha(String^ Fecha) {
    this->Fecha = Fecha;
};// actualiza el valor

String^ HistoricoOcurrencias::getHora() {
    return this->Hora;
};
void HistoricoOcurrencias::setHora(String^ Hora) {
    this->Hora = Hora;
};
