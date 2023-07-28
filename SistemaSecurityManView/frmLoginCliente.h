#pragma once
#include "frmLoginEmpresa.h"
#include "frmLoginIndependiente.h"
namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLoginCliente
	/// </summary>
	public ref class frmLoginCliente : public System::Windows::Forms::Form
	{
	public:
		frmLoginCliente(void)
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
		~frmLoginCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Iniciar_Sesión;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLoginCliente::typeid));
			this->Iniciar_Sesión = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Iniciar_Sesión->SuspendLayout();
			this->SuspendLayout();
			// 
			// Iniciar_Sesión
			// 
			this->Iniciar_Sesión->Controls->Add(this->button3);
			this->Iniciar_Sesión->Controls->Add(this->button2);
			this->Iniciar_Sesión->Controls->Add(this->button1);
			this->Iniciar_Sesión->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Iniciar_Sesión->Location = System::Drawing::Point(34, 81);
			this->Iniciar_Sesión->Name = L"Iniciar_Sesión";
			this->Iniciar_Sesión->Size = System::Drawing::Size(288, 277);
			this->Iniciar_Sesión->TabIndex = 16;
			this->Iniciar_Sesión->TabStop = false;
			this->Iniciar_Sesión->Text = L"Clientes";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(75, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 38);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Cancelar";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmLoginCliente::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(48, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Empresa";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmLoginCliente::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(48, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Independiente";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmLoginCliente::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 45);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Iniciar Sesión";
			// 
			// frmLoginCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 387);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Iniciar_Sesión);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmLoginCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmLoginCliente::frmLoginCliente_FormClosing);
			this->Iniciar_Sesión->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmLoginCliente_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//INDEPENDIENTE
		frmLoginIndependiente^ ventanaIndependiente = gcnew frmLoginIndependiente();
		ventanaIndependiente->ShowDialog();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//EMPRESA
		frmLoginEmpresa^ ventanaEmpresa = gcnew frmLoginEmpresa();
		ventanaEmpresa->ShowDialog();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		Application::Exit();
	}
};
}
