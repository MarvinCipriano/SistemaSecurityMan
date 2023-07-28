#include "CarritoProveedoresController.h"
#include "ProductosProveedoresController.h"
using namespace SistemaSecurityManController;
using namespace System::IO;

CarritoProveedoresController::CarritoProveedoresController() {

}
//BORRAR
List<CarritoProveedores^>^ CarritoProveedoresController::BuscarCarritoProveedoresTodas() {
	List<CarritoProveedores^>^ listaCarritoCompraEncontradas = gcnew List<CarritoProveedores^>();
	array<String^>^ lineas = File::ReadAllLines("CarritoProveedores.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarritoCompra in lineas) {
		array<String^>^ datos = lineaCarritoCompra->Split(separadores->ToCharArray());
		//
		String^ Proveedor = datos[0];
		String^ Componente = datos[1];
		int Unidades = Convert::ToInt32(datos[2]);
		double Precio_u = Convert::ToDouble(datos[3]);
		double Precio_t = Convert::ToDouble(datos[4]);
		//
		ProductosProveedoresController^ objComponentesController = gcnew ProductosProveedoresController();
		ProductosProveedores^ objComponentes = objComponentesController->BuscarUnProductosProveedoresxProveedorxComponente(Proveedor, Componente);
		//
		CarritoProveedores^ objCarritoCompra = gcnew CarritoProveedores(objComponentes, Unidades, Precio_t);
		listaCarritoCompraEncontradas->Add(objCarritoCompra);
	}
	return listaCarritoCompraEncontradas;
};

void CarritoProveedoresController::EscribirArchivo(List < CarritoProveedores^>^ listaCarritoCompra) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaCarritoCompra->Count);
	for (int i = 0; i < listaCarritoCompra->Count; i++) {
		CarritoProveedores^ objCarritoCompra = listaCarritoCompra[i];
		lineasArchivo[i] = objCarritoCompra->getProductosProveedores()->getProveedores()->getNombre() + ";" + objCarritoCompra->getProductosProveedores()->getComponentes()->getNombre() + ";" + objCarritoCompra->getUnidades() + ";" + objCarritoCompra->getProductosProveedores()->getPrecio() + ";" + objCarritoCompra->getPrecio_t();
	}
	File::WriteAllLines("CarritoProveedores.txt", lineasArchivo);
};

//NUEVO
int CarritoProveedoresController::ExisteTecnicoxComponente(String^ Componente) {
	int existe = 0;
	List<CarritoProveedores^>^ listaTecnico = BuscarCarritoProveedoresTodas();
	for (int i = 0; i < listaTecnico->Count; i++) {
		CarritoProveedores^ objTecnico = listaTecnico[i];
		if (objTecnico->getProductosProveedores()->getComponentes()->getNombre() == Componente) {
			existe = 1;
			break;
		}
	}
	return existe;
}


void CarritoProveedoresController::RegistrarCarritoProveedores(ProductosProveedores^ Tipo, int Unidades, double Precio_t) {
	List<CarritoProveedores^>^ listaCarritoCompra = BuscarCarritoProveedoresTodas();
	CarritoProveedores^ objCarritoCompraNueva = gcnew CarritoProveedores(Tipo, Unidades, Precio_t);
	listaCarritoCompra->Add(objCarritoCompraNueva);
	EscribirArchivo(listaCarritoCompra);
}
//EDITAR
CarritoProveedores^ CarritoProveedoresController::BuscarUnCarritoProveedoresCompraxComponente(String^ Componente) {
	CarritoProveedores^ objCarritoCompra;
	List<CarritoProveedores^>^ listaCarritoCompra = BuscarCarritoProveedoresTodas();
	for (int i = 0; i < listaCarritoCompra->Count; i++) {
		if (listaCarritoCompra[i]->getProductosProveedores()->getComponentes()->getNombre() == Componente) {
			objCarritoCompra = listaCarritoCompra[i];
			break;
		}
	}
	return objCarritoCompra;
}

void CarritoProveedoresController::LimpiarCarritoProveedores() {
	//limpiar carrito
	String^ filePath2 = "CarritoProveedores.txt";
	array<String^>^ Carrito = gcnew array<String^>(0); // Crea un nuevo array vacío
	//guardar borrado
	File::WriteAllLines(filePath2, Carrito);
}
