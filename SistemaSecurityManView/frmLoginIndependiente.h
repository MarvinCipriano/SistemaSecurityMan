#pragma once
#include "frmPrincipalClientes.h"
#include "frmNuevoIndependiente.h"
namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//A�adir libreria de windows para producir palabras
	using namespace System::Speech::Synthesis;
	//SIEMPRE
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManController;
	using namespace SistemaSecurityManModel;

	/// <summary>
	/// Resumen de frmLoginIndependiente
	/// </summary>
	public ref class frmLoginIndependiente : public System::Windows::Forms::Form
	{
	public:
		frmLoginIndependiente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmLoginIndependiente(C_Independiente^ objIndependiente)
		{
			InitializeComponent();
			this->objIndependientelocal1 = objIndependiente;
			this->objIndependientelocal2 = objIndependiente;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmLoginIndependiente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Iniciar_Sesi�n;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ Contrase�a;
	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	//
	private: C_Independiente^ objIndependientelocal1;
	private: C_Independiente^ objIndependientelocal2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label2;
		   //
	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLoginIndependiente::typeid));
			this->Iniciar_Sesi�n = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Contrase�a = (gcnew System::Windows::Forms::Label());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Iniciar_Sesi�n->SuspendLayout();
			this->SuspendLayout();
			// 
			// Iniciar_Sesi�n
			// 
			this->Iniciar_Sesi�n->Controls->Add(this->button3);
			this->Iniciar_Sesi�n->Controls->Add(this->button4);
			this->Iniciar_Sesi�n->Controls->Add(this->Contrase�a);
			this->Iniciar_Sesi�n->Controls->Add(this->Usuario);
			this->Iniciar_Sesi�n->Controls->Add(this->textBox2);
			this->Iniciar_Sesi�n->Controls->Add(this->textBox1);
			this->Iniciar_Sesi�n->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Iniciar_Sesi�n->Location = System::Drawing::Point(34, 81);
			this->Iniciar_Sesi�n->Name = L"Iniciar_Sesi�n";
			this->Iniciar_Sesi�n->Size = System::Drawing::Size(288, 277);
			this->Iniciar_Sesi�n->TabIndex = 23;
			this->Iniciar_Sesi�n->TabStop = false;
			this->Iniciar_Sesi�n->Text = L"Independiente";
			this->Iniciar_Sesi�n->Enter += gcnew System::EventHandler(this, &frmLoginIndependiente::Iniciar_Sesi�n_Enter);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button3->Location = System::Drawing::Point(155, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 37);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Acceder";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmLoginIndependiente::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button4->Location = System::Drawing::Point(10, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 37);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Cancelar";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmLoginIndependiente::button4_Click);
			// 
			// Contrase�a
			// 
			this->Contrase�a->AutoSize = true;
			this->Contrase�a->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contrase�a->Location = System::Drawing::Point(49, 128);
			this->Contrase�a->Name = L"Contrase�a";
			this->Contrase�a->Size = System::Drawing::Size(121, 22);
			this->Contrase�a->TabIndex = 5;
			this->Contrase�a->Text = L"Contrase�a:";
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Usuario->Location = System::Drawing::Point(49, 55);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(86, 22);
			this->Usuario->TabIndex = 4;
			this->Usuario->Text = L"Usuario:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(53, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(166, 25);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(53, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 25);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 45);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Iniciar Sesi�n";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(253, 362);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(69, 16);
			this->linkLabel1->TabIndex = 24;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Registrate";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmLoginIndependiente::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(128, 362);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"�No tienes cuenta\?";
			// 
			// frmLoginIndependiente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 387);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Iniciar_Sesi�n);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmLoginIndependiente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmLoginIndependiente::frmLoginIndependiente_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmLoginIndependiente::frmLoginIndependiente_Load);
			this->Iniciar_Sesi�n->ResumeLayout(false);
			this->Iniciar_Sesi�n->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmLoginIndependiente_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//ACCEDER
		String^ id = this->textBox1->Text;

		C_IndependienteController^ objIndeController = gcnew C_IndependienteController();

		objIndependientelocal2 = objIndeController->BuscarUnC_IndependientexDNI(id);
		objIndependientelocal1 = objIndeController->BuscarUnC_IndependientexEmail(id);

		if (objIndependientelocal1 != nullptr && this->textBox1->Text == objIndependientelocal1->getEmail() && this->textBox2->Text == objIndependientelocal1->getContrasenha()) {
			ClientesController^ objClientesController = gcnew ClientesController();
			Clientes^ objClientes = objClientesController->BuscarUnClientesxEmail(id);

			frmPrincipalClientes^ ventanaPrincipal = gcnew frmPrincipalClientes(objClientes);
			ventanaPrincipal->Show();

			//Sentencias para producir sonido
			SpeechSynthesizer^ synthesizer = gcnew SpeechSynthesizer();
			synthesizer->Speak("Bienvenido cliente" + objIndependientelocal1->getNombre());
			Console::ReadLine();

			this->Hide();
		}
		else if (objIndependientelocal2 != nullptr && this->textBox1->Text == objIndependientelocal2->getDNI() && this->textBox2->Text == objIndependientelocal2->getContrasenha()) {
			ClientesController^ objClientesController = gcnew ClientesController();
			Clientes^ objClientes = objClientesController->BuscarUnClientesxID(id);

			frmPrincipalClientes^ ventanaPrincipal = gcnew frmPrincipalClientes(objClientes);
			ventanaPrincipal->Show();

			

			this->Hide();

			//Sentencias para producir sonido
			SpeechSynthesizer^ synthesizer = gcnew SpeechSynthesizer();
			synthesizer->Speak("Bienvenido cliente" + objIndependientelocal2->getNombre());
			Console::ReadLine();
		}
		else {
			MessageBox::Show("Usuario o contrase�a erroneo");
		}
	}
private: System::Void frmLoginIndependiente_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	//Registrate
	frmNuevoIndependiente^ ventanaNuevoIndependiente = gcnew frmNuevoIndependiente();
	ventanaNuevoIndependiente->ShowDialog();
}
private: System::Void Iniciar_Sesi�n_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
