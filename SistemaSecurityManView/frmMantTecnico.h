#pragma once
#include "frmNuevoTecnico.h"
#include "frmEditarTecnico.h"

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
	/// Resumen de frmMantTecnico
	/// </summary>
	public ref class frmMantTecnico : public System::Windows::Forms::Form
	{
	public:
		frmMantTecnico(void)
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
		~frmMantTecnico()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contraseña;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Télefono;

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
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contraseña = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Télefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->Editar->TabIndex = 35;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmMantTecnico::Editar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(626, 534);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(104, 26);
			this->Eliminar->TabIndex = 34;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmMantTecnico::Eliminar_Click);
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
			this->groupBox2->TabIndex = 37;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Técnico";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Nombre,
					this->Apellido, this->DNI, this->Email, this->Contraseña, this->Direccion, this->Télefono
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
			// Apellido
			// 
			this->Apellido->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->Name = L"Apellido";
			this->Apellido->Width = 97;
			// 
			// DNI
			// 
			this->DNI->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DNI->HeaderText = L"DNI";
			this->DNI->Name = L"DNI";
			this->DNI->Width = 62;
			// 
			// Email
			// 
			this->Email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Email->HeaderText = L"Email";
			this->Email->Name = L"Email";
			this->Email->Width = 76;
			// 
			// Contraseña
			// 
			this->Contraseña->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Contraseña->HeaderText = L"Contraseña";
			this->Contraseña->Name = L"Contraseña";
			this->Contraseña->Width = 127;
			// 
			// Direccion
			// 
			this->Direccion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Direccion->HeaderText = L"Dirección";
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 110;
			// 
			// Télefono
			// 
			this->Télefono->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Télefono->HeaderText = L"Télefono";
			this->Télefono->Name = L"Télefono";
			this->Télefono->Width = 102;
			// 
			// Nuevo
			// 
			this->Nuevo->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(299, 534);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(104, 26);
			this->Nuevo->TabIndex = 33;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmMantTecnico::Nuevo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
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
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de técnicos";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->label4->Location = System::Drawing::Point(591, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"DNI:";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox3->Location = System::Drawing::Point(638, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 25);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->label3->Location = System::Drawing::Point(234, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Apellido:";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox2->Location = System::Drawing::Point(337, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 25);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->Buscar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(732, 58);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmMantTecnico::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(337, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// frmMantTecnico
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
			this->Name = L"frmMantTecnico";
			this->Text = L"frmMantTecnico";
			this->Load += gcnew System::EventHandler(this, &frmMantTecnico::frmMantTecnico_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Tecnico^>^ listaTecnico) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaTecnico->Count; i++) {
			Tecnico^ objTecnico = listaTecnico[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = objTecnico->getNombre();
			filaGrilla[1] = objTecnico->getApellido();
			filaGrilla[2] = Convert::ToString(objTecnico->getDNI());
			filaGrilla[3] = objTecnico->getEmail();
			filaGrilla[4] = objTecnico->getContrasenha();
			filaGrilla[5] = objTecnico->getDireccion();
			filaGrilla[6] = Convert::ToString(objTecnico->getTelefono());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmMantTecnico_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarTecnicoTodas();
		/*mostrar*/
		mostrarGrilla(listaTecnico);
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ dni = this->dataGridView1->Rows[filaSelecionada]->Cells[2]->Value->ToString();
			//--
			TecnicoController^ objTecnicoController = gcnew TecnicoController();
			objTecnicoController->EliminarTecnico(dni);
			//--
			ClientesController^ objClientesController = gcnew ClientesController();
			objClientesController->EliminarClientesxID(dni);
			//--
			List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarTecnicoTodas();
			mostrarGrilla(listaTecnico);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ nombre = this->textBox1->Text;
		String^ apellido = this->textBox2->Text;
		String^ dni = this->textBox3->Text;
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarListaTecnicoxNombrexApellidoxDNI(nombre, apellido, dni);
		/*mostrar*/
		mostrarGrilla(listaTecnico);
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		frmNuevoTecnico^ ventanaNuevoTecnico = gcnew frmNuevoTecnico();
		ventanaNuevoTecnico->ShowDialog();
		/*mostrar grilla*/
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarTecnicoTodas();
		mostrarGrilla(listaTecnico);
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ dni = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
			//
			TecnicoController^ objTecnicoController = gcnew TecnicoController();
			Tecnico^ objTecnico = objTecnicoController->BuscarUnTecnicoxDNI(dni);
			//
			frmEditarTecnico^ ventanaEditarTecnico = gcnew frmEditarTecnico(objTecnico);
			ventanaEditarTecnico->ShowDialog();
			//--
			List<Tecnico^>^ listatecnico = objTecnicoController->BuscarTecnicoTodas();
			mostrarGrilla(listatecnico);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
};
}
