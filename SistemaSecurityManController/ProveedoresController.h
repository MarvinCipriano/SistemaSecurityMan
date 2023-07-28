#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class ProveedoresController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		ProveedoresController();
		List< Proveedores^>^ BuscarListaProveedoresxNombrexRUC(String^ nombre, String^ ruc);
		//BORRAR
		List<Proveedores^>^ BuscarProveedoresTodas();
		void EliminarProveedoresxRUC(String^ ruc);
		//NUEVO
		int ExisteProveedoresxNombre(String^ Nombre);
		int ExisteProveedoresxRUC(String^ ruc);
		int ExisteProveedoresxEmail(String^ email);
		int ExisteProveedoresxTelefono(String^ telefono);
		void RegistrarProveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int telefono);
		//EDITAR
		Proveedores^ BuscarUnProveedoresxNombre(String^ nombre);
		Proveedores^ BuscarUnProveedoresxRUC(String^ ruc);
		void ActualizarProveedores(String^ Nombre, String^ RUC, String^ Email, String^ Direccion, int telefono);
		int ExisteProveedoresEmailconRUC(String^ Email, String^ Ruc);
		int ExisteProveedoresTelefonoconRUC(int Telefono, String^ Ruc);
	};
}