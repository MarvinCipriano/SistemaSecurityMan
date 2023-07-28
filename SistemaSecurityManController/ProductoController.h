#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;

	public ref class ProductoController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		ProductoController();
		//BUSCAR
		List< Producto^>^ BuscarListaProductoxLocal(String^ codigolocal);
		List< Producto^>^ BuscarListaProductoxClienteSinLocal(String^ idCliente);
		List< Producto^>^ BuscarListaProductoxCliente(String^ idCliente);
		List<Producto^>^ BuscarListaProductoxClientexTipo(String^ idCliente, String^ tipo);
		//ELIMINAR
		List<Producto^>^ BuscarProductoTodas();
		//NUEVO
		int ExisteProductoxCodigo(String^ codigo);
		void AregarProducto(Producto^ objProducto);
		//EDITAR 
		Producto^ BuscarUnProductoxCodigo(String^ codigo);
		//OTROS
		int ContarProductos(String^ Tipo);
		//ASIGNAR A UN PRODUCTO A UN CLIENTE
		void ActualizarProductoCliente(int codigo, Clientes^ id);

		//ASIGNAR A UN PRODUCTO A UN LOCAL
		void ActualizarProductoLocal(String^ icasa, Locales^ codlocal);
		void ActualizarProductoLocalEliminar(String^ codproduc, Locales^ codlocal);
	};
}

