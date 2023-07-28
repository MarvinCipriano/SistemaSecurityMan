#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class Orden_ProduccionController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		Orden_ProduccionController();
		//BUSCAR
		List< Orden_Produccion^>^ BuscarListaOrden_ProduccionxTecnico(String^ dnitecnico);
		//BORRAR
		List<Orden_Produccion^>^ BuscarOrden_ProduccionTodas();
		void EscribirArchivo(List < Orden_Produccion^>^ listaOrden);
		void EliminarOrden_ProduccionxCodigo(String^ codigo);
		//NUEVO
		void RegistrarOrden_Produccion(int numero_produccion, Tecnico^ objTecnico, int cantBasico, int cantPremium, String^ FechaLimite);
		
	};
}