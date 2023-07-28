#include "PlanoLocal.h"

using namespace SistemaSecurityManModel;

PlanoLocal::PlanoLocal() {
}
PlanoLocal::PlanoLocal(int Codigo, Locales^ objLocales, String^ NombrePlano) {
	this->Codigo = Codigo;
	this->objLocales = objLocales;
	this->NombrePlano = NombrePlano;

}

int PlanoLocal::getCodigo() {
	return this->Codigo;
};//obtiene el valor
void PlanoLocal::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};// actualiza el valor

Locales^ PlanoLocal::getLocales() {
	return this->objLocales;
};
void PlanoLocal::setLocales(Locales^ objLocales) {
	this->objLocales = objLocales;
};

String^ PlanoLocal::getNombrePlano() {
	return this->NombrePlano;
};
void PlanoLocal::setNombrePlano(String^ NombrePlano) {
	this->NombrePlano = NombrePlano;
};
