#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class BalanceController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		BalanceController();
		//BUSCAR
		Balance^ BuscarBalance();
		//NUEVO
		void ReiniciarBalance();
		//EDITAR
		void ActualizarIngresos(double ingresos);
		void ActualizarEgresos(double egresos);
	};
}
