#include "Producto.h"

using namespace SistemaSecurityManModel;

Producto::Producto() {}

Producto::Producto(int Codigo, Tipo_Producto^ objTipo_Producto, String^ Fecha_Creacion, String^ IMEI, String^ N_Serie,
				   String^ Tiempo_Garantia, Locales^ objLocales, Clientes^ objClientes) {
	this->Codigo = Codigo;
	this->objTipo_Producto = objTipo_Producto;
	this->Fecha_Creacion = Fecha_Creacion;
	this->IMEI = IMEI;
	this->N_Serie = N_Serie;
	this->Tiempo_Garantia = Tiempo_Garantia;
	this->objLocales = objLocales;
	this->objClientes = objClientes;
}

int Producto::getCodigo() {
	return this->Codigo;
};//obtiene el valor
void Producto::setCodigo(int Codigo) {
	this->Codigo = Codigo;
};// actualiza el valor

Tipo_Producto^ Producto::getTipo_Producto() {
	return this->objTipo_Producto;
};
void Producto::setTipo_Producto(Tipo_Producto^ objTipo_Producto) {
	this->objTipo_Producto = objTipo_Producto;
};

String^ Producto::getFecha_Creacion() {
	return this->Fecha_Creacion;
};
void Producto::setFecha_Creacion(String^ Fecha_Creacion) {
	this->Fecha_Creacion = Fecha_Creacion;
};

String^ Producto::getIMEI() {
	return this->IMEI;
};
void Producto::setIMEI(String^ IMEI) {
	this->IMEI = IMEI;
};

String^ Producto::getN_Serie() {
	return this->N_Serie;
};
void Producto::setN_Serie(String^ N_Serie) {
	this->N_Serie = N_Serie;
};

String^ Producto::getTiempo_Garantia() {
	return this->Tiempo_Garantia;
};
void Producto::setTiempo_Garantia(String^ Tiempo_Garantia) {
	this->Tiempo_Garantia = Tiempo_Garantia;
};

Locales^ Producto::getLocales() {
	return this->objLocales;
};
void Producto::setLocales(Locales^ objLocales) {
	this->objLocales = objLocales;
};

Clientes^ Producto::getClientes() {
	return this->objClientes;
};
void Producto::setClientes(Clientes^ objClientes) {
	this->objClientes = objClientes;
};