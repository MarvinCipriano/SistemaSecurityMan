#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;

	public ref class CarritoProveedoresController {
	public:

		CarritoProveedoresController();
		//BORRAR
		List<CarritoProveedores^>^ BuscarCarritoProveedoresTodas();
		void EscribirArchivo(List < CarritoProveedores^>^ listaAdmin);
		//NUEVO
		int ExisteTecnicoxComponente(String^ Componente);
		void RegistrarCarritoProveedores(ProductosProveedores^ Tipo, int Unidades, double Precio_t);
		//EDITAR
		CarritoProveedores^ BuscarUnCarritoProveedoresCompraxComponente(String^ Componente);

		//limpiar carrito
		void LimpiarCarritoProveedores();



	};
}