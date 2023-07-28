#pragma once
#include "frmNuevoProveedores.h"
#include "frmEditarProveedores.h"
#include "frmVerProductosProveedores.h"
namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//SIEMPRE
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManController;
	using namespace SistemaSecurityManModel;

	/// <summary>
	/// Resumen de frmMantProveedores
	/// </summary>
	public ref class frmMantProveedores : public System::Windows::Forms::Form
	{
	public:
		frmMantProveedores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Editar;
	protected:
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::Button^ Nuevo;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RUC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dirección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Télefono;
	private: System::Windows::Forms::Button^ Productos;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Editar = (gcnew System::Windows::Forms::Button());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dirección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Télefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Productos = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Editar
			// 
			this->Editar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Editar->Location = System::Drawing::Point(369, 534);
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(138, 26);
			this->Editar->TabIndex = 15;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmMantProveedores::Editar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(708, 534);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(138, 26);
			this->Eliminar->TabIndex = 14;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmMantProveedores::Eliminar_Click);
			// 
			// Nuevo
			// 
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(201, 534);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(138, 26);
			this->Nuevo->TabIndex = 13;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmMantProveedores::Nuevo_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(12, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1022, 416);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Proveedores";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombre,
					this->RUC, this->Email, this->Dirección, this->Télefono
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1016, 391);
			this->dataGridView1->TabIndex = 0;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// RUC
			// 
			this->RUC->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->RUC->HeaderText = L"RUC";
			this->RUC->Name = L"RUC";
			this->RUC->Width = 69;
			// 
			// Email
			// 
			this->Email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Email->HeaderText = L"Email";
			this->Email->Name = L"Email";
			this->Email->Width = 76;
			// 
			// Dirección
			// 
			this->Dirección->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Dirección->HeaderText = L"Dirección";
			this->Dirección->Name = L"Dirección";
			this->Dirección->Width = 110;
			// 
			// Télefono
			// 
			this->Télefono->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Télefono->HeaderText = L"Télefono";
			this->Télefono->Name = L"Télefono";
			this->Télefono->Width = 102;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1022, 94);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de proveedores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->label3->Location = System::Drawing::Point(234, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"RUC:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox2->Location = System::Drawing::Point(337, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 25);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(234, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre:";
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(681, 23);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmMantProveedores::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(337, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// Productos
			// 
			this->Productos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Productos->Location = System::Drawing::Point(538, 534);
			this->Productos->Name = L"Productos";
			this->Productos->Size = System::Drawing::Size(138, 26);
			this->Productos->TabIndex = 16;
			this->Productos->Text = L"Ver Productos";
			this->Productos->UseVisualStyleBackColor = true;
			this->Productos->Click += gcnew System::EventHandler(this, &frmMantProveedores::Productos_Click);
			// 
			// frmMantProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->Productos);
			this->Controls->Add(this->Editar);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMantProveedores";
			this->Text = L"frmMantProveedores";
			this->Load += gcnew System::EventHandler(this, &frmMantProveedores::frmMantProveedores_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Proveedores^>^ listaEmpresa) {
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaEmpresa->Count; i++) {
			Proveedores^ objEmpresa = listaEmpresa[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = objEmpresa->getNombre();
			filaGrilla[1] = Convert::ToString(objEmpresa->getRUC());
			filaGrilla[2] = objEmpresa->getEmail();
			filaGrilla[3] = objEmpresa->getDireccion();
			filaGrilla[4] = Convert::ToString(objEmpresa->getTelefono());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		frmNuevoProveedores^ ventanaNuevoProveedor= gcnew frmNuevoProveedores();
		ventanaNuevoProveedor->ShowDialog();
		/*mostrar grilla*/
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		List<Proveedores^>^ listaProveedores = objProveedoresController->BuscarProveedoresTodas();
		mostrarGrilla(listaProveedores);
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ ruc = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();
			//
			ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
			Proveedores^ objProveedores = objProveedoresController->BuscarUnProveedoresxRUC(ruc);
			//
			frmEditarProveedores^ ventanaEditarProveedores = gcnew frmEditarProveedores(objProveedores);
			ventanaEditarProveedores->ShowDialog();
			//--
			List<Proveedores^>^ listaProveedores = objProveedoresController->BuscarProveedoresTodas();
			mostrarGrilla(listaProveedores);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ ruc = this->dataGridView1->Rows[filaSelecionada]->Cells[1]->Value->ToString();
			//--
			ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
			objProveedoresController->EliminarProveedoresxRUC(ruc);
			//--
			List<Proveedores^>^ listaProveedores = objProveedoresController->BuscarProveedoresTodas();
			mostrarGrilla(listaProveedores);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ nombre = this->textBox1->Text;
		String^ ruc = this->textBox2->Text;
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		List<Proveedores^>^ listaProveedores = objProveedoresController->BuscarListaProveedoresxNombrexRUC(nombre, ruc);
		/*mostrar*/
		mostrarGrilla(listaProveedores);
	}
	private: System::Void frmMantProveedores_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
		List<Proveedores^>^ listaProveedores = objProveedoresController->BuscarProveedoresTodas();
		/*mostrar*/
		mostrarGrilla(listaProveedores);
	}
	private: System::Void Productos_Click(System::Object^ sender, System::EventArgs^ e) {
		//VER PRODUCTOS
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ ruc = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();
			//
			ProveedoresController^ objProveedoresController = gcnew ProveedoresController();
			Proveedores^ objProveedores = objProveedoresController->BuscarUnProveedoresxRUC(ruc);
			frmVerProductosProveedores^ ventanaVerProductos = gcnew frmVerProductosProveedores(objProveedores);
			ventanaVerProductos->ShowDialog();
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
};
}
