#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class PlanoLocalController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		PlanoLocalController();
		//BUSCAR
		//ELIMINAR
		List<PlanoLocal^>^ BuscarPlanoLocalTodas();
		//NUEVO
		void RegistrarPlanoLocal(int CodigoLocal, String^ NombrePlano);
		//EDITAR 
		PlanoLocal^ BuscarUnPlanoLocalxCodigo(int codigo);
	};
}

