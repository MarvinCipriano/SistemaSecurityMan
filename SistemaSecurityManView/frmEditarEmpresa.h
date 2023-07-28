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
	/// Resumen de frmEditarEmpresa
	/// </summary>
	public ref class frmEditarEmpresa : public System::Windows::Forms::Form
	{
	public:
		frmEditarEmpresa(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarEmpresa(C_Empresa^ objEmpresa)
		{
			InitializeComponent();
			this->objEmpresaLocal = objEmpresa;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarEmpresa()
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
	private: System::Windows::Forms::TextBox^ textdistrito;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textruc;
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
	//
	private: C_Empresa^ objEmpresaLocal;
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
			this->textdistrito = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textruc = (gcnew System::Windows::Forms::TextBox());
			this->textnombre = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelar->Location = System::Drawing::Point(385, 270);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 8;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmEditarEmpresa::Cancelar_Click);
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(233, 270);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 7;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmEditarEmpresa::Grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textdistrito);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textruc);
			this->groupBox1->Controls->Add(this->textnombre);
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
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editar Cliente Empresa";
			// 
			// textdistrito
			// 
			this->textdistrito->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdistrito->Location = System::Drawing::Point(493, 161);
			this->textdistrito->Name = L"textdistrito";
			this->textdistrito->Size = System::Drawing::Size(182, 25);
			this->textdistrito->TabIndex = 32;
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
			// textruc
			// 
			this->textruc->Enabled = false;
			this->textruc->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textruc->Location = System::Drawing::Point(121, 79);
			this->textruc->Name = L"textruc";
			this->textruc->Size = System::Drawing::Size(182, 25);
			this->textruc->TabIndex = 29;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(20, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"RUC:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(20, 41);
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
			this->textcontra->Location = System::Drawing::Point(493, 79);
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
			this->label2->Location = System::Drawing::Point(370, 82);
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
			// frmEditarEmpresa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 308);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmEditarEmpresa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Empresa";
			this->Load += gcnew System::EventHandler(this, &frmEditarEmpresa::frmEditarEmpresa_Load);
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
		String^ Direccion = this->textdireccion->Text;
		String^ Distrito = this->textdistrito->Text;
		int Telefono = Convert::ToInt32(this->texttelefono->Text);
		String^ Nombre = this->textnombre->Text;
		String^ RUC = this->textruc->Text;

		C_EmpresaController^ objCEmpresaController = gcnew C_EmpresaController();
		ClientesController^ objClientesController = gcnew ClientesController();

		int existe1 = objCEmpresaController->ExisteC_EmpresaEmailconRUC(Email, RUC);
		int existe2 = objCEmpresaController->ExisteC_EmpresaTelefonoconRUC(Telefono, RUC);

		int existe3 = objClientesController->ExisteClientesEmailconDNI(Email, RUC);

		if (existe1 || existe3) {
			MessageBox::Show("Ya existe una empresa registrada en el sistema con el mismo email.");
		}
		if (existe2) {
			MessageBox::Show("Ya existe una empresa registrada en el sistema con el mismo número telefónico.");
		}
		else if (existe1 == 0 && existe2 == 0 && existe3 == 0) {
			objClientesController->ActualizarClientes(Convert::ToString(RUC), Email, Contrasenha);
			objCEmpresaController->ActualizarC_Empresa(Nombre, RUC, Email, Contrasenha, Direccion, Distrito, Telefono);
			MessageBox::Show("Los datos de la empresa han sido actualizados con exito");
			this->Close();
		}
	}
	private: System::Void frmEditarEmpresa_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->textemail->Text = this->objEmpresaLocal->getEmail();
		this->textcontra->Text = this->objEmpresaLocal->getContrasenha();
		this->textdireccion->Text = this->objEmpresaLocal->getDireccion();
		this->texttelefono->Text = Convert::ToString(this->objEmpresaLocal->getTelefono());
		this->textdistrito->Text = this->objEmpresaLocal->getDistrito();
		this->textnombre->Text = this->objEmpresaLocal->getNombre();
		this->textruc->Text = Convert::ToString(this->objEmpresaLocal->getRUC());
	}
};
}
