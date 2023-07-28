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
	/// Resumen de frmNuevoIndependiente
	/// </summary>
	public ref class frmNuevoIndependiente : public System::Windows::Forms::Form
	{
	public:
		frmNuevoIndependiente(void)
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
		~frmNuevoIndependiente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textapellido;





	private: System::Windows::Forms::TextBox^ textnombre;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ texttelefono;

	private: System::Windows::Forms::TextBox^ textdireccion;

	private: System::Windows::Forms::TextBox^ textcontra;

	private: System::Windows::Forms::TextBox^ textemail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Grabar;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::TextBox^ textdni;
	private: System::Windows::Forms::Label^ label6;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textdni = (gcnew System::Windows::Forms::TextBox());
			this->textapellido = (gcnew System::Windows::Forms::TextBox());
			this->textnombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->texttelefono = (gcnew System::Windows::Forms::TextBox());
			this->textdireccion = (gcnew System::Windows::Forms::TextBox());
			this->textcontra = (gcnew System::Windows::Forms::TextBox());
			this->textemail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Grabar = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textdni);
			this->groupBox1->Controls->Add(this->textapellido);
			this->groupBox1->Controls->Add(this->textnombre);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->texttelefono);
			this->groupBox1->Controls->Add(this->textdireccion);
			this->groupBox1->Controls->Add(this->textcontra);
			this->groupBox1->Controls->Add(this->textemail);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(705, 247);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar Cliente Independiente";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(370, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 17);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Distrito:";
			// 
			// textdni
			// 
			this->textdni->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdni->Location = System::Drawing::Point(121, 134);
			this->textdni->Name = L"textdni";
			this->textdni->Size = System::Drawing::Size(182, 25);
			this->textdni->TabIndex = 30;
			// 
			// textapellido
			// 
			this->textapellido->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textapellido->Location = System::Drawing::Point(121, 86);
			this->textapellido->Name = L"textapellido";
			this->textapellido->Size = System::Drawing::Size(182, 25);
			this->textapellido->TabIndex = 29;
			// 
			// textnombre
			// 
			this->textnombre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textnombre->Location = System::Drawing::Point(121, 38);
			this->textnombre->Name = L"textnombre";
			this->textnombre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textnombre->Size = System::Drawing::Size(182, 25);
			this->textnombre->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(26, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 17);
			this->label6->TabIndex = 27;
			this->label6->Text = L"DNI:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(26, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Apellido:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(26, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Nombre";
			// 
			// texttelefono
			// 
			this->texttelefono->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->texttelefono->Location = System::Drawing::Point(493, 201);
			this->texttelefono->Name = L"texttelefono";
			this->texttelefono->Size = System::Drawing::Size(182, 25);
			this->texttelefono->TabIndex = 24;
			// 
			// textdireccion
			// 
			this->textdireccion->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdireccion->Location = System::Drawing::Point(493, 121);
			this->textdireccion->Name = L"textdireccion";
			this->textdireccion->Size = System::Drawing::Size(182, 25);
			this->textdireccion->TabIndex = 23;
			// 
			// textcontra
			// 
			this->textcontra->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textcontra->Location = System::Drawing::Point(493, 80);
			this->textcontra->Name = L"textcontra";
			this->textcontra->Size = System::Drawing::Size(182, 25);
			this->textcontra->TabIndex = 22;
			// 
			// textemail
			// 
			this->textemail->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textemail->Location = System::Drawing::Point(493, 38);
			this->textemail->Name = L"textemail";
			this->textemail->Size = System::Drawing::Size(182, 25);
			this->textemail->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(370, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Teléfono";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(370, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Dirección:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(370, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Contraseña:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(370, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Email:";
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(233, 270);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 1;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmNuevoIndependiente::Grabar_Click);
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelar->Location = System::Drawing::Point(385, 270);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 2;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmNuevoIndependiente::Cancelar_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(493, 161);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 25);
			this->comboBox1->TabIndex = 33;
			// 
			// frmNuevoIndependiente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 308);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmNuevoIndependiente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Añadir Cliente Independiente";
			this->Load += gcnew System::EventHandler(this, &frmNuevoIndependiente::frmNuevoIndependiente_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		//GRABAR
		String^ Email = this->textemail->Text;
		String^ Contrasenha = this->textcontra->Text;
		String^ Direccion = this->textdireccion->Text;
		int Telefono = Convert::ToInt32(this->texttelefono->Text);
		String^ Distrito = this->comboBox1->Text;
		String^ Nombre = this->textnombre->Text;
		String^ Apellido = this->textapellido->Text;
		String^ DNI = this->textdni->Text;

		C_IndependienteController^ objC_IndependienteController = gcnew C_IndependienteController();
		ClientesController^ objClientesController = gcnew ClientesController();

		int existe1 = objC_IndependienteController->ExisteC_IndependienteDNI(DNI);
		int existe2 = objC_IndependienteController->ExisteC_IndependienteEmail(Email);
		int existe3 = objC_IndependienteController->ExisteC_IndependienteTelefono(Telefono);
		int existe4 = objClientesController->ExisteClientesxEmail(Email);
		int existe5 = objClientesController->ExisteClientesxID(DNI);

		if (existe1 || existe5) {
			MessageBox::Show("Ya existe un usuario registrado en el sistema con el mismo DNI.");
		}
		if (existe2 || existe4) {
			MessageBox::Show("Ya existe un usuario registrado en el sistema con el mismo email.");
		}
		if (existe3) {
			MessageBox::Show("Ya existe un usuario registrado en el sistema con el mismo número telefónico.");
		}
		else if (existe1 == 0 && existe2 == 0 && existe3 == 0 && existe4 == 0 && existe5 == 0) {
			objClientesController->RegistrarClientes(Convert::ToString(DNI), Email, Contrasenha);
			objC_IndependienteController->RegistrarC_IndeIndependiente(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, Distrito, Telefono);
			MessageBox::Show("El nuevo usuario ha sido registrado con exito");
			this->Close();
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void frmNuevoIndependiente_Load(System::Object^ sender, System::EventArgs^ e) {
		CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
		List< Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarCosto_EnvioTodas();
		this->comboBox1->Items->Clear(); //Borra valores 
		for (int i = 0; i < listaCosto_Envio->Count; i++) {
			this->comboBox1->Items->Add(listaCosto_Envio[i]->getDistrito());
		}
	}
};
}
