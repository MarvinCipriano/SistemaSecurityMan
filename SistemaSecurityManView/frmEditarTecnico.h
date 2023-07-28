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
	/// Resumen de frmEditarTecnico
	/// </summary>
	public ref class frmEditarTecnico : public System::Windows::Forms::Form
	{
	public:
		frmEditarTecnico(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarTecnico(Tecnico^ objTecnico)
		{
			InitializeComponent();
			this->objTecnicoLocal = objTecnico;
			//
			//TODO: agregar código de constructor aquí
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarTecnico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancelar;
	protected:
	private: System::Windows::Forms::Button^ Grabar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ texttelefono;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textdni;
	private: System::Windows::Forms::TextBox^ textapellido;
	private: System::Windows::Forms::TextBox^ textnombre;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textdireccion;
	private: System::Windows::Forms::TextBox^ textcontra;
	private: System::Windows::Forms::TextBox^ textemail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Grabar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->texttelefono = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textdni = (gcnew System::Windows::Forms::TextBox());
			this->textapellido = (gcnew System::Windows::Forms::TextBox());
			this->textnombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textdireccion = (gcnew System::Windows::Forms::TextBox());
			this->textcontra = (gcnew System::Windows::Forms::TextBox());
			this->textemail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelar->Location = System::Drawing::Point(385, 258);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 11;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmEditarTecnico::Cancelar_Click);
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(233, 258);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 10;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmEditarTecnico::Grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->texttelefono);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textdni);
			this->groupBox1->Controls->Add(this->textapellido);
			this->groupBox1->Controls->Add(this->textnombre);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textdireccion);
			this->groupBox1->Controls->Add(this->textcontra);
			this->groupBox1->Controls->Add(this->textemail);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(705, 235);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editar Técnico";
			// 
			// texttelefono
			// 
			this->texttelefono->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->texttelefono->Location = System::Drawing::Point(493, 185);
			this->texttelefono->Name = L"texttelefono";
			this->texttelefono->Size = System::Drawing::Size(182, 25);
			this->texttelefono->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(370, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Teléfono:";
			// 
			// textdni
			// 
			this->textdni->Enabled = false;
			this->textdni->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdni->Location = System::Drawing::Point(121, 134);
			this->textdni->Name = L"textdni";
			this->textdni->Size = System::Drawing::Size(182, 25);
			this->textdni->TabIndex = 30;
			// 
			// textapellido
			// 
			this->textapellido->Enabled = false;
			this->textapellido->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textapellido->Location = System::Drawing::Point(121, 86);
			this->textapellido->Name = L"textapellido";
			this->textapellido->Size = System::Drawing::Size(182, 25);
			this->textapellido->TabIndex = 29;
			// 
			// textnombre
			// 
			this->textnombre->Enabled = false;
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
			// textdireccion
			// 
			this->textdireccion->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdireccion->Location = System::Drawing::Point(493, 134);
			this->textdireccion->Name = L"textdireccion";
			this->textdireccion->Size = System::Drawing::Size(182, 25);
			this->textdireccion->TabIndex = 24;
			// 
			// textcontra
			// 
			this->textcontra->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textcontra->Location = System::Drawing::Point(493, 86);
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
			this->label4->Location = System::Drawing::Point(370, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Dirección:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(370, 89);
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
			// frmEditarTecnico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 296);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmEditarTecnico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Tecnico";
			this->Load += gcnew System::EventHandler(this, &frmEditarTecnico::frmEditarTecnico_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		//GRABAR
		String^ Email = this->textemail->Text;
		String^ Contrasenha = this->textcontra->Text;
		String^ Nombre = this->textnombre->Text;
		String^ Apellido = this->textapellido->Text;
		String^ DNI = this->textdni->Text;
		String^ Telefono = this->texttelefono->Text;
		String^ Direccion = this->textdireccion->Text;

		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		ClientesController^ objClientesController = gcnew ClientesController();

		int existe1 = objTecnicoController->ExisteTecnicoxEmailconDNI(Email, DNI);
		int existe2 = objClientesController->ExisteClientesEmailconDNI(Email, DNI);

		if (existe1 || existe2) {
			MessageBox::Show("Ya existe un usuario registrado en el sistema con el mismo email.");
		}
		else if (existe1 == 0 && existe2 == 0) {
			objClientesController->ActualizarClientes(Convert::ToString(DNI), Email, Contrasenha);
			objTecnicoController->ActualizarTecnico(Nombre, Apellido, DNI, Email, Contrasenha, Direccion, Convert::ToInt32(Telefono));
			MessageBox::Show("Los datos del administrador han sido actualizados con exito");
			this->Close();
		}
	}
	private: System::Void frmEditarTecnico_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->textnombre->Text = this->objTecnicoLocal->getNombre();
		this->textapellido->Text = this->objTecnicoLocal->getApellido();
		this->textdni->Text = Convert::ToString(this->objTecnicoLocal->getDNI());
		this->textemail->Text = this->objTecnicoLocal->getEmail();
		this->textcontra->Text = this->objTecnicoLocal->getContrasenha();
		this->texttelefono->Text = Convert::ToString(this->objTecnicoLocal->getTelefono());
		this->textdireccion->Text = this->objTecnicoLocal->getDireccion();
	}
};
}
