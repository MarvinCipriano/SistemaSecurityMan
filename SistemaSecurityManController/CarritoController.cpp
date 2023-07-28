#include "CarritoController.h"
#include "Tipo_ProductoController.h"
using namespace SistemaSecurityManController;
using namespace System::IO;

CarritoController::CarritoController() {

}

List<CarritoCompra^>^ CarritoController::BuscarCarritoCompraTodas() {
	List<CarritoCompra^>^ listaCarritoCompraEncontradas = gcnew List<CarritoCompra^>();
	array<String^>^ lineas = File::ReadAllLines("Carrito.txt");
	String^ separadores = ";";
	for each (String ^ lineaCarritoCompra in lineas) {
		array<String^>^ datos = lineaCarritoCompra->Split(separadores->ToCharArray());

		String^ Tipo = datos[0];
		int Unidades = Convert::ToInt32(datos[1]);
		double Precio_u = Convert::ToDouble(datos[2]);
		double Precio_t = Convert::ToDouble(datos[3]);
		//
		Tipo_ProductoController^ objTipoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo = objTipoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		CarritoCompra^ objCarritoCompra = gcnew CarritoCompra(objTipo, Unidades, Precio_t);
		listaCarritoCompraEncontradas->Add(objCarritoCompra);
	}
	return listaCarritoCompraEncontradas;
};

void CarritoController::EscribirArchivo(List < CarritoCompra^>^ listaCarritoCompra) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaCarritoCompra->Count);
	for (int i = 0; i < listaCarritoCompra->Count; i++) {
		CarritoCompra^ objCarritoCompra = listaCarritoCompra[i];
		lineasArchivo[i] = objCarritoCompra->getTipo()->getNombre() + ";" + objCarritoCompra->getUnidades() + ";" + objCarritoCompra->getTipo()->getPrecio() + ";" + objCarritoCompra->getPrecio_t();
	}
	File::WriteAllLines("Carrito.txt", lineasArchivo);
};


void CarritoController::RegistrarCarrito(Tipo_Producto^ Tipo, int Unidades, double Precio_t) {
	List<CarritoCompra^>^ listaCarritoCompra = BuscarCarritoCompraTodas();
	CarritoCompra^ objCarritoCompraNueva = gcnew CarritoCompra(Tipo, Unidades, Precio_t);
	listaCarritoCompra->Add(objCarritoCompraNueva);
	EscribirArchivo(listaCarritoCompra);
}

CarritoCompra^ CarritoController::BuscarUnCarritoCompraxTipo(String^ Tipo) {
	CarritoCompra^ objCarritoCompra;
	List<CarritoCompra^>^ listaCarritoCompra = BuscarCarritoCompraTodas();
	for (int i = 0; i < listaCarritoCompra->Count; i++) {
		if (listaCarritoCompra[i]->getTipo()->getNombre() == Tipo) {
			objCarritoCompra = listaCarritoCompra[i];
			break;
		}
	}
	return objCarritoCompra;
}

void CarritoController::LimpiarCarrito() {
	//limpiar carrito
	String^ filePath2 = "Carrito.txt";
	array<String^>^ Carrito = gcnew array<String^>(0); // Crea un nuevo array vacío
	//guardar borrado
	File::WriteAllLines(filePath2, Carrito);
}