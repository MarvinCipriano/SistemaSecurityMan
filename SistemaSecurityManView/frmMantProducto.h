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
	/// Resumen de frmMantProducto
	/// </summary>
	public ref class frmMantProducto : public System::Windows::Forms::Form
	{
	public:
		frmMantProducto(void)
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
		~frmMantProducto()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fabricación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IMEI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N_Serie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Garantia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Propietario;





































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IMEI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N_Serie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Garantia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Propietario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->groupBox2->Size = System::Drawing::Size(1022, 448);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Producto";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Código,
					this->Tipo, this->Fabricación, this->IMEI, this->N_Serie, this->Garantia, this->Propietario
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1016, 423);
			this->dataGridView1->TabIndex = 0;
			// 
			// Código
			// 
			this->Código->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Width = 89;
			// 
			// Tipo
			// 
			this->Tipo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			this->Tipo->Width = 67;
			// 
			// Fabricación
			// 
			this->Fabricación->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Fabricación->HeaderText = L"Fabricación";
			this->Fabricación->Name = L"Fabricación";
			this->Fabricación->Width = 128;
			// 
			// IMEI
			// 
			this->IMEI->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->IMEI->HeaderText = L"IMEI";
			this->IMEI->Name = L"IMEI";
			this->IMEI->Width = 67;
			// 
			// N_Serie
			// 
			this->N_Serie->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->N_Serie->HeaderText = L"N° Serie";
			this->N_Serie->Name = L"N_Serie";
			this->N_Serie->Width = 89;
			// 
			// Garantia
			// 
			this->Garantia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Garantia->HeaderText = L"Fin Garantía";
			this->Garantia->Name = L"Garantia";
			this->Garantia->Width = 120;
			// 
			// Propietario
			// 
			this->Propietario->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Propietario->DefaultCellStyle = dataGridViewCellStyle13;
			this->Propietario->HeaderText = L"ID Propietario";
			this->Propietario->Name = L"Propietario";
			this->Propietario->Width = 131;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1022, 94);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de producto";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(564, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 25);
			this->comboBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(496, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tipo:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(126, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Cliente:";
			// 
			// Buscar
			// 
			this->Buscar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(832, 40);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmMantProducto::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(229, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// frmMantProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1046, 572);
			this->Name = L"frmMantProducto";
			this->Text = L"Mantenimiento de Productos";
			this->Load += gcnew System::EventHandler(this, &frmMantProducto::frmMantProducto_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Producto^>^ listaProducto) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaProducto->Count; i++) {
			Producto^ objProducto = listaProducto[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(objProducto->getCodigo());
			filaGrilla[1] = Convert::ToString(objProducto->getTipo_Producto()->getNombre());
			filaGrilla[2] = objProducto->getFecha_Creacion();
			filaGrilla[3] = objProducto->getIMEI();
			filaGrilla[4] = objProducto->getN_Serie();
			filaGrilla[5] = objProducto->getTiempo_Garantia();
			if (objProducto->getClientes() == nullptr) {
				filaGrilla[6] = "-";
			}
			else {
				filaGrilla[6] = objProducto->getClientes()->getIdentificacion();
			}
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ cliente = this->textBox1->Text;
		String^ tipo = this->comboBox1->Text;
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxClientexTipo(cliente, tipo);
		/*mostrar*/
		mostrarGrilla(listaProducto);
	}
	private: System::Void frmMantProducto_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		/*combobox*/
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		List< Tipo_Producto^>^ listaTipo_Producto = objTipo_ProductoController->BuscarTipo_ProductoTodas();
		this->comboBox1->Items->Clear(); //Borra valores 
		for (int i = 0; i < listaTipo_Producto->Count; i++) {
			this->comboBox1->Items->Add(listaTipo_Producto[i]->getNombre());
		}
		/*mostrar grilla*/
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProducto = objProductoController->BuscarProductoTodas();
		mostrarGrilla(listaProducto);
	}
};
}
