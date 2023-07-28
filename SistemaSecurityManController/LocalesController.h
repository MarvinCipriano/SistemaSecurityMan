#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class LocalesController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		LocalesController();
		//BUSCAR
		List< Locales^>^ BuscarListaLocalesxCodigo(String^ codigolocal);
		List< Locales^>^ BuscarListaLocalesxClientes(String^  id);
		List< Locales^>^ BuscarListaLocalesxDistrito(String^ distrito);
		//ELIMINAR
		List<Locales^>^ BuscarLocalesTodas();
		void EliminarLocalesxCodigo(int codigo);
		//NUEVO
		int ExisteLocalesxCodigo(String^ codigo);
		int ExisteLocalxClientexNombre(Clientes^ id, String^ Nombre);
		void RegistrarLocales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito);
		//EDITAR 
		Locales^ BuscarUnLocalesxCodigo(String^ codigo);
		Locales^ BuscarUnLocalesxNombrexCliente(String^ Nombre, String^ Cliente);
		int ExisteLocalxClientexNombreDifetente(Clientes^ objcliente, String^ Nombre);
		void ActualizarLocales(int Codigo, String^ Nombre, String^ Ubicacion, Clientes^ objClientes, String^ Direccion, String^ Distrito);
	};
}

