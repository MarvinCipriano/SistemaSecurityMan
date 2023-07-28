#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class TecnicoController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		TecnicoController();
		//BUSCAR
		List< Tecnico^>^ BuscarListaTecnicoxNombrexApellidoxDNI(String^ nombre, String^ Apellido, String^ DNI);
		//BORRAR
		List<Tecnico^>^ BuscarTecnicoTodas();
		void EliminarTecnico(String^ dni);
		void EscribirArchivo(List < Tecnico^>^ listaTecnico);
		//NUEVO
		int ExisteTecnicoxDNI(String^ DNI);
		int ExisteTecnicoxEmail(String^ Email);
		int ExisteTecnicoxTelefono(int Telefono);
		void RegistrarTecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int NumeroTel);
		//EDITAR 
		Tecnico^ BuscarUnTecnicoxDNI(String^ dni);
		Tecnico^ BuscarUnTecnicoxEmail(String^ Email);
		void ActualizarTecnico(String^ Nombre, String^ Apellido, String^ DNI, String^ Email, String^ Contrasenha, String^ Direccion, int NumeroTel);
		int ExisteTecnicoxEmailconDNI(String^ Email, String^ dni);
		int ExisteTecnicoxTelefonoconDNI(int Telefono, String^ dni);
	};
}