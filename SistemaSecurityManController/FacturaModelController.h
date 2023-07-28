#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class FacturaModelController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		FacturaModelController();
		//BUSCAR
		List< FacturaModel^>^ BuscarListaFacturaxID(String^ id);
		//BORRAR
		List<FacturaModel^>^ BuscarFacturaTodas();
		//NUEVO
		void RegistrarFactura(int NumFactura, String^ Fecha, int NumCompra, String^ NombreCliente, String^ ID, String^ Direccion, String^ Distrito, Decimal^ CostoEnvio, Decimal^ Total);
		//EDITAR
		FacturaModel^ BuscarUnFacturaxCodigo(int codigo);
	};
}
