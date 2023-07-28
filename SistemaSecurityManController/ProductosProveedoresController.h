#pragma once

namespace SistemaSecurityManController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManModel;
	//BASE DE DATOS
	using namespace System::Data::SqlClient;


	public ref class ProductosProveedoresController {

		//BASE DE DATOS
	private:
		SqlConnection^ objConexion;

	public:
		//BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();
		ProductosProveedoresController();
		//BUSCAR
		List< ProductosProveedores^>^ BuscarListaProductosProveedoresxProveedor(String^ Proveedor);
		List< ProductosProveedores^>^ BuscarListaProductosProveedoresxProveedorxComponente(String^ Proveedor, String^ componente);
		//ELIMINAR
		List<ProductosProveedores^>^ BuscarProductosProveedoresTodas();
		void EliminarProductosProveedoresxProveedorxComponente(int codigo);
		//NUEVO
		int ExisteProductosProveedoresxProveedorxComponente(String^ provedor, String^ componente);
		void RegistrarProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock);
		//EDITAR 
		ProductosProveedores^ BuscarUnProductosProveedoresxCodigo(String^ codigo);
		ProductosProveedores^ BuscarUnProductosProveedoresxProveedorxComponente(String^ Proveedor, String^ componente);
		void ActualizarProductosProveedores(int Codigo, Proveedores^ objProveedores, Componentes^ objComponentes, double Precio, int Stock);
		void ActualizarProductosProveedoresTecnico(int Codigo, int unidades);
	};
}
