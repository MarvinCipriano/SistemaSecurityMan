#include "Componentes_TipoController.h"
#include "Tipo_ProductoController.h"

using namespace SistemaSecurityManController;
using namespace System::IO;

//BASE DE DATOS
using namespace System::Data::SqlClient;

//BASE DE DATOS
void Componentes_TipoController	::abrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20195766;User Id=a20195766;Password=rDVykcKv";
	this->objConexion->Open();
}
void Componentes_TipoController::cerrarConexion() {
	this->objConexion->Close();
}


Componentes_TipoController::Componentes_TipoController() {
	//BASE DE DATOS
	this->objConexion = gcnew SqlConnection();
}
///////////////////////////////////////////////////////////////
//BUSCAR
List< Componentes_Tipo^>^ Componentes_TipoController::BuscarListaComponentesxTipo(String^ tipo) {
	List<Componentes_Tipo^>^ listaComponentesEncontradas = gcnew List<Componentes_Tipo^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Componentes_Tipo where NombreTipo_Producto = '" + tipo + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^> (objData[1]);
		String^ Utilidad = safe_cast<String^> (objData[2]);
		String^ Tipo = safe_cast<String^> (objData[3]);
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		Componentes_Tipo^ objComponentes = gcnew Componentes_Tipo(Codigo, Nombre, Utilidad, objTipo_Producto);
		listaComponentesEncontradas->Add(objComponentes);
	}
	cerrarConexion();
	return listaComponentesEncontradas;
}

///////////////////////////////////////////////////////////////
//ELIMINAR
List<Componentes_Tipo^>^ Componentes_TipoController::BuscarComponentes_TipoTodas() {
	List<Componentes_Tipo^>^ listaComponentesEncontradas = gcnew List<Componentes_Tipo^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Componentes_Tipo";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//
		int Codigo = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^> (objData[1]);
		String^ Utilidad = safe_cast<String^> (objData[2]);
		String^ Tipo = safe_cast<String^> (objData[3]);
		//
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Tipo);
		//
		Componentes_Tipo^ objComponentes = gcnew Componentes_Tipo(Codigo, Nombre, Utilidad, objTipo_Producto);
		listaComponentesEncontradas->Add(objComponentes);
	}
	cerrarConexion();
	return listaComponentesEncontradas;
};

void Componentes_TipoController::EliminarComponentesxCodigo(String^ codigo) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE Componentes_Tipo where Codigo = " + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
};

//////////////////////////////////////////////////////////
//NUEVO
int Componentes_TipoController::ExisteComponentesxNombrexTipo(String^ nombre, String^ tipo) {
	int existe = 0;
	List<Componentes_Tipo^>^ listaComponentes = BuscarListaComponentesxTipo(tipo);
	for (int i = 0; i < listaComponentes->Count; i++) {
		Componentes_Tipo^ objComponentes = listaComponentes[i];
		if (objComponentes->getNombre() == nombre) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void Componentes_TipoController::RegistrarComponentes_Tipo(String^ Codigo, String^ Nombre, String^ Utilidad, Tipo_Producto^ objTipo_Producto) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "insert Componentes_Tipo(Nombre,Utilidad,NombreTipo_Producto) values ('" + Nombre + "','" + Utilidad + "','" + objTipo_Producto->getNombre() + "')";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexion();
}

//////////////////////////////////////////////////////////
//EDITAR
Componentes_Tipo^ Componentes_TipoController::BuscarUnComponentesxCodigo(String^ codigo) {
	Componentes_Tipo^ objComponentes;
	List<Componentes_Tipo^>^ listaComponentes = BuscarComponentes_TipoTodas();
	for (int i = 0; i < listaComponentes->Count; i++) {
		if (listaComponentes[i]->getCodigo() == Convert::ToInt32(codigo)) {
			objComponentes = listaComponentes[i];
			break;
		}
	}
	return objComponentes;
}
