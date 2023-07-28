#pragma once
#include "frmMantComponente.h"

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
	/// Resumen de frmVerComponentes_Tipo
	/// </summary>
	public ref class frmVerComponentes_Tipo : public System::Windows::Forms::Form
	{
	public:
		frmVerComponentes_Tipo(void)
		{
			InitializeComponent();
			//this->objComponenteTip = gcnew Componentes_Tipo();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerComponentes_Tipo(Tipo_Producto^ objTipo_Producto)
		{
			InitializeComponent();
			this->objTipo_ProductoLocal = objTipo_Producto;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerComponentes_Tipo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ Nuevo;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Utilidad;
	//
	private: Tipo_Producto^ objTipo_ProductoLocal;
	private: System::Windows::Forms::Button^ button1;
		   //private: Componentes_Tipo^ objComponenteTip;
	//

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
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Utilidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Nuevo
			// 
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(126, 427);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(154, 26);
			this->Nuevo->TabIndex = 15;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmVerComponentes_Tipo::Nuevo_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(748, 409);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Componentes de tipo";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Código,
					this->Nombre, this->Utilidad
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(742, 384);
			this->dataGridView1->TabIndex = 0;
			// 
			// Código
			// 
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Visible = false;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// Utilidad
			// 
			this->Utilidad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Utilidad->HeaderText = L"Utilidad";
			this->Utilidad->Name = L"Utilidad";
			this->Utilidad->Width = 93;
			// 
			// Eliminar
			// 
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(320, 427);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(154, 26);
			this->Eliminar->TabIndex = 17;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmVerComponentes_Tipo::Eliminar_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button1->Location = System::Drawing::Point(517, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 26);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerComponentes_Tipo::button1_Click);
			// 
			// frmVerComponentes_Tipo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 465);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmVerComponentes_Tipo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Ver Componentes";
			this->Load += gcnew System::EventHandler(this, &frmVerComponentes_Tipo::frmVerComponentes_Tipo_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Componentes_Tipo^>^ listaComponentexTipo) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaComponentexTipo->Count; i++) {
			Componentes_Tipo^ objComponentexTipo = listaComponentexTipo[i];
			array<String^>^ filaGrilla = gcnew array<String^>(3);
			filaGrilla[0] = Convert::ToString(objComponentexTipo->getCodigo());
			filaGrilla[1] = objComponentexTipo->getNombre();
			filaGrilla[2] = objComponentexTipo->getUtilidad();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		Componentes_Tipo^ objComponenteTip = gcnew Componentes_Tipo();
		//VALOR BASURA
		frmMantComponente^ ventanaBuscarComponente = gcnew frmMantComponente(objComponenteTip, objTipo_ProductoLocal);

		ventanaBuscarComponente->ShowDialog();
		//GUARDO VALORES CORRECTOS
		if (objComponenteTip->getCodigo() != 0) {
			objComponenteTip->setTipo_Producto(this->objTipo_ProductoLocal);

			Componentes_TipoController^ objComponentes_TipoControllerRegistrar = gcnew Componentes_TipoController();
			objComponentes_TipoControllerRegistrar->RegistrarComponentes_Tipo(Convert::ToString(objComponenteTip->getCodigo()), objComponenteTip->getNombre(), objComponenteTip->getUtilidad(), objComponenteTip->getTipo_Producto());
			//MOSTRAR GRILLA
			Componentes_TipoController^ objComponentesController = gcnew Componentes_TipoController();
			String^ tipo = objTipo_ProductoLocal->getNombre();
			List<Componentes_Tipo^>^ listaComponentes = objComponentesController->BuscarListaComponentesxTipo(tipo);
			mostrarGrilla(listaComponentes);
		
		}
	}
	private: System::Void frmVerComponentes_Tipo_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		Componentes_TipoController^ objComponentesController = gcnew Componentes_TipoController();
		String^ tipo = objTipo_ProductoLocal->getNombre();
		if (tipo == "Premium") {
			this->groupBox2->Text = "Componentes del tipo Premium";
		}
		else if (tipo == "Básico") {
			this->groupBox2->Text = "Componentes del tipo Básico";
		}
		List<Componentes_Tipo^>^ listaComponentes = objComponentesController->BuscarListaComponentesxTipo(tipo);
		/*mostrar*/
		mostrarGrilla(listaComponentes);
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EILIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ codigo = this->dataGridView1->Rows[filaSelecionada]->Cells[0]->Value->ToString();
			//--
			Componentes_TipoController^ objComponentesController = gcnew Componentes_TipoController();
			objComponentesController->EliminarComponentesxCodigo(codigo);
			//--
			Componentes_TipoController^ objComponentesControllerEliminar = gcnew Componentes_TipoController();
			String^ tipo = objTipo_ProductoLocal->getNombre();
			List<Componentes_Tipo^>^ listaComponentes = objComponentesControllerEliminar->BuscarListaComponentesxTipo(tipo);
			mostrarGrilla(listaComponentes);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Mantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		//MANTENIMIENTO
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
};
}
