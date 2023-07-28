#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;


	public ref class Componentes_TipoController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		Componentes_TipoController();
		//BUSCAR
		List< Componentes_Tipo^>^ BuscarListaComponentesxTipo(String^ Tipo);
		//BORRAR
		List<Componentes_Tipo^>^ BuscarComponentes_TipoTodas();
		void EliminarComponentesxCodigo(String^ codigo);
		//NUEVO
		int ExisteComponentesxNombrexTipo(String^ nombre, String^ tipo);
		void RegistrarComponentes_Tipo(String^ Codigo, String^ Nombre, String^ Utilidad, Tipo_Producto^ objTipo_Producto);
		//EDITAR 
		Componentes_Tipo^ BuscarUnComponentesxCodigo(String^ Codigo);
	};
}