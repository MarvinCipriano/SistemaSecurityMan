#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class C_EmpresaController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		C_EmpresaController();
		//BUSCAR
		List< C_Empresa^>^ BuscarListaC_EmpresaxNombrexRUC(String^ nombre, String^ ruc);
		//BORRAR
		List<C_Empresa^>^ BuscarC_EmpresaTodas();
		void EliminarC_Empresa(String^ ruc);
		//NUEVO
		int ExisteC_EmpresaNombre(String^ Nombre);
		int ExisteC_EmpresaEmail(String^ Email);
		int ExisteC_EmpresaTelefono(int Telefono);
		int ExisteC_EmpresaRUC(String^ Ruc);
		void RegistrarC_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono);
		//EDITAR
		C_Empresa^ BuscarUnC_EmpresaxRUC(String^ ruc);
		C_Empresa^ BuscarUnC_EmpresaxEmail(String^ email);
		void ActualizarC_Empresa(String^ Nombre, String^ RUC, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int Telefono);
		int ExisteC_EmpresaEmailconRUC(String^ Email, String^ Ruc);
		int ExisteC_EmpresaTelefonoconRUC(int Telefono, String^ Ruc);
	};
}
