#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class AdministradorController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		AdministradorController();
		//BUSCAR
		List< Administrador^>^ BuscarListaAdminxNombrexApellidoxDNI(String^ nombre, String^ Apellido, String^ DNI);
		//BORRAR
		List<Administrador^>^ BuscarAdminTodas();
		void EliminarAdminxDNI(String^ dni);
		//NUEVO
		int ExisteAdminxDNI(String^ dni);
		int ExisteAdminxEmail(String^ Email);
		int ExisteAdminxTelefono(String^ telefono);
		void RegistrarAdmin(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono);
		//EDITAR
		Administrador^ BuscarUnAdminxDNI(String^ dni);
		Administrador^ BuscarUnAdminxEmail(String^ email);
		void ActualizarAdmin(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Telefono);
		int ExisteAdminEmailconDNI(String^ Email, String^ dni);
		int ExisteAdminTelefonoconDNI(String^ telefono, String^ dni);
	};
}