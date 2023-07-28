#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class CarritoFacturaClienteController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		CarritoFacturaClienteController();
		//BUSCAR
		List< CarritoFacturaCliente^>^ BuscarListaCarritoxFactura(String^ Factura);
		//BORRAR
		List<CarritoFacturaCliente^>^ BuscarCarritoTodas();
		//NUEVO
		void RegistrarCarrito(String^ TipoProducto, int Unidades, double PrecioUnidad, double Total, int NumFacturaModel);
	};
}
