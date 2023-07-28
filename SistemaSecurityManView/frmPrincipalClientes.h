#pragma once
#include "frmComprar.h"
#include "frmVerLocales.h"
#include "frmVerProductos.h"
#include "Alarma.h"
#include "frmVerMisComprasClientes.h"

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
	/// Resumen de frmPrincipalClientes
	/// </summary>
	public ref class frmPrincipalClientes : public System::Windows::Forms::Form
	{
	public:
		frmPrincipalClientes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalClientes(Clientes^ objCliente)
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
		~frmPrincipalClientes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	//
	private: Clientes^ objClienteLocal;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnComprar;

	private: System::Windows::Forms::Button^ btnProductos;
	private: System::Windows::Forms::Button^ btnLocales;

	private: System::Windows::Forms::Button^ btnAlarma;


	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipalClientes::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnAlarma = (gcnew System::Windows::Forms::Button());
			this->btnLocales = (gcnew System::Windows::Forms::Button());
			this->btnProductos = (gcnew System::Windows::Forms::Button());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->btnSalir);
			this->panel2->Controls->Add(this->btnAlarma);
			this->panel2->Controls->Add(this->btnLocales);
			this->panel2->Controls->Add(this->btnProductos);
			this->panel2->Controls->Add(this->btnComprar);
			this->panel2->Controls->Add(this->panelLogo);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 572);
			this->panel2->TabIndex = 4;
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
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::btnSalir_Click);
			// 
			// btnAlarma
			// 
			this->btnAlarma->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAlarma->FlatAppearance->BorderSize = 0;
			this->btnAlarma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAlarma->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnAlarma->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAlarma->Location = System::Drawing::Point(0, 235);
			this->btnAlarma->Name = L"btnAlarma";
			this->btnAlarma->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnAlarma->Size = System::Drawing::Size(250, 45);
			this->btnAlarma->TabIndex = 6;
			this->btnAlarma->Text = L"Alarma";
			this->btnAlarma->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAlarma->UseVisualStyleBackColor = true;
			this->btnAlarma->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::btnAlarma_Click);
			// 
			// btnLocales
			// 
			this->btnLocales->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLocales->FlatAppearance->BorderSize = 0;
			this->btnLocales->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocales->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnLocales->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnLocales->Location = System::Drawing::Point(0, 190);
			this->btnLocales->Name = L"btnLocales";
			this->btnLocales->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnLocales->Size = System::Drawing::Size(250, 45);
			this->btnLocales->TabIndex = 5;
			this->btnLocales->Text = L"Mis Locales";
			this->btnLocales->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLocales->UseVisualStyleBackColor = true;
			this->btnLocales->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::btnLocales_Click);
			// 
			// btnProductos
			// 
			this->btnProductos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProductos->FlatAppearance->BorderSize = 0;
			this->btnProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProductos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnProductos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProductos->Location = System::Drawing::Point(0, 145);
			this->btnProductos->Name = L"btnProductos";
			this->btnProductos->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnProductos->Size = System::Drawing::Size(250, 45);
			this->btnProductos->TabIndex = 4;
			this->btnProductos->Text = L"Mis Productos";
			this->btnProductos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProductos->UseVisualStyleBackColor = true;
			this->btnProductos->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::btnProductos_Click);
			// 
			// btnComprar
			// 
			this->btnComprar->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnComprar->FlatAppearance->BorderSize = 0;
			this->btnComprar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnComprar->Location = System::Drawing::Point(0, 100);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnComprar->Size = System::Drawing::Size(250, 45);
			this->btnComprar->TabIndex = 2;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprar->UseVisualStyleBackColor = true;
			this->btnComprar->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::btnComprar_Click);
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
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(250, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1045, 572);
			this->panel1->TabIndex = 5;
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
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(0, 280);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(250, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Mis Compras";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipalClientes::button1_Click);
			// 
			// frmPrincipalClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 572);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(1311, 611);
			this->Name = L"frmPrincipalClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ventana Clientes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipalClientes::frmPrincipalClientes_FormClosing);
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
	private: System::Void frmPrincipalClientes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR//LIMPIAR CARRITO
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();

		if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
		//COMPRAR
		this->openChildForm(gcnew SistemaSecurityManView::frmComprar(objClienteLocal));
	}
	private: System::Void btnProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		//MISPRODUCTOS
		this->openChildForm(gcnew SistemaSecurityManView::frmVerProductos(objClienteLocal));
	}
	private: System::Void btnLocales_Click(System::Object^ sender, System::EventArgs^ e) {
		//MISLOCALES
		this->openChildForm(gcnew SistemaSecurityManView::frmVerLocales(objClienteLocal));
	}
	private: System::Void btnAlarma_Click(System::Object^ sender, System::EventArgs^ e) {
		//ALARMA
		this->openChildForm(gcnew SistemaSecurityManView::Alarma(objClienteLocal));
	}
	private: System::Void reporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ordenDeProducciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void alarmaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		//SALIR
		//LIMPIAR CARRITO
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//MISLOCALES
		this->openChildForm(gcnew SistemaSecurityManView::frmVerMisComprasClientes(objClienteLocal));
	}
};
}
