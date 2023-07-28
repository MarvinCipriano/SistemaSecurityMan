#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class HistoricoOcurrenciasController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		HistoricoOcurrenciasController();
		//BUSCAR
		List< HistoricoOcurrencias^>^ BuscarListaHistoricoOcurrenciasxClientes(String^ id);
		//ELIMINAR
		List<HistoricoOcurrencias^>^ BuscarHistoricoOcurrenciasTodas();
		//NUEVO
		void RegistrarHistoricoOcurrencias(String^ objClientes, int objLocales, String^ Fecha, String^ Hora);
		//EDITAR 
		HistoricoOcurrencias^ BuscarUnHistoricoOcurrenciasxCodigo(int codigo);
	};
}

