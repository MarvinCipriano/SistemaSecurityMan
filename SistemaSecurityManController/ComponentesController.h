#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;


	public ref class ComponentesController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		ComponentesController();
		//BUSCAR
		List< Componentes^>^ BuscarListaComponentesxNombre(String^ nombreComponentes);
		//BORRAR
		List<Componentes^>^ BuscarComponentesTodas();
		void EliminarComponentes(String^ nombreEliminar);
		void EscribirArchivo(List < Componentes^>^ listaComponentes);
		//NUEVO
		int ExisteComponentesNombre(String^ nombre);
		void AregarComponente(Componentes^ objComponentes);
		//EDITAR 
		Componentes^ BuscarUnComponentesxNombre(String^ Nombre);
		Componentes^ BuscarUnComponentesxImagen(String^ Imagen);
		void ActualizarComponentesxStock(String^ Nombre_componente, int stock);
		void ActualizarComponentesxProducto(String^ tipo);

		//OTROS
		int ExisteSuficiente(String^ tipo, int unid);
		int ExisteSuficiente2(String^ tipo, int unid1, int unid2);
	}; 
}