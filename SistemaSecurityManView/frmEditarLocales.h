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
	/// Resumen de frmEditarLocales
	/// </summary>
	public ref class frmEditarLocales : public System::Windows::Forms::Form
	{
	public:
		frmEditarLocales(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarLocales(Clientes^ objClientes,Locales^ objLocales)
		{
			InitializeComponent();
			this->objClienteslocal = objClientes;
			this->objLocaleslocal = objLocales;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarLocales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: Clientes^ objClienteslocal;
	private: Locales^ objLocaleslocal;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	protected:















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubi. URL (Bing):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID Propietario:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(167, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(167, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(542, 26);
			this->textBox2->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 18);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(379, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 18);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Direccion:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(379, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 18);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Distrito:";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(167, 47);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(182, 26);
			this->textBox7->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(527, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(182, 26);
			this->textBox3->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(728, 245);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"EditarLocal";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(174, 195);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(514, 18);
			this->linkLabel1->TabIndex = 21;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://www.bing.com/maps\?cp=-12.046036~-76.929703&lvl=11.0";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmEditarLocales::linkLabel1_LinkClicked);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(394, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 32);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarLocales::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(245, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 32);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarLocales::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(527, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 26);
			this->comboBox1->TabIndex = 22;
			// 
			// frmEditarLocales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 307);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmEditarLocales";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Locales";
			this->Load += gcnew System::EventHandler(this, &frmEditarLocales::frmEditarLocales_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmEditarLocales_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->textBox7->Text = objClienteslocal->getIdentificacion();
		this->textBox1->Text = objLocaleslocal->getNombre();
		this->textBox2->Text = objLocaleslocal->getUbicacion();
		this->textBox3->Text = objLocaleslocal->getDireccion();
		this->comboBox1->Text = objLocaleslocal->getDistrito();
		//VENTANA
		CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
		List< Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarCosto_EnvioTodas();
		this->comboBox1->Items->Clear(); //Borra valores 
		for (int i = 0; i < listaCosto_Envio->Count; i++) {
			this->comboBox1->Items->Add(listaCosto_Envio[i]->getDistrito());
		}
		this->textBox7->Text = objClienteslocal->getIdentificacion();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//GRABAR
		//String^ Identificacion = this->textBox7->Text;
		String^ Nombre = this->textBox1->Text;
		String^ Ubicacion = this->textBox2->Text;
		String^ Direccion = this->textBox3->Text;
		String^ Distrito = this->comboBox1->Text;
		LocalesController^ objLocalesController = gcnew LocalesController();

		int existeLocal = objLocalesController->ExisteLocalxClientexNombreDifetente(objClienteslocal, Nombre);

		if (existeLocal) {
			MessageBox::Show("Ya existe un Local registrado en el sistema con el mismo número nombre.");
		}
		else if (existeLocal == 0) {

			objLocalesController->ActualizarLocales(objLocaleslocal->getCodigo(), Nombre, Ubicacion, objClienteslocal, Direccion, Distrito);
			MessageBox::Show("Los datos del local se han sido actualizados con exito");
			this->Close();
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	// Obtén la URL del enlace
	String^ url = linkLabel1->Text;

	// Abre la URL en un navegador
	System::Diagnostics::Process::Start(url);
}
};
}
