#pragma once
#include "frmEditarEnvio.h"
#include "frmNuevoEnvio.h"
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
	/// Resumen de frmMantEnvio
	/// </summary>
	public ref class frmMantEnvio : public System::Windows::Forms::Form
	{
	public:
		frmMantEnvio(void)
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
		~frmMantEnvio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Editar;
	protected:
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ Nuevo;
	private: System::Windows::Forms::GroupBox^ groupBox1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Costo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempo;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Costo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Editar
			// 
			this->Editar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Editar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Editar->Location = System::Drawing::Point(468, 534);
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(104, 26);
			this->Editar->TabIndex = 40;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmMantEnvio::Editar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(626, 534);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(104, 26);
			this->Eliminar->TabIndex = 39;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmMantEnvio::Eliminar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(12, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1022, 416);
			this->groupBox2->TabIndex = 42;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Tarifario de envios";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Distrito,
					this->Costo, this->tiempo
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1016, 391);
			this->dataGridView1->TabIndex = 0;
			// 
			// Distrito
			// 
			this->Distrito->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 91;
			// 
			// Costo
			// 
			this->Costo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Costo->HeaderText = L"Costo";
			this->Costo->Name = L"Costo";
			this->Costo->Width = 80;
			// 
			// tiempo
			// 
			this->tiempo->HeaderText = L"Tiempo aproximado";
			this->tiempo->Name = L"tiempo";
			this->tiempo->Width = 200;
			// 
			// Nuevo
			// 
			this->Nuevo->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(299, 534);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(104, 26);
			this->Nuevo->TabIndex = 38;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmMantEnvio::Nuevo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1022, 94);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de tarifario de envios";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(214, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Distrito:";
			// 
			// Buscar
			// 
			this->Buscar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(655, 37);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmMantEnvio::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(317, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// frmMantEnvio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->Editar);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMantEnvio";
			this->Text = L"Mantenimiento Envio";
			this->Load += gcnew System::EventHandler(this, &frmMantEnvio::frmMantEnvio_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Costo_Envio^>^ listaCosto_Envio) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaCosto_Envio->Count; i++) {
			Costo_Envio^ objCosto_Envio = listaCosto_Envio[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = objCosto_Envio->getDistrito();
			filaGrilla[1] = Convert::ToString(objCosto_Envio->getCosto());
			filaGrilla[2] = objCosto_Envio->getTiempo();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmMantEnvio_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
		List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarCosto_EnvioTodas();
		/*mostrar*/
		mostrarGrilla(listaCosto_Envio);
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ distrito = this->textBox1->Text;
		CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
		List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarListaCosto_EnvioxDistrito(distrito);
		/*mostrar*/
		mostrarGrilla(listaCosto_Envio);
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ distrito = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
			Costo_Envio^ objCosto_Envio = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(distrito);
			frmEditarEnvio^ ventanaEditarEnvio = gcnew frmEditarEnvio(objCosto_Envio);
			ventanaEditarEnvio->ShowDialog();
			/*mostrar*/
			CostoEnvioController^ objCostoEnvioControllerGrilla = gcnew CostoEnvioController();
			List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioControllerGrilla->BuscarCosto_EnvioTodas();
			mostrarGrilla(listaCosto_Envio);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ distrito = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//--
			CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
			objCostoEnvioController->EliminarCosto_EnvioxDistrito(distrito);
			List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarCosto_EnvioTodas();
			mostrarGrilla(listaCosto_Envio);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		frmNuevoEnvio^ ventanaNuevoEnvio = gcnew frmNuevoEnvio();
		ventanaNuevoEnvio->ShowDialog();
		/*mostrar*/
		CostoEnvioController^ objCostoEnvioControllerGrilla = gcnew CostoEnvioController();
		List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioControllerGrilla->BuscarCosto_EnvioTodas();
		mostrarGrilla(listaCosto_Envio);
	}
};
}
