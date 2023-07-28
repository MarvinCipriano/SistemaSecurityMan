#pragma once

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
	/// Resumen de frmBuscarTecnicos
	/// </summary>
	public ref class frmBuscarTecnicos : public System::Windows::Forms::Form
	{
	public:
		frmBuscarTecnicos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmBuscarTecnicos(Tecnico^ objTecnico)
		{
			InitializeComponent();
			this->objTecnicoLocal = objTecnico;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBuscarTecnicos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Télefono;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::Button^ Seleccionar;
	//
	private: Tecnico^ objTecnicoLocal;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Télefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Seleccionar = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(18, 116);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(762, 357);
			this->groupBox2->TabIndex = 38;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Técnico";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombre,
					this->Apellido, this->DNI, this->Email, this->Télefono
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(756, 332);
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
			// Télefono
			// 
			this->Télefono->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Télefono->HeaderText = L"Télefono";
			this->Télefono->Name = L"Télefono";
			this->Télefono->Width = 102;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(18, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(759, 98);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de técnicos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->label4->Location = System::Drawing::Point(422, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"DNI:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox3->Location = System::Drawing::Point(469, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 25);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->label3->Location = System::Drawing::Point(80, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Apellido:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox2->Location = System::Drawing::Point(184, 60);
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
			this->label2->Location = System::Drawing::Point(81, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre:";
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(563, 59);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmBuscarTecnicos::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(184, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(423, 485);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(143, 26);
			this->Cancelar->TabIndex = 41;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			// 
			// Seleccionar
			// 
			this->Seleccionar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Seleccionar->Location = System::Drawing::Point(223, 485);
			this->Seleccionar->Name = L"Seleccionar";
			this->Seleccionar->Size = System::Drawing::Size(143, 26);
			this->Seleccionar->TabIndex = 40;
			this->Seleccionar->Text = L"Seleccionar";
			this->Seleccionar->UseVisualStyleBackColor = true;
			this->Seleccionar->Click += gcnew System::EventHandler(this, &frmBuscarTecnicos::Seleccionar_Click);
			// 
			// frmBuscarTecnicos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 523);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Seleccionar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmBuscarTecnicos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Buscar Tecnicos";
			this->Load += gcnew System::EventHandler(this, &frmBuscarTecnicos::frmBuscarTecnicos_Load);
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
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = objTecnico->getNombre();
			filaGrilla[1] = objTecnico->getApellido();
			filaGrilla[2] = Convert::ToString(objTecnico->getDNI());
			filaGrilla[3] = objTecnico->getEmail();
			filaGrilla[4] = Convert::ToString(objTecnico->getTelefono());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmBuscarTecnicos_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarTecnicoTodas();
		/*mostrar*/
		mostrarGrilla(listaTecnico);
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellido = this->textBox2->Text;
		String^ dni = this->textBox3->Text;
		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		List<Tecnico^>^ listaTecnico = objTecnicoController->BuscarListaTecnicoxNombrexApellidoxDNI(nombre, apellido, dni);
		/*mostrar*/
		mostrarGrilla(listaTecnico);
	}
private: System::Void Seleccionar_Click(System::Object^ sender, System::EventArgs^ e) {
	//SELECCIONAR
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
		String^ tecnicoDNI = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
		//--
		TecnicoController^ tecnicoController = gcnew TecnicoController();
		Tecnico^ objTecnico1 = tecnicoController->BuscarUnTecnicoxDNI(tecnicoDNI);
		this->objTecnicoLocal->setNombre(objTecnico1->getNombre());
		this->objTecnicoLocal->setApellido(objTecnico1->getApellido());
		this->objTecnicoLocal->setDNI(objTecnico1->getDNI());
		this->Close();
	}
	else {
		MessageBox::Show("Debe seleccionar una fila");
	}
}
};
}
