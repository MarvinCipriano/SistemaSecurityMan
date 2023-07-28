#include "Balance.h"

using namespace SistemaSecurityManModel;

Balance::Balance() {

}

Balance::Balance(double Ingresos, double Egresos) {

    this->Ingresos = Ingresos;
    this->Egresos = Egresos;
}


double Balance::getIngresos() {
    return this->Ingresos;
};//obtiene el valor
void Balance::setIngresos(double Ingresos) {
    this->Ingresos = Ingresos;
};// actualiza el valor

double Balance::getEgresos() {
    return this->Egresos;
};
void Balance::setEgresos(double Egresos) {
    this->Egresos = Egresos;
};
