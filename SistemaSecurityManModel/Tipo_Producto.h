#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaSecurityManModel {

	public ref class Tipo_Producto {

	private:
		int Codigo;
		String^ Nombre;
		double Precio;
		String^ Caracteristicas;

	public:
		Tipo_Producto();
		Tipo_Producto(int Codigo, String^ Nombre, double Precio, String^ Caracteristicas);

		//propiedades GET y SET        
		int getCodigo();//obtiene el valor
		void setCodigo(int Codigo);// actualiza el valor 

		String^ getNombre();
		void setNombre(String^ Nombre);

		double getPrecio();
		void setPrecio(double Precio);

		String^ getCaracteristicas();
		void setCaracteristicas(String^ Caracteristicas);
	};
}