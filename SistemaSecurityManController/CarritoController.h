#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;

	public ref class CarritoController {
	public:

		CarritoController();

		List<CarritoCompra^>^ BuscarCarritoCompraTodas();

		void EscribirArchivo(List < CarritoCompra^>^ listaAdmin);

		void RegistrarCarrito(Tipo_Producto^ Tipo, int Unidades, double Precio_t);

		CarritoCompra^ BuscarUnCarritoCompraxTipo(String^ Tipo);

		//limpiar carrito
		void LimpiarCarrito();


	};
}