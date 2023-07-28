#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class C_IndependienteController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		C_IndependienteController();
		//BUSCAR
		/*importante*/
		List< C_Independiente^>^ BuscarListaC_IndependientexNombrexApellidoxDNI(String^ Nombre, String^ Apellido, String^ DNI);
		//BORRAR
		/*importante*/
		List<C_Independiente^>^ BuscarC_IndependienteTodas();
		/*importante*/
		void EliminarC_Independiente(String^ dni);
		//NUEVO
		int ExisteC_IndependienteEmail(String^ Email);
		int ExisteC_IndependienteTelefono(int Telefono);
		int ExisteC_IndependienteDNI(String^ Dni);
		/*importante*/
		void RegistrarC_IndeIndependiente(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int NumeroTel);
		//EDITAR
		/*importante*/
		C_Independiente^ BuscarUnC_IndependientexDNI(String^ dni);
		C_Independiente^ BuscarUnC_IndependientexEmail(String^ email);
		/*importante*/
		void ActualizarC_Independiente(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, String^ Distrito, int NumeroTel);
		int ExisteC_IndependienteEmailconDNI(String^ Email, String^ dni);
		int ExisteC_IndependienteTelefonoconDNI(int Telefono, String^ dni);
	};
}
