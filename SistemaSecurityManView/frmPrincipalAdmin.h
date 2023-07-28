#pragma once
#include "frmMantClientes.h"
#include "frmMantComponente.h"
#include "frmMantTipoProductos.h"
#include "frmMantAdministrador.h"
#include "frmMantTecnico.h"
#include "frmOrdenProduccion.h"
#include "frmMantProducto.h"
#include "frmMantEnvio.h"
#include "frmMantProveedores.h"
#include "frmReporteDistritoLocales.h"
#include "frmTodasFacturas.h"
#include "frmReportesIngresosxEgresos.h"
#include "frmReporteRobosxDistrito.h"

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
	/// Resumen de frmPrincipalAdmin
	/// </summary>
	public ref class frmPrincipalAdmin : public System::Windows::Forms::Form
	{
		

	public:
		frmPrincipalAdmin(void)
		{
			InitializeComponent();
			customizeDesing();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPrincipalAdmin(Clientes^ objCliente)
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
		~frmPrincipalAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	//
	private: Clientes^ objClienteLocal;
	//

	private: System::Windows::Forms::Panel^ paneSideMenu;
	private: System::Windows::Forms::Panel^ panelLogo;


	private: System::Windows::Forms::Button^ btnMantenimiento;
	private: System::Windows::Forms::Button^ btnProductos;

	private: System::Windows::Forms::Button^ btnOrden;
	private: System::Windows::Forms::Panel^ panelMantenimiento;
	private: System::Windows::Forms::Button^ btnProveedores;
	private: System::Windows::Forms::Button^ btnTarifarioenvios;
	private: System::Windows::Forms::Button^ btnReporte;


	private: System::Windows::Forms::Button^ btnTipoproducto;
	private: System::Windows::Forms::Button^ btnClientes;
	private: System::Windows::Forms::Panel^ panelUsuarios;
	private: System::Windows::Forms::Button^ btnTecnicos;
	private: System::Windows::Forms::Button^ btnAdministradores;
	private: System::Windows::Forms::Button^ btnUsuarios;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelReportes;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipalAdmin::typeid));
			this->paneSideMenu = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panelReportes = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnReporte = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnOrden = (gcnew System::Windows::Forms::Button());
			this->btnProductos = (gcnew System::Windows::Forms::Button());
			this->panelMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->btnProveedores = (gcnew System::Windows::Forms::Button());
			this->btnTarifarioenvios = (gcnew System::Windows::Forms::Button());
			this->btnTipoproducto = (gcnew System::Windows::Forms::Button());
			this->btnClientes = (gcnew System::Windows::Forms::Button());
			this->panelUsuarios = (gcnew System::Windows::Forms::Panel());
			this->btnTecnicos = (gcnew System::Windows::Forms::Button());
			this->btnAdministradores = (gcnew System::Windows::Forms::Button());
			this->btnUsuarios = (gcnew System::Windows::Forms::Button());
			this->btnMantenimiento = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->paneSideMenu->SuspendLayout();
			this->panelReportes->SuspendLayout();
			this->panelMantenimiento->SuspendLayout();
			this->panelUsuarios->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// paneSideMenu
			// 
			this->paneSideMenu->AutoScroll = true;
			this->paneSideMenu->BackColor = System::Drawing::Color::MidnightBlue;
			this->paneSideMenu->Controls->Add(this->button4);
			this->paneSideMenu->Controls->Add(this->panelReportes);
			this->paneSideMenu->Controls->Add(this->btnReporte);
			this->paneSideMenu->Controls->Add(this->btnSalir);
			this->paneSideMenu->Controls->Add(this->btnOrden);
			this->paneSideMenu->Controls->Add(this->btnProductos);
			this->paneSideMenu->Controls->Add(this->panelMantenimiento);
			this->paneSideMenu->Controls->Add(this->btnMantenimiento);
			this->paneSideMenu->Controls->Add(this->panelLogo);
			this->paneSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->paneSideMenu->Location = System::Drawing::Point(0, 0);
			this->paneSideMenu->MinimumSize = System::Drawing::Size(250, 572);
			this->paneSideMenu->Name = L"paneSideMenu";
			this->paneSideMenu->Size = System::Drawing::Size(250, 572);
			this->paneSideMenu->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(0, 670);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(233, 45);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Factura";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::button4_Click);
			// 
			// panelReportes
			// 
			this->panelReportes->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelReportes->Controls->Add(this->button3);
			this->panelReportes->Controls->Add(this->button2);
			this->panelReportes->Controls->Add(this->button1);
			this->panelReportes->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelReportes->Location = System::Drawing::Point(0, 550);
			this->panelReportes->Name = L"panelReportes";
			this->panelReportes->Size = System::Drawing::Size(233, 120);
			this->panelReportes->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(0, 80);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(233, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Balance";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(0, 40);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(233, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Incidencias x Distrito";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(233, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Distritos x Local";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::button1_Click);
			// 
			// btnReporte
			// 
			this->btnReporte->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnReporte->FlatAppearance->BorderSize = 0;
			this->btnReporte->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReporte->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnReporte->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnReporte->Location = System::Drawing::Point(0, 505);
			this->btnReporte->Name = L"btnReporte";
			this->btnReporte->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnReporte->Size = System::Drawing::Size(233, 45);
			this->btnReporte->TabIndex = 4;
			this->btnReporte->Text = L"Reporte";
			this->btnReporte->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReporte->UseVisualStyleBackColor = true;
			this->btnReporte->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnProductos_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSalir->FlatAppearance->BorderSize = 0;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnSalir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSalir->Location = System::Drawing::Point(0, 715);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSalir->Size = System::Drawing::Size(233, 45);
			this->btnSalir->TabIndex = 5;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnSalir_Click);
			// 
			// btnOrden
			// 
			this->btnOrden->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOrden->FlatAppearance->BorderSize = 0;
			this->btnOrden->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOrden->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnOrden->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOrden->Location = System::Drawing::Point(0, 460);
			this->btnOrden->Name = L"btnOrden";
			this->btnOrden->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnOrden->Size = System::Drawing::Size(233, 45);
			this->btnOrden->TabIndex = 4;
			this->btnOrden->Text = L"Orden de Producción";
			this->btnOrden->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrden->UseVisualStyleBackColor = true;
			this->btnOrden->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnOrden_Click);
			// 
			// btnProductos
			// 
			this->btnProductos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProductos->FlatAppearance->BorderSize = 0;
			this->btnProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProductos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnProductos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProductos->Location = System::Drawing::Point(0, 415);
			this->btnProductos->Name = L"btnProductos";
			this->btnProductos->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnProductos->Size = System::Drawing::Size(233, 45);
			this->btnProductos->TabIndex = 3;
			this->btnProductos->Text = L"Productos";
			this->btnProductos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProductos->UseVisualStyleBackColor = true;
			this->btnProductos->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnProductos_Click_1);
			// 
			// panelMantenimiento
			// 
			this->panelMantenimiento->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMantenimiento->Controls->Add(this->btnProveedores);
			this->panelMantenimiento->Controls->Add(this->btnTarifarioenvios);
			this->panelMantenimiento->Controls->Add(this->btnTipoproducto);
			this->panelMantenimiento->Controls->Add(this->btnClientes);
			this->panelMantenimiento->Controls->Add(this->panelUsuarios);
			this->panelMantenimiento->Controls->Add(this->btnUsuarios);
			this->panelMantenimiento->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelMantenimiento->Location = System::Drawing::Point(0, 145);
			this->panelMantenimiento->Name = L"panelMantenimiento";
			this->panelMantenimiento->Size = System::Drawing::Size(233, 270);
			this->panelMantenimiento->TabIndex = 2;
			// 
			// btnProveedores
			// 
			this->btnProveedores->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnProveedores->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProveedores->FlatAppearance->BorderSize = 0;
			this->btnProveedores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProveedores->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnProveedores->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProveedores->Location = System::Drawing::Point(0, 230);
			this->btnProveedores->Name = L"btnProveedores";
			this->btnProveedores->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnProveedores->Size = System::Drawing::Size(233, 40);
			this->btnProveedores->TabIndex = 6;
			this->btnProveedores->Text = L"Proveedores";
			this->btnProveedores->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProveedores->UseVisualStyleBackColor = false;
			this->btnProveedores->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnProveedores_Click);
			// 
			// btnTarifarioenvios
			// 
			this->btnTarifarioenvios->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTarifarioenvios->FlatAppearance->BorderSize = 0;
			this->btnTarifarioenvios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTarifarioenvios->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnTarifarioenvios->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTarifarioenvios->Location = System::Drawing::Point(0, 190);
			this->btnTarifarioenvios->Name = L"btnTarifarioenvios";
			this->btnTarifarioenvios->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnTarifarioenvios->Size = System::Drawing::Size(233, 40);
			this->btnTarifarioenvios->TabIndex = 5;
			this->btnTarifarioenvios->Text = L"Tarifario de envios";
			this->btnTarifarioenvios->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTarifarioenvios->UseVisualStyleBackColor = true;
			this->btnTarifarioenvios->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnTarifarioenvios_Click);
			// 
			// btnTipoproducto
			// 
			this->btnTipoproducto->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTipoproducto->FlatAppearance->BorderSize = 0;
			this->btnTipoproducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTipoproducto->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnTipoproducto->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTipoproducto->Location = System::Drawing::Point(0, 150);
			this->btnTipoproducto->Name = L"btnTipoproducto";
			this->btnTipoproducto->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnTipoproducto->Size = System::Drawing::Size(233, 40);
			this->btnTipoproducto->TabIndex = 3;
			this->btnTipoproducto->Text = L"Tipo de producto";
			this->btnTipoproducto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTipoproducto->UseVisualStyleBackColor = true;
			this->btnTipoproducto->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnTipoproducto_Click);
			// 
			// btnClientes
			// 
			this->btnClientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnClientes->FlatAppearance->BorderSize = 0;
			this->btnClientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClientes->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnClientes->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClientes->Location = System::Drawing::Point(0, 110);
			this->btnClientes->Name = L"btnClientes";
			this->btnClientes->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnClientes->Size = System::Drawing::Size(233, 40);
			this->btnClientes->TabIndex = 2;
			this->btnClientes->Text = L"Clientes";
			this->btnClientes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClientes->UseVisualStyleBackColor = true;
			this->btnClientes->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnClientes_Click);
			// 
			// panelUsuarios
			// 
			this->panelUsuarios->BackColor = System::Drawing::Color::AliceBlue;
			this->panelUsuarios->Controls->Add(this->btnTecnicos);
			this->panelUsuarios->Controls->Add(this->btnAdministradores);
			this->panelUsuarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelUsuarios->Location = System::Drawing::Point(0, 40);
			this->panelUsuarios->Name = L"panelUsuarios";
			this->panelUsuarios->Size = System::Drawing::Size(233, 70);
			this->panelUsuarios->TabIndex = 1;
			// 
			// btnTecnicos
			// 
			this->btnTecnicos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnTecnicos->FlatAppearance->BorderSize = 0;
			this->btnTecnicos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTecnicos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnTecnicos->Location = System::Drawing::Point(0, 35);
			this->btnTecnicos->Name = L"btnTecnicos";
			this->btnTecnicos->Padding = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnTecnicos->Size = System::Drawing::Size(233, 35);
			this->btnTecnicos->TabIndex = 1;
			this->btnTecnicos->Text = L"Técnicos";
			this->btnTecnicos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTecnicos->UseVisualStyleBackColor = true;
			this->btnTecnicos->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::Tecnicos_Click);
			// 
			// btnAdministradores
			// 
			this->btnAdministradores->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAdministradores->FlatAppearance->BorderSize = 0;
			this->btnAdministradores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdministradores->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnAdministradores->Location = System::Drawing::Point(0, 0);
			this->btnAdministradores->Name = L"btnAdministradores";
			this->btnAdministradores->Padding = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnAdministradores->Size = System::Drawing::Size(233, 35);
			this->btnAdministradores->TabIndex = 0;
			this->btnAdministradores->Text = L"Administradores";
			this->btnAdministradores->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdministradores->UseVisualStyleBackColor = true;
			this->btnAdministradores->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnAdministradores_Click);
			// 
			// btnUsuarios
			// 
			this->btnUsuarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnUsuarios->FlatAppearance->BorderSize = 0;
			this->btnUsuarios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUsuarios->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F));
			this->btnUsuarios->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUsuarios->Location = System::Drawing::Point(0, 0);
			this->btnUsuarios->Name = L"btnUsuarios";
			this->btnUsuarios->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnUsuarios->Size = System::Drawing::Size(233, 40);
			this->btnUsuarios->TabIndex = 0;
			this->btnUsuarios->Text = L"Usuarios";
			this->btnUsuarios->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnUsuarios->UseVisualStyleBackColor = true;
			this->btnUsuarios->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnUsuarios_Click);
			// 
			// btnMantenimiento
			// 
			this->btnMantenimiento->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMantenimiento->FlatAppearance->BorderSize = 0;
			this->btnMantenimiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMantenimiento->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMantenimiento->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMantenimiento->Location = System::Drawing::Point(0, 100);
			this->btnMantenimiento->Name = L"btnMantenimiento";
			this->btnMantenimiento->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnMantenimiento->Size = System::Drawing::Size(233, 45);
			this->btnMantenimiento->TabIndex = 1;
			this->btnMantenimiento->Text = L"Mantenimiento";
			this->btnMantenimiento->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMantenimiento->UseVisualStyleBackColor = true;
			this->btnMantenimiento->Click += gcnew System::EventHandler(this, &frmPrincipalAdmin::btnMantenimiento_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(233, 100);
			this->panelLogo->TabIndex = 0;
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
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1045, 572);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// frmPrincipalAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 572);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->paneSideMenu);
			this->MinimumSize = System::Drawing::Size(1311, 611);
			this->Name = L"frmPrincipalAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ventana Administrador";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipalAdmin::frmPrincipalAdmin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPrincipalAdmin::frmPrincipalAdmin_Load);
			this->paneSideMenu->ResumeLayout(false);
			this->panelReportes->ResumeLayout(false);
			this->panelMantenimiento->ResumeLayout(false);
			this->panelUsuarios->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	template <class T>
	void AbrirPanel(T^ FormHijo)
	{
		if (this->panel1->Controls->Count > 0)
			this->panel1->Controls->RemoveAt(0);
		FormHijo->TopLevel = false;
		FormHijo->Dock = DockStyle::Fill;
		this->panel1->Controls->Add(FormHijo);
		this->panel1->Tag = FormHijo;
		FormHijo->BringToFront();
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

	private: void customizeDesing() {
		this->panelMantenimiento->Visible = false;
		this->panelUsuarios->Visible = false;
		this->panelReportes->Visible = false;
	}
	private: void hideSubMenu() {
		if (panelMantenimiento->Visible == true) {
			this->panelMantenimiento->Visible = false;
			if (this->panelUsuarios->Visible == true) {
				this->panelUsuarios->Visible = false;
			}
		}
		if (this->panelReportes->Visible == true) {
			this->panelReportes->Visible = false;
		}
	}
	private: void showSubMenu(Panel^ SubMenu, Panel^ SubSubMenu) {
		if (SubMenu->Visible == false) {
			hideSubMenu();
			SubMenu->Visible = true;
			SubSubMenu->Visible = false;
		}
		else {
			SubMenu->Visible = false;
		}
	}
	private: System::Void frmPrincipalAdmin_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
		//MANTENIMIENTO
		this->panelReportes->Visible = false;
		this->showSubMenu(panelMantenimiento, panelUsuarios);
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
	}
	private: System::Void frmPrincipalAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		this->hideSubMenu();
		this->panelReportes->Visible = false;
	}
	private: System::Void btnUsuarios_Click(System::Object^ sender, System::EventArgs^ e) {
		//USUARIOS
		if (panelUsuarios->Visible == false) {
			this->panelUsuarios->Visible = true;
			this->panelMantenimiento->Visible = true;
			this->panelMantenimiento->Size = System::Drawing::Size(322, 270);
		}
		else {
			panelUsuarios->Visible = false;
			this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		}
	}
	private: System::Void btnAdministradores_Click(System::Object^ sender, System::EventArgs^ e) {
		//ADMINISTRADORES
		hideSubMenu();
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->panelUsuarios->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmMantAdministrador);
	}
	private: System::Void Tecnicos_Click(System::Object^ sender, System::EventArgs^ e) {
		//TECNICOS
		hideSubMenu();
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->panelUsuarios->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmMantTecnico);
	}
	private: System::Void btnClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		//CLIENTES
		hideSubMenu();
		this->panelUsuarios->Visible = false;
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->openChildForm(gcnew SistemaSecurityManView::frmMantClientes);
	}
	private: System::Void btnTipoproducto_Click(System::Object^ sender, System::EventArgs^ e) {
		//TIPO DE PRODUCTO
		hideSubMenu();
		this->panelUsuarios->Visible = false;
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->openChildForm(gcnew SistemaSecurityManView::frmMantTipoProductos);
	}
	private: System::Void btnProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		//REPORTE
		if (panelReportes->Visible == false) {
			hideSubMenu();
			this->panelReportes->Visible = true;
		}
		else {
			this->panelReportes->Visible = false;
		}
	}
	private: System::Void btnTarifarioenvios_Click(System::Object^ sender, System::EventArgs^ e) {
		//TARIFARIO DE ENVIOS
		hideSubMenu();
		this->panelUsuarios->Visible = false;
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->openChildForm(gcnew SistemaSecurityManView::frmMantEnvio);
	}
	private: System::Void btnProveedores_Click(System::Object^ sender, System::EventArgs^ e) {
		//PROVEEDORES
		hideSubMenu();
		this->panelUsuarios->Visible = false;
		this->panelMantenimiento->Size = System::Drawing::Size(322, 200);
		this->openChildForm(gcnew SistemaSecurityManView::frmMantProveedores);
	}
	private: System::Void btnProductos_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//PRODUCTOS
		this->panelReportes->Visible = false;
		hideSubMenu();
		this->openChildForm(gcnew SistemaSecurityManView::frmMantProducto);
	}
	private: System::Void btnOrden_Click(System::Object^ sender, System::EventArgs^ e) {
		//ORDEN DE PRODUCCION
		hideSubMenu();
		this->panelReportes->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmOrdenProduccion);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelReportes->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmReporteDistritoLocales);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//REPORTE Incidecias x Distrito
		this->panelReportes->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmReporteRobosxDistrito);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//REPORTE BALANCE
		this->panelReportes->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmReportesIngresosxEgresos);
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		//SALIR
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//FACTURA
		hideSubMenu();
		this->panelReportes->Visible = false;
		this->openChildForm(gcnew SistemaSecurityManView::frmTodasFacturas);
	}
};
}
