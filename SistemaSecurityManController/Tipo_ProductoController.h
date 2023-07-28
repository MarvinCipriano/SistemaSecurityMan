#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class Tipo_ProductoController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		Tipo_ProductoController();
		//BUSCAR
		List< Tipo_Producto^>^ BuscarListaTipo_ProductoxNombre(String^ nombre);
		//BORRAR
		List<Tipo_Producto^>^ BuscarTipo_ProductoTodas();
		void EliminarTipo_ProductoxCodigo(int codigo);
		void EscribirArchivo(List < Tipo_Producto^>^ listaTipo_Producto);
		//NUEVO
		int ExisteTipo_ProductoxNombre(String^ nombre);
		void RegistrarTipo_Producto(int Codigo, String^ Nombre, double Precio, String^ Caracteristicas);
		//EDITAR 
		Tipo_Producto^ BuscarUnTipo_ProductoxNombre(String^ Nombre);
		void ActualizarTipo_Producto(String^ Nombre, double Precio, String^ Caracteristicas);
	};
}