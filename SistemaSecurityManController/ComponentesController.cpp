#include "ComponentesController.h"
#include "Componentes_TipoController.h"
using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void ComponentesController::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void ComponentesController::cerrarConexion() {
	this->objConexion->Close();
}

ComponentesController::ComponentesController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Componentes^>^ ComponentesController::BuscarListaComponentesxNombre(String^ nombreComponentes) {
	List<Componentes^>^ listaComponentesEncontradas = gcnew List<Componentes^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Componentes where Nombre like '" + nombreComponentes +"%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Utilidad = safe_cast<String^>(objData[1]);
		int Stock = safe_cast<int>(objData[2]);
		String^ imagen = safe_cast<String^>(objData[3]);
		//
		Componentes^ objComponentes = gcnew Componentes(Nombre, Utilidad, Stock, imagen);
		listaComponentesEncontradas->Add(objComponentes);
	}
	cerrarConexion();
	return listaComponentesEncontradas;
}

///////////////////////////////////////////////////////////////
//ELIMINAR
List<Componentes^>^ ComponentesController::BuscarComponentesTodas() {
	List<Componentes^>^ listaComponentesEncontradas = gcnew List<Componentes^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Componentes";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		String^ Nombre = safe_cast<String^>(objData[0]);
		String^ Utilidad = safe_cast<String^>(objData[1]);
		int Stock = safe_cast<int>(objData[2]);
		String^ imagen = safe_cast<String^>(objData[3]);
		//
		Componentes^ objComponentes = gcnew Componentes(Nombre, Utilidad, Stock, imagen);
		listaComponentesEncontradas->Add(objComponentes);
	}
	cerrarConexion();
	return listaComponentesEncontradas;
};

void ComponentesController::EliminarComponentes(String^ nombreEliminar) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE from Componentes where Nombre='" + nombreEliminar + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};
void ComponentesController::EscribirArchivo(List < Componentes^>^ listaComponentes) {
	array <String^>^ lineasArchivo = gcnew array <String^>(listaComponentes->Count);
	for (int i = 0; i < listaComponentes->Count; i++) {
		Componentes^ objComponentes = listaComponentes[i];
		lineasArchivo[i] = objComponentes->getNombre() + ";" + objComponentes->getUtilidad() + ";" + objComponentes->getStock();
	}
	File::WriteAllLines("Componentes.txt", lineasArchivo);
};

//////////////////////////////////////////////////////////
//NUEVO
int ComponentesController::ExisteComponentesNombre(String^ nombre) {
	int existe = 0;
	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();
	for (int i = 0; i < listaComponentes->Count; i++) {
		Componentes^ objComponentes = listaComponentes[i];
		if (objComponentes->getNombre() == nombre) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void ComponentesController::AregarComponente(Componentes^ objComponentes) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Componentes(Nombre,Utilidad,Stock,Imagen) values ('" + objComponentes->getNombre() + "','" + objComponentes->getUtilidad() + "'," + objComponentes->getStock() + ",'" + objComponentes->getImagen() + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//EDITAR
Componentes^ ComponentesController::BuscarUnComponentesxNombre(String^ Nombre) {
	Componentes^ objComponentes;
	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();
	for (int i = 0; i < listaComponentes->Count; i++) {
		if (listaComponentes[i]->getNombre() == Nombre) {
			objComponentes = listaComponentes[i];
			break;
		}
	}
	return objComponentes;
}

Componentes^ ComponentesController::BuscarUnComponentesxImagen(String^ Imagen) {
	Componentes^ objComponentes;
	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();
	for (int i = 0; i < listaComponentes->Count; i++) {
		if (listaComponentes[i]->getImagen() == Imagen) {
			objComponentes = listaComponentes[i];
			break;
		}
	}
	return objComponentes;
}

void ComponentesController::ActualizarComponentesxStock(String^ Nombre_componente, int stockextra) {
	Componentes^ objComponentes = BuscarUnComponentesxNombre(Nombre_componente);
	int stock = objComponentes->getStock() + stockextra;

	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update Componentes set Stock=" + stock + " where Nombre='" + Nombre_componente + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

void ComponentesController::ActualizarComponentesxProducto(String^ tipo) {
	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();

	Componentes_TipoController^ objComponentes_TipoController = gcnew Componentes_TipoController();
	List< Componentes_Tipo^>^ listaComponentes_Tipo = objComponentes_TipoController->BuscarListaComponentesxTipo(tipo);
	
	for (int i = 0; i < listaComponentes->Count; i++) {
		for (int j = 0; j < listaComponentes_Tipo->Count; j++) {
			if (listaComponentes_Tipo[j] != nullptr) {
				if (listaComponentes[i]->getNombre() == listaComponentes_Tipo[j]->getNombre()) {
					abrirConexion();
					SqlCommand^ objSentencia = gcnew SqlCommand();
					objSentencia->Connection = this->objConexion;
					objSentencia->CommandText = "update Componentes set Stock=" + (listaComponentes[i]->getStock() - 1) + " where Nombre='" + listaComponentes[i]->getNombre() + "'";
					SqlDataReader^ objData = objSentencia->ExecuteReader();
					cerrarConexion();
				}
			}
		}
	}
}

//ASIGNAR A UN COMPONENTE 

//OTROS

int ComponentesController::ExisteSuficiente(String^ tipo, int unid) {
	int existe = 0;

	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();

	Componentes_TipoController^ objComponentes_TipoController = gcnew Componentes_TipoController();
	List< Componentes_Tipo^>^ listaComponentes_Tipo = objComponentes_TipoController->BuscarListaComponentesxTipo(tipo);

	int m = 0;

	for (int i = 0; i < listaComponentes->Count; i++) {
		for (int j = 0; j < listaComponentes_Tipo->Count; j++) {
			if (listaComponentes_Tipo[j] != nullptr) {
				if (listaComponentes[i]->getNombre() == listaComponentes_Tipo[j]->getNombre()) {
					if (listaComponentes[i]->getStock() >= unid) {
						m++;
					}
				}
			}
		}
	}
	if (listaComponentes_Tipo->Count == m) {
		return existe = 1;
	}
	else {
		return existe = 0;
	}
}

int ComponentesController::ExisteSuficiente2(String^ tipo, int unid1, int unid2) {
	int existe = 0;

	List<Componentes^>^ listaComponentes = BuscarComponentesTodas();

	Componentes_TipoController^ objComponentes_TipoController = gcnew Componentes_TipoController();
	List< Componentes_Tipo^>^ listaComponentes_Tipo = objComponentes_TipoController->BuscarListaComponentesxTipo(tipo);

	int m = 0;

	for (int i = 0; i < listaComponentes->Count; i++) {
		for (int j = 0; j < listaComponentes_Tipo->Count; j++) {
			if (listaComponentes_Tipo[j] != nullptr) {
				if (listaComponentes[i]->getNombre() == listaComponentes_Tipo[j]->getNombre()) {
					if (listaComponentes[i]->getStock() >= unid1 + unid2) {
						m++;
					}
				}
			}
		}
	}
	if (listaComponentes_Tipo->Count == m) {
		return existe = 1;
	}
	else {
		return existe = 0;
	}
}