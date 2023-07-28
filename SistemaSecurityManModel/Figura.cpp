#include "Figura.h"

using namespace SistemaSecurityManModel;

Figura::Figura() {

}
Figura::Figura(int inicioX, int inicioY, int finX, int finY, int tipo, Color objColor) {
	this->finX = finX;
	this->finY = finY;
	this->inicioX = inicioX;
	this->inicioY = inicioY;
	this->tipo = tipo;
	this->objColor = objColor;
}
int Figura::getInicioX() {
	return this->inicioX;
}
void Figura::setInicioX(int inicioX) {

	this->inicioX = inicioX;
}
int Figura::getInicioY() {
	return this->inicioY;
}
void Figura::setInicioY(int inicioY) {
	this->inicioY = inicioY;
}
int Figura::getFinX() {
	return this->finX;
}
void Figura::setFinX(int finX) {
	this->finX = finX;
}
int Figura::getFinY() {
	return this->finY;
}
void Figura::setFinY(int finY) {
	this->finY = finY;
}
int  Figura::getTipo() {
	return this->tipo;
}
void Figura::setTipo(int tipo) {
	this->tipo = tipo;
}
Color Figura::getColor() {
	return this->objColor;
}
void Figura::setColor(Color objColor) {
	this->objColor = objColor;
}