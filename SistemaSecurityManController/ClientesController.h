#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class ClientesController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		ClientesController();
		//BUSCAR
		List< Clientes^>^ BuscarListaClientesxID(String^ id);
		List< Clientes^>^ BuscarListaClientesxEmail(String^ email);
		//BORRAR
		List<Clientes^>^ BuscarClientesTodas();
		void EliminarClientesxID(String^ id);
		void EscribirArchivo(List < Clientes^>^ listaIndependiente);
		//NUEVO
		int ExisteClientesxEmail(String^ Email);
		int ExisteClientesxID(String^ id);
		void RegistrarClientes(String^ id, String^ email, String^ contra);
		//EDITAR
		Clientes^ BuscarUnClientesxID(String^ id);
		Clientes^ BuscarUnClientesxEmail(String^ email);
		void ActualizarClientes(String^ id, String^ email, String^ contra);
		int ExisteClientesEmailconDNI(String^ Email, String^ id);
		//int ExisteClientesTelefonoconDNI(int Telefono, int dni);
	};
}
