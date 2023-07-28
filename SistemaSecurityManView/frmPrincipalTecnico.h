#pragma once
#include "frmPedidosProduccion.h"
#include "frmProveedoresTecnico.h"
#include "frmAlmacenComponentes.h"

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
	/// Resumen de frmPrincipalTecnico
	/// </summary>
	public ref class frmPrincipalTecnico : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalTecnico(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalTecnico(Clientes^ objCliente)
		{
			InitializeComponent();
			this->objClienteLocal = objCliente;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipalTecnico()
		{
			if (components)
			{
				delete components;
			}
		}

	//protected:





	//
	private: Clientes^ objClienteLocal;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnSalir;


	private: System::Windows::Forms::Button^ btncomprar;

	private: System::Windows::Forms::Button^ btnpedidos;


	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipalTecnico::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btncomprar = (gcnew System::Windows::Forms::Button());
			this->btnpedidos = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel2->Controls->Add(this->btnSalir);
			this->panel2->Controls->Add(this->btncomprar);
			this->panel2->Controls->Add(this->btnpedidos);
			this->panel2->Controls->Add(this->panelLogo);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 572);
			this->panel2->TabIndex = 5;
			// 
			// btnSalir
			// 
			this->btnSalir->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSalir->FlatAppearance->BorderSize = 0;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnSalir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSalir->Location = System::Drawing::Point(0, 527);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSalir->Size = System::Drawing::Size(250, 45);
			this->btnSalir->TabIndex = 7;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmPrincipalTecnico::btnSalir_Click);
			// 
			// btncomprar
			// 
			this->btncomprar->Dock = System::Windows::Forms::DockStyle::Top;
			this->btncomprar->FlatAppearance->BorderSize = 0;
			this->btncomprar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncomprar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btncomprar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btncomprar->Location = System::Drawing::Point(0, 145);
			this->btncomprar->Name = L"btncomprar";
			this->btncomprar->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btncomprar->Size = System::Drawing::Size(250, 45);
			this->btncomprar->TabIndex = 4;
			this->btncomprar->Text = L"Comprar Componentes";
			this->btncomprar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btncomprar->UseVisualStyleBackColor = true;
			this->btncomprar->Click += gcnew System::EventHandler(this, &frmPrincipalTecnico::btncomprar_Click);
			// 
			// btnpedidos
			// 
			this->btnpedidos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnpedidos->FlatAppearance->BorderSize = 0;
			this->btnpedidos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnpedidos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpedidos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnpedidos->Location = System::Drawing::Point(0, 100);
			this->btnpedidos->Name = L"btnpedidos";
			this->btnpedidos->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnpedidos->Size = System::Drawing::Size(250, 45);
			this->btnpedidos->TabIndex = 2;
			this->btnpedidos->Text = L"Pedidos de Produccíon";
			this->btnpedidos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnpedidos->UseVisualStyleBackColor = true;
			this->btnpedidos->Click += gcnew System::EventHandler(this, &frmPrincipalTecnico::btnpedidos_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(250, 100);
			this->panelLogo->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SecurityMan";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(250, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1045, 572);
			this->panel1->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1045, 572);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// frmPrincipalTecnico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 572);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(1311, 611);
			this->Name = L"frmPrincipalTecnico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ventana Tecnico";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipalTecnico::frmPrincipalTecnico_FormClosing);
			this->panel2->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	template <class T>
	void AbrirPanel(T FormHijo)
	{
		if (this->panel1->Controls->Count > 0)
			this->panel1->Controls->RemoveAt(0);
		FormHijo->TopLevel = false;
		FormHijo->Dock = DockStyle::Fill;
		this->panel1->Controls->Add(FormHijo);
		this->panel1->Tag = FormHijo;
		FormHijo->Show();
	}
	private: Form^ activeForm = nullptr;
	private: void openChildForm(Form^ chidForm) {
		if (activeForm != nullptr) {
			activeForm->Close();
		}
		activeForm = chidForm;
		chidForm->TopLevel = false;
		chidForm->Dock = DockStyle::Fill;
		panel1->Controls->Add(chidForm);
		panel1->Tag = chidForm;
		chidForm->BringToFront();
		chidForm->Show();
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmPrincipalTecnico_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
			System::Windows::Forms::Application::Exit();
		} 
	}
	private: System::Void ordenDeProducciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void almacenDeComponentesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ALMACEN DE COMPONENTES
		//this->AbrirPanel(gcnew SistemaSecurityManView::frmAlmacenComponentes());
	}
private: System::Void btnpedidos_Click(System::Object^ sender, System::EventArgs^ e) {
	//PEDIDOS DE PRODUCCION
	this->openChildForm(gcnew SistemaSecurityManView::frmPedidosProduccion(objClienteLocal));
}
private: System::Void btncomprar_Click(System::Object^ sender, System::EventArgs^ e) {
	//COMPRAR COMPONENTES
	this->openChildForm(gcnew SistemaSecurityManView::frmProveedoresTecnico(objClienteLocal));
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	//SALIR
	Application::Exit();
}
};
}
