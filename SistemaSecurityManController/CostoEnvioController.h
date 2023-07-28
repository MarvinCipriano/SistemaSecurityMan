#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class CostoEnvioController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		CostoEnvioController();
		//BUSCAR
		List< Costo_Envio^>^ BuscarListaCosto_EnvioxDistrito(String^ Nombre);
		//BORRAR
		List<Costo_Envio^>^ BuscarCosto_EnvioTodas();
		void EliminarCosto_EnvioxDistrito(String^ distrito);
		//NUEVO
		int ExisteCosto_EnvioxDistrito(String^ Distrito);
		void RegistrarCosto_Envio(String^ Distrito, double Costo, String^ Tiempo);
		//EDITAR 
		Costo_Envio^ BuscarUnCosto_EnvioxDistrito(String^ Distrito);
		void ActualizarCosto_Envio(String^ Distrito, double Costo, String^ Tiempo);
	};
}