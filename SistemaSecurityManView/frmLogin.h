#pragma once
#include "frmLoginCliente.h"
#include "frmLoginAdmin.h"
#include "frmLoginTecnico.h"

namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Iniciar_Sesión;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Iniciar_Sesión = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Iniciar_Sesión->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Iniciar Sesión";
			// 
			// Iniciar_Sesión
			// 
			this->Iniciar_Sesión->Controls->Add(this->button3);
			this->Iniciar_Sesión->Controls->Add(this->button2);
			this->Iniciar_Sesión->Controls->Add(this->button1);
			this->Iniciar_Sesión->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Iniciar_Sesión->Location = System::Drawing::Point(34, 75);
			this->Iniciar_Sesión->Name = L"Iniciar_Sesión";
			this->Iniciar_Sesión->Size = System::Drawing::Size(288, 292);
			this->Iniciar_Sesión->TabIndex = 13;
			this->Iniciar_Sesión->TabStop = false;
			this->Iniciar_Sesión->Text = L"Usuarios";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(45, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Técnico";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmLogin::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(45, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Administrador";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmLogin::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(45, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cliente";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmLogin::button1_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 387);
			this->Controls->Add(this->Iniciar_Sesión);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Iniciar_Sesión->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//CLIENTE
		frmLoginCliente^ ventanaNuevoCliente = gcnew frmLoginCliente();
		ventanaNuevoCliente->ShowDialog();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//ADMINISTRADOR
		frmLoginAdmin^ ventanaNuevoAdmin = gcnew frmLoginAdmin();
		ventanaNuevoAdmin->ShowDialog();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//TECNICO
		frmLoginTecnico^ ventanaNuevoTecnico = gcnew frmLoginTecnico();
		ventanaNuevoTecnico->ShowDialog();
		this->Hide();
	}
};
}
