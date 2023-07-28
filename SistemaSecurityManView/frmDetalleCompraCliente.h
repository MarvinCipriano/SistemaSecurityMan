#pragma once
#include "frmPagar.h"
#include "frmFactura.h"

using namespace System::IO;

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
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Resumen de frmDetalleCompraCliente
	/// </summary>
	public ref class frmDetalleCompraCliente : public System::Windows::Forms::Form
	{
	public:
		frmDetalleCompraCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			printDocument1 = gcnew System::Drawing::Printing::PrintDocument();
			printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &frmDetalleCompraCliente::PrintPageEventHandler);

		}
		frmDetalleCompraCliente(Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClientesLocal = objClientes;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetalleCompraCliente(CarritoCompra^ objCarrito)
		{
			InitializeComponent();
			this->objCarritolocal1 = objCarrito;
			this->objCarritolocal2 = objCarrito;
			this->objCarritolocal1 = objCarrito;
			this->objCarritolocal2 = objCarrito;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetalleCompraCliente(C_Independiente^ objIndependiente)
		{
			InitializeComponent();
			this->objIndependientelocal = objIndependiente;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetalleCompraCliente(C_Empresa^ objEmpresa)
		{
			InitializeComponent();
			this->objEmpresalocal = objEmpresa;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetalleCompraCliente(Costo_Envio^ objCosto_Envio)
		{
			InitializeComponent();
			this->objCosto_Enviolocal = objCosto_Envio;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetalleCompraCliente(List< Producto^>^ listaProducto)
		{
			InitializeComponent();
			this->listProductolocal1 = listaProducto;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmDetalleCompraCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	//
	private: Clientes^ objClientesLocal;

	private: CarritoCompra^ objCarritolocal1;
	private: CarritoCompra^ objCarritolocal2;
	private: CarritoCompra^ objCarritolocal3;
	private: CarritoCompra^ objCarritolocal4;

	private: Costo_Envio^ objCosto_Enviolocal;

	private: C_Independiente^ objIndependientelocal;
	private: C_Empresa^ objEmpresalocal;


	private: List< Producto^>^ listProductolocal1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Unidades;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Monto;

	private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDetalleCompraCliente::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Unidades = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SecurityMan";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox7->Location = System::Drawing::Point(406, 140);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(118, 23);
			this->textBox7->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label10->Location = System::Drawing::Point(287, 141);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 15);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Distrito:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox6->Location = System::Drawing::Point(140, 141);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(118, 23);
			this->textBox6->TabIndex = 38;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmDetalleCompraCliente::textBox6_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label9->Location = System::Drawing::Point(26, 141);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 15);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Dirección:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox5->Location = System::Drawing::Point(406, 39);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(118, 23);
			this->textBox5->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label8->Location = System::Drawing::Point(287, 42);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 15);
			this->label8->TabIndex = 35;
			this->label8->Text = L"DNI o RUC:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(140, 110);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(118, 23);
			this->dateTimePicker1->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label7->Location = System::Drawing::Point(26, 111);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 15);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Fecha de orden:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox4->Location = System::Drawing::Point(406, 110);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(118, 23);
			this->textBox4->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label6->Location = System::Drawing::Point(287, 113);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 15);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Costo de envío:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->button2->Location = System::Drawing::Point(291, 465);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 36);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDetalleCompraCliente::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->button1->Location = System::Drawing::Point(151, 465);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 36);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDetalleCompraCliente::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(227, 405);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 20);
			this->textBox3->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label5->Location = System::Drawing::Point(33, 408);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 15);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Precio Total de la Compra:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox2->Location = System::Drawing::Point(406, 81);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 23);
			this->textBox2->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->label3->Location = System::Drawing::Point(287, 83);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 15);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Tiempo de envío:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F));
			this->textBox1->Location = System::Drawing::Point(140, 81);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 23);
			this->textBox1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 85);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 15);
			this->label2->TabIndex = 21;
			this->label2->Text = L"N° Compra:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(29, 191);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(495, 199);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de componentes:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column2,
					this->Unidades, this->Column3, this->Monto
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 17);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(489, 179);
			this->dataGridView1->TabIndex = 26;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo Producto";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Unidades
			// 
			this->Unidades->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Unidades->HeaderText = L"Unidades";
			this->Unidades->MinimumWidth = 6;
			this->Unidades->Name = L"Unidades";
			this->Unidades->Width = 88;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"P. Uni.";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 65;
			// 
			// Monto
			// 
			this->Monto->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Monto->HeaderText = L"Total";
			this->Monto->MinimumWidth = 6;
			this->Monto->Name = L"Monto";
			this->Monto->Width = 61;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &frmDetalleCompraCliente::ImprimirVenta);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// frmDetalleCompraCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 518);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmDetalleCompraCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Detalle de compra | Cliente";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmDetalleCompraCliente::frmDetalleCompraCliente_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmDetalleCompraCliente::frmDetalleCompraCliente_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarGrilla(List<CarritoCompra^>^ listaCarritoCompra) {
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaCarritoCompra->Count; i++) {
			CarritoCompra^ objCarritoCompra = listaCarritoCompra[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = objCarritoCompra->getTipo()->getNombre();
			filaGrilla[1] = Convert::ToString(objCarritoCompra->getUnidades());
			filaGrilla[2] = Convert::ToString(objCarritoCompra->getTipo()->getPrecio());
			filaGrilla[3] = Convert::ToString(objCarritoCompra->getPrecio_t());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmDetalleCompraCliente_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		FacturaModelController^ objFacturaModelController = gcnew FacturaModelController();
		List<FacturaModel^>^ listaFacturaModel = objFacturaModelController->BuscarFacturaTodas();
		int  Numcompra;
		if (listaFacturaModel->Count == 0) {
			Numcompra = 1;
		}
		else {
			FacturaModel^ objFacturaModelUltimo = listaFacturaModel[listaFacturaModel->Count - 1];
			Numcompra = (Convert::ToInt32(objFacturaModelUltimo->getNumCompra())) + 1;
		}
		//MUESTRA
		this->textBox1->Text = Convert::ToString(Numcompra);

		//DNI o RUC
		String^ Indentificacion = objClientesLocal->getIdentificacion();
		this->textBox5->Text = Indentificacion;

		//CARRITO
		String^ Premium = "Premium";
		String^ Basico = "Básico";
		CarritoController^ objCarritoController1 = gcnew CarritoController();
		objCarritolocal1 = objCarritoController1->BuscarUnCarritoCompraxTipo(Premium);
		CarritoController^ objCarritoController2 = gcnew CarritoController();
		objCarritolocal2 = objCarritoController2->BuscarUnCarritoCompraxTipo(Basico);

		//DATOS DE ENVIO
		if (objCarritolocal1 == nullptr) {
			if (Convert::ToInt64(Indentificacion) < 100000000) {
				C_IndependienteController^ objCIndeController = gcnew C_IndependienteController();
				objIndependientelocal = objCIndeController->BuscarUnC_IndependientexDNI(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objIndependientelocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objIndependientelocal->getDireccion();
				this->textBox7->Text = this->objIndependientelocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal2->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
			else {
				C_EmpresaController^ objCEmpreController = gcnew C_EmpresaController();
				objEmpresalocal = objCEmpreController->BuscarUnC_EmpresaxRUC(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objEmpresalocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objEmpresalocal->getDireccion();
				this->textBox7->Text = this->objEmpresalocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal2->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
		}
		else if (objCarritolocal2 == nullptr) {
			if (Convert::ToInt64(Indentificacion) < 100000000) {
				C_IndependienteController^ objCIndeController = gcnew C_IndependienteController();
				objIndependientelocal = objCIndeController->BuscarUnC_IndependientexDNI(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objIndependientelocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objIndependientelocal->getDireccion();
				this->textBox7->Text = this->objIndependientelocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal1->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
			else {
				C_EmpresaController^ objCEmpreController = gcnew C_EmpresaController();
				objEmpresalocal = objCEmpreController->BuscarUnC_EmpresaxRUC(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objEmpresalocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objEmpresalocal->getDireccion();
				this->textBox7->Text = this->objEmpresalocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal1->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
		}
		else {
			if (Convert::ToInt64(Indentificacion) < 100000000) {
				C_IndependienteController^ objCIndeController = gcnew C_IndependienteController();
				objIndependientelocal = objCIndeController->BuscarUnC_IndependientexDNI(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objIndependientelocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objIndependientelocal->getDireccion();
				this->textBox7->Text = this->objIndependientelocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal1->getPrecio_t() + objCarritolocal2->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
			else {
				C_EmpresaController^ objCEmpreController = gcnew C_EmpresaController();
				objEmpresalocal = objCEmpreController->BuscarUnC_EmpresaxRUC(this->textBox5->Text);
				CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
				objCosto_Enviolocal = objCostoEnvioController->BuscarUnCosto_EnvioxDistrito(objEmpresalocal->getDistrito());
				this->textBox2->Text = this->objCosto_Enviolocal->getTiempo();
				this->textBox4->Text = Convert::ToString(this->objCosto_Enviolocal->getCosto());
				this->textBox6->Text = this->objEmpresalocal->getDireccion();
				this->textBox7->Text = this->objEmpresalocal->getDistrito();

				double Monto_Total = this->objCosto_Enviolocal->getCosto() + objCarritolocal1->getPrecio_t() + objCarritolocal2->getPrecio_t();
				this->textBox3->Text = Convert::ToString(Monto_Total);
			}
		}

		//VENTANA
		CarritoController^ objCarritoController = gcnew CarritoController();
		List<CarritoCompra^>^ listaCarritoCompra = objCarritoController->BuscarCarritoCompraTodas();
		/*mostrar*/
		mostrarGrilla(listaCarritoCompra);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//ACEPTAR
		//PAGAR
		//GUARDAR NUEVO USUARIO
		String^ filePath = "Pago.txt";
		String^ linea = File::ReadAllText("Pago.txt");
		// Elimina el texto
		linea = String::Empty;
		//GUARDAR EL BORRADO
		File::WriteAllText(filePath, linea);
		//GUARDO NUEVO DNI
		File::WriteAllText(filePath, "0");

		frmPagar^ ventanaPagar = gcnew frmPagar();
		ventanaPagar->ShowDialog();

		String^ PagoConfirmado = File::ReadAllText("Pago.txt");


		//CARRITO
		String^ Premium = "Premium";
		String^ Basico = "Básico";
		CarritoController^ objCarritoController3 = gcnew CarritoController();
		objCarritolocal3 = objCarritoController3->BuscarUnCarritoCompraxTipo(Premium);
		CarritoController^ objCarritoController4 = gcnew CarritoController();
		objCarritolocal4 = objCarritoController4->BuscarUnCarritoCompraxTipo(Basico);

		//DNI O RUC
		ProductoController^ objProductoController1 = gcnew ProductoController();
		listProductolocal1 = objProductoController1->BuscarProductoTodas();

		String^ dniruc = this->textBox5->Text;

		int procesoterminado1 = 0;
		int procesoterminado2 = 0;

		if (objCarritolocal3 == nullptr) {
			if (PagoConfirmado == "1") {
				if (objCarritolocal4->getTipo()->getNombre() == "Básico") {
					int cantidadb = objCarritolocal4->getUnidades();
					int cantaregb = 0;
					for (int i = 0; listProductolocal1->Count; i++) {
						Producto^ objProducto = listProductolocal1[i];
						if (objProducto->getClientes() == nullptr && objProducto->getTipo_Producto()->getNombre() == "Básico") {
							objProductoController1->ActualizarProductoCliente(objProducto->getCodigo(), objClientesLocal);
							cantaregb++;
							if (cantaregb == cantidadb) {
								procesoterminado2 = 1;
								procesoterminado1 = 1;
								break;
							}
						}
					}
				}
			}
		}
		else if (objCarritolocal4 == nullptr) {
			if (PagoConfirmado == "1") {
				if (objCarritolocal3->getTipo()->getNombre() == "Premium") {
					int cantidadp = objCarritolocal3->getUnidades();
					int cantaregp = 0;
					for (int i = 0; listProductolocal1->Count; i++) {
						Producto^ objProducto = listProductolocal1[i];
						if (objProducto->getClientes() == nullptr && objProducto->getTipo_Producto()->getNombre() == "Premium") {
							objProductoController1->ActualizarProductoCliente(objProducto->getCodigo(), objClientesLocal);
							cantaregp++;
							if (cantaregp == cantidadp) {
								procesoterminado1 = 1;
								procesoterminado2 = 1;
								break;
							}
						}
					}
				}
			}
		}
		else {
			if (PagoConfirmado == "1") {
				if (objCarritolocal3->getTipo()->getNombre() == "Premium") {
					int cantidadp = objCarritolocal3->getUnidades();
					int cantaregp = 0;
					for (int i = 0; listProductolocal1->Count; i++) {
						Producto^ objProducto = listProductolocal1[i];
						if (objProducto->getClientes() == nullptr && objProducto->getTipo_Producto()->getNombre() == "Premium") {
							objProductoController1->ActualizarProductoCliente(objProducto->getCodigo(), objClientesLocal);
							cantaregp++;
							if (cantaregp == cantidadp) {
								procesoterminado1 = 1;
								break;
							}
						}
					}
				}
				if (objCarritolocal4->getTipo()->getNombre() == "Básico") {
					int cantidadb = objCarritolocal4->getUnidades();
					int cantaregb = 0;
					for (int i = 0; listProductolocal1->Count; i++) {
						Producto^ objProducto = listProductolocal1[i];
						if (objProducto->getClientes() == nullptr && objProducto->getTipo_Producto()->getNombre() == "Básico") {
							objProductoController1->ActualizarProductoCliente(objProducto->getCodigo(), objClientesLocal);
							cantaregb++;
							if (cantaregb == cantidadb) {
								procesoterminado2 = 1;
								break;
							}
						}
					}
				}
			}
		}
		

		if (procesoterminado1 == 1 && procesoterminado2 == 1) {
			//GUARDAR NUEVO USUARIO
			String^ filePath2 = "Pago.txt";
			String^ linea2 = File::ReadAllText("Pago.txt");
			// Elimina el texto
			linea2 = String::Empty;
			//GUARDAR EL BORRADO
			File::WriteAllText(filePath2, linea2);
			//GUARDO NUEVO DNI
			File::WriteAllText(filePath2, "0");

			//GUARDAR FACTURA
			FacturaModelController^ objFacturaModelController = gcnew FacturaModelController();
			//Inicializas el obj
			FacturaModel^ objFactura = gcnew FacturaModel();
			//NUMERO FACTURA
			List<FacturaModel^>^ listaFacturaModel = objFacturaModelController->BuscarFacturaTodas();
			int  NumFactura;
			if (listaFacturaModel->Count == 0) {
				NumFactura = 1;
				objFactura->setNumFactura(NumFactura);
			}
			else {
				FacturaModel^ objFacturaModelUltimo = listaFacturaModel[listaFacturaModel->Count - 1];
				NumFactura = (Convert::ToInt32(objFacturaModelUltimo->getNumFactura())) + 1;
				objFactura->setNumFactura(NumFactura);
			}
			//FECHA
			String^ Fecha = this->dateTimePicker1->Text;
			objFactura->setFecha(Fecha);
			//NUMERO COMPRA
			int NumCompra = Convert::ToInt32(this->textBox1->Text);
			objFactura->setNumCompra(NumCompra);
			//Nombre
			String^ Nombre;
			//DNI o RUC
			String^ Indentificacion = this->textBox5->Text;
			objFactura->setID(Indentificacion);
			//DATOS DE ENVIO
			if (Convert::ToInt64(Indentificacion) < 100000000) {
				C_IndependienteController^ objCIndeController = gcnew C_IndependienteController();
				C_Independiente^ objIndependientefactura= objCIndeController->BuscarUnC_IndependientexDNI(Indentificacion);
				Nombre = (objIndependientefactura->getNombre() + " " + objIndependientefactura->getApellido());
				objFactura->setNombreCliente(Nombre);
			}
			else {
				C_EmpresaController^ objCEmpreController = gcnew C_EmpresaController();
				C_Empresa^ objEmpresafactura = objCEmpreController->BuscarUnC_EmpresaxRUC(Indentificacion);
				Nombre = (objEmpresafactura->getNombre());
				objFactura->setNombreCliente(Nombre);
			}
			//DIRECCION
			String^ Direccion = this->textBox6->Text;
			objFactura->setDireccion(Direccion);
			//DISTRITO
			String^ Distrito = this->textBox7->Text;
			objFactura->setDistrito(Distrito);
			//COSTO ENVIO
			double CostoEnvio = Convert::ToDouble(this->textBox4->Text);
			objFactura->setCostoEnvio(CostoEnvio);
			//TOTAL
			double Total = Convert::ToDouble(this->textBox3->Text);
			objFactura->setTotal(Total);
			 
			objFacturaModelController->RegistrarFactura(NumFactura, Fecha, NumCompra, Nombre, Indentificacion, Direccion, Distrito, Convert::ToDecimal(CostoEnvio), Convert::ToDecimal(Total));
			
			//limpiar carrito
			CarritoController^ objCarritoController = gcnew CarritoController();
			List<CarritoCompra^>^ ListaCarritotxt = objCarritoController->BuscarCarritoCompraTodas();

			for (int m = 0; m < ListaCarritotxt->Count; m++) {
				CarritoFacturaClienteController^ objCarritoFacturaClienteController = gcnew CarritoFacturaClienteController();
				objCarritoFacturaClienteController->RegistrarCarrito(ListaCarritotxt[m]->getTipo()->getNombre(), ListaCarritotxt[m]->getUnidades(), ListaCarritotxt[m]->getTipo()->getPrecio(), ListaCarritotxt[m]->getPrecio_t(), NumFactura);
			}


			objCarritoController->LimpiarCarrito();

			
			//ABRIR FACTURA
			frmFactura^ ventanaFactura = gcnew frmFactura(objFactura);
			ventanaFactura->ShowDialog();
			
			//REPORTE
			Balance^ objBalance = gcnew Balance();
			BalanceController^ objBalanceController = gcnew BalanceController();
			objBalance = objBalanceController->BuscarBalance();

			double ingresoantes = objBalance->getIngresos();

			double ingresodespues = ingresoantes + Total;

			objBalanceController->ActualizarIngresos(ingresodespues);

			this->Close();
		}
	}

	private:void PrintPageEventHandler(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
	{
		// Aquí puedes dibujar el contenido que deseas imprimir utilizando el objeto Graphics proporcionado por PrintPageEventArgs
		// Por ejemplo, puedes dibujar los controles de tu formulario llamando a sus métodos DrawToBitmap o PrintToScreen.
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//REGRESAR
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();
		this->Close();
	}
	private: System::Void frmDetalleCompraCliente_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		//LIMPIAR CARRITO
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();
	}
	private: System::Void ImprimirVenta(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
