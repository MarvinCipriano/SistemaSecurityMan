#pragma once
#include "frmInfoBasico.h"
#include "frmInfoPremium.h"
#include "frmDetalleCompraCliente.h"

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
	/// Resumen de frmComprar
	/// </summary>
	public ref class frmComprar : public System::Windows::Forms::Form
	{
	public:
		frmComprar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprar(Tipo_Producto^ objTipo)
		{
			InitializeComponent();
			this->objTipoLocal1 = objTipo;
			this->objTipoLocal2 = objTipo;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprar(Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClientesLocal = objClientes;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprar(CarritoCompra^ objCarrito)
		{
			InitializeComponent();
			this->objCarritolocal1 = objCarrito;
			this->objCarritolocal2 = objCarrito;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComprar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textcantbasico;
	private: System::Windows::Forms::TextBox^ textcantpremium;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button_Limpiar;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_Carrito;
	private: System::Windows::Forms::TextBox^ textunid;

	private: System::Windows::Forms::Button^ Button_Basico;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Button_Premium;
	private: System::Windows::Forms::TextBox^ textid;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_Cancelar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textstock;
	private: System::Windows::Forms::TextBox^ textprecio;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button_Comprar;
	private: System::Windows::Forms::Panel^ panel1;
	//
	private: Tipo_Producto^ objTipoLocal1;
	private: Tipo_Producto^ objTipoLocal2;
	private: Producto^ objProductLocal;
	private: CarritoCompra^ objCarritolocal1;
	private: CarritoCompra^ objCarritolocal2;
	private: Clientes^ objClientesLocal;
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textcantbasico = (gcnew System::Windows::Forms::TextBox());
			this->textcantpremium = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_Limpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_Carrito = (gcnew System::Windows::Forms::Button());
			this->textunid = (gcnew System::Windows::Forms::TextBox());
			this->Button_Basico = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Button_Premium = (gcnew System::Windows::Forms::Button());
			this->textid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textstock = (gcnew System::Windows::Forms::TextBox());
			this->textprecio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_Comprar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textcantbasico);
			this->groupBox3->Controls->Add(this->textcantpremium);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->button_Limpiar);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox3->Location = System::Drawing::Point(735, 14);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(287, 214);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Carrito de compra";
			// 
			// textcantbasico
			// 
			this->textcantbasico->Enabled = false;
			this->textcantbasico->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textcantbasico->Location = System::Drawing::Point(171, 67);
			this->textcantbasico->Name = L"textcantbasico";
			this->textcantbasico->Size = System::Drawing::Size(87, 26);
			this->textcantbasico->TabIndex = 17;
			// 
			// textcantpremium
			// 
			this->textcantpremium->Enabled = false;
			this->textcantpremium->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textcantpremium->Location = System::Drawing::Point(171, 106);
			this->textcantpremium->Name = L"textcantpremium";
			this->textcantpremium->Size = System::Drawing::Size(87, 26);
			this->textcantpremium->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 67);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Básico:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(38, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Premium:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->Location = System::Drawing::Point(175, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Unidades";
			// 
			// button_Limpiar
			// 
			this->button_Limpiar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Limpiar->Location = System::Drawing::Point(24, 150);
			this->button_Limpiar->Name = L"button_Limpiar";
			this->button_Limpiar->Size = System::Drawing::Size(247, 45);
			this->button_Limpiar->TabIndex = 12;
			this->button_Limpiar->Text = L"Limpiar carrito";
			this->button_Limpiar->UseVisualStyleBackColor = true;
			this->button_Limpiar->Click += gcnew System::EventHandler(this, &frmComprar::button_Limpiar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button_Carrito);
			this->groupBox2->Controls->Add(this->textunid);
			this->groupBox2->Controls->Add(this->Button_Basico);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->Button_Premium);
			this->groupBox2->Controls->Add(this->textid);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(371, 188);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(348, 369);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informacion de Compra";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmComprar::groupBox2_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->Location = System::Drawing::Point(33, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Tipo:";
			// 
			// button_Carrito
			// 
			this->button_Carrito->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Carrito->Location = System::Drawing::Point(48, 269);
			this->button_Carrito->Name = L"button_Carrito";
			this->button_Carrito->Size = System::Drawing::Size(241, 58);
			this->button_Carrito->TabIndex = 11;
			this->button_Carrito->Text = L"Agregar al carrito";
			this->button_Carrito->UseVisualStyleBackColor = true;
			this->button_Carrito->Click += gcnew System::EventHandler(this, &frmComprar::button_Carrito_Click);
			// 
			// textunid
			// 
			this->textunid->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textunid->Location = System::Drawing::Point(133, 202);
			this->textunid->Name = L"textunid";
			this->textunid->Size = System::Drawing::Size(140, 26);
			this->textunid->TabIndex = 9;
			// 
			// Button_Basico
			// 
			this->Button_Basico->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Button_Basico->Location = System::Drawing::Point(133, 107);
			this->Button_Basico->Name = L"Button_Basico";
			this->Button_Basico->Size = System::Drawing::Size(140, 29);
			this->Button_Basico->TabIndex = 0;
			this->Button_Basico->Text = L"Basico";
			this->Button_Basico->UseVisualStyleBackColor = true;
			this->Button_Basico->Click += gcnew System::EventHandler(this, &frmComprar::Button_Basico_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->Location = System::Drawing::Point(33, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Unidades:";
			// 
			// Button_Premium
			// 
			this->Button_Premium->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Button_Premium->Location = System::Drawing::Point(133, 142);
			this->Button_Premium->Name = L"Button_Premium";
			this->Button_Premium->Size = System::Drawing::Size(142, 29);
			this->Button_Premium->TabIndex = 1;
			this->Button_Premium->Text = L"Premium";
			this->Button_Premium->UseVisualStyleBackColor = true;
			this->Button_Premium->Click += gcnew System::EventHandler(this, &frmComprar::Button_Premium_Click);
			// 
			// textid
			// 
			this->textid->Enabled = false;
			this->textid->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textid->Location = System::Drawing::Point(133, 50);
			this->textid->Name = L"textid";
			this->textid->Size = System::Drawing::Size(140, 26);
			this->textid->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->Location = System::Drawing::Point(33, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"DNI o RUC:";
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Cancelar->Location = System::Drawing::Point(735, 492);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(287, 65);
			this->button_Cancelar->TabIndex = 15;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &frmComprar::button_Cancelar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textstock);
			this->groupBox1->Controls->Add(this->textprecio);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(371, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(348, 168);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Informacion del Producto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->Location = System::Drawing::Point(33, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Precio:";
			// 
			// textstock
			// 
			this->textstock->Enabled = false;
			this->textstock->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textstock->Location = System::Drawing::Point(147, 100);
			this->textstock->Name = L"textstock";
			this->textstock->Size = System::Drawing::Size(159, 26);
			this->textstock->TabIndex = 10;
			// 
			// textprecio
			// 
			this->textprecio->Enabled = false;
			this->textprecio->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textprecio->Location = System::Drawing::Point(147, 57);
			this->textprecio->Name = L"textprecio";
			this->textprecio->Size = System::Drawing::Size(159, 26);
			this->textprecio->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->Location = System::Drawing::Point(33, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Stock:";
			// 
			// button_Comprar
			// 
			this->button_Comprar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Comprar->Location = System::Drawing::Point(735, 421);
			this->button_Comprar->Name = L"button_Comprar";
			this->button_Comprar->Size = System::Drawing::Size(287, 65);
			this->button_Comprar->TabIndex = 14;
			this->button_Comprar->Text = L"Comprar ahora";
			this->button_Comprar->UseVisualStyleBackColor = true;
			this->button_Comprar->Click += gcnew System::EventHandler(this, &frmComprar::button_Comprar_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(23, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(329, 543);
			this->panel1->TabIndex = 13;
			// 
			// frmComprar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_Comprar);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmComprar";
			this->Text = L"frmComprar";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmComprar::frmComprar_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmComprar::frmComprar_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	int p = 0;
	int b = 0;
	int x = 0;
	template <class T>
	void AbrirPanel(T FormHijo)
	{
		if (this->panel1->Controls->Count > 0)
			this->panel1->Controls->RemoveAt(0);
		FormHijo->TopLevel = false;
		FormHijo->Dock = DockStyle::Fill;
		//FormHijo->StartPosition = FormStartPosition::CenterScreen;
		this->panel1->Controls->Add(FormHijo);
		this->panel1->Tag = FormHijo;
		FormHijo->Show();
	}
	private: System::Void Button_Premium_Click(System::Object^ sender, System::EventArgs^ e) {
		//PREMIUM
		this->AbrirPanel(gcnew SistemaSecurityManView::frmInfoPremium);
		String^ Nombre = "Premium";
		Tipo_ProductoController^ objTipoProductController = gcnew Tipo_ProductoController();
		objTipoLocal1 = objTipoProductController->BuscarUnTipo_ProductoxNombre(Nombre);

		textprecio->Clear();
		this->textprecio->Text = Convert::ToString(this->objTipoLocal1->getPrecio());
		//STOCK
		ProductoController^ objProductController = gcnew ProductoController();
		int Stock = objProductController->ContarProductos(Nombre);
		textstock->Clear();
		this->textstock->Text = Convert::ToString(Stock);

		//DOY COLOR
		Button_Premium->BackColor = Color::Gray;
		Button_Basico->BackColor = System::Drawing::SystemColors::Control;
	}
	private: System::Void frmComprar_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->AbrirPanel(gcnew SistemaSecurityManView::frmInfoBasico);
		String^ Nombre = "Básico";

		this->textcantbasico->Text = "0";
		this->textcantpremium->Text = "0";

		Tipo_ProductoController^ objTipoProductController = gcnew Tipo_ProductoController();
		objTipoLocal1 = objTipoProductController->BuscarUnTipo_ProductoxNombre(Nombre);

		textprecio->Clear();
		this->textprecio->Text = Convert::ToString(this->objTipoLocal1->getPrecio());
		//STOCK
		ProductoController^ objProductController = gcnew ProductoController();
		int Stock = objProductController->ContarProductos(Nombre);
		textstock->Clear();
		this->textstock->Text = Convert::ToString(Stock);

		//MOSTRAR IDENTIFICACION
		String^ DNIRUC = objClientesLocal->getIdentificacion();
		this->textid->Text = DNIRUC;

		Button_Basico->BackColor = Color::Gray;
	}
	private: System::Void Button_Basico_Click(System::Object^ sender, System::EventArgs^ e) {
		//BASICO
		this->AbrirPanel(gcnew SistemaSecurityManView::frmInfoBasico);
		String^ Nombre = "Básico";

		Tipo_ProductoController^ objTipoProductController = gcnew Tipo_ProductoController();
		objTipoLocal1 = objTipoProductController->BuscarUnTipo_ProductoxNombre(Nombre);

		textprecio->Clear();
		this->textprecio->Text = Convert::ToString(this->objTipoLocal1->getPrecio());
		//STOCK
		ProductoController^ objProductController = gcnew ProductoController();
		int Stock = objProductController->ContarProductos(Nombre);
		textstock->Clear();
		this->textstock->Text = Convert::ToString(Stock);

		//DOY COLOR
		Button_Premium->BackColor = System::Drawing::SystemColors::Control;
		Button_Basico->BackColor = Color::Gray;
	}
	private: System::Void button_Carrito_Click(System::Object^ sender, System::EventArgs^ e) {
		//AGREGAR AL CARRITO
		String^ Premium = "Premium";
		String^ Basico = "Básico";

		CarritoController^ objCarritoController1 = gcnew CarritoController();
		CarritoController^ objCarritoController2 = gcnew CarritoController();

		Tipo_ProductoController^ objTipoProductController1 = gcnew Tipo_ProductoController();
		objTipoLocal1 = objTipoProductController1->BuscarUnTipo_ProductoxNombre(Premium);
		Tipo_ProductoController^ objTipoProductController2 = gcnew Tipo_ProductoController();
		objTipoLocal2 = objTipoProductController2->BuscarUnTipo_ProductoxNombre(Basico);

		//COMPRAR
		if (this->textunid->Text == "") {
			MessageBox::Show("Ingrese una cantidad de productos.");
		}
		else {
			int stock = Convert::ToInt32(this->textstock->Text);
			int unidades = Convert::ToInt32(this->textunid->Text);

			if (unidades > stock) {
				MessageBox::Show("El número de unidades seleccionadas supera el stock disponible");
			}
			else {
				//AGREGAR PREMIUM
				if (Button_Basico->BackColor == Color::Gray && b == 0 && x < 2) {
					objCarritoController2->RegistrarCarrito(objTipoLocal2, Convert::ToInt32(this->textunid->Text), objTipoLocal2->getPrecio() * Convert::ToInt32(this->textunid->Text));
					objCarritolocal2 = objCarritoController2->BuscarUnCarritoCompraxTipo(Basico);
					this->textcantbasico->Text = Convert::ToString(this->objCarritolocal2->getUnidades());
					textunid->Clear();
					b = 1;
					x++;
				}
				//AGREGAR BASICO
				else if (Button_Premium->BackColor == Color::Gray && p == 0 && x < 2) {
					objCarritoController1->RegistrarCarrito(objTipoLocal1, Convert::ToInt32(this->textunid->Text), objTipoLocal1->getPrecio() * Convert::ToInt32(this->textunid->Text));
					objCarritolocal1 = objCarritoController1->BuscarUnCarritoCompraxTipo(Premium);
					this->textcantpremium->Text = Convert::ToString(this->objCarritolocal1->getUnidades());
					textunid->Clear();
					p = 1;
					x++;
				}
				else if (b == 1 && x != 2) {
					MessageBox::Show("Ya hay dispositivos de tipo Básico en el carrito.");
					textunid->Clear();
				}
				else if (p == 1 && x != 2) {
					MessageBox::Show("Ya hay dispositivos de tipo Premium en el carrito.");
					textunid->Clear();
				}
				else if (x == 2) {
					MessageBox::Show("El carrito ya está lleno.");
					textunid->Clear();
				}
			}
		}
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		//LIMPIAR CARRITO
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();

		this->textcantbasico->Text = "0";
		this->textcantpremium->Text = "0";

		p = 0;
		b = 0;
		x = 0;
	}
	private: System::Void button_Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		CarritoController^ objCarritoController = gcnew CarritoController();
		objCarritoController->LimpiarCarrito();

		this->textcantbasico->Text = "0";
		this->textcantpremium->Text = "0";

		p = 0;
		b = 0;
		x = 0;
		this->Close();
	}
private: System::Void button_Comprar_Click(System::Object^ sender, System::EventArgs^ e) {
	//COMPRAR AHORA
	if (this->textcantbasico->Text != "" || this->textcantpremium->Text != "") {
		frmDetalleCompraCliente^ ventanaNuevoDetalleCompraCliente = gcnew frmDetalleCompraCliente(objClientesLocal);
		ventanaNuevoDetalleCompraCliente->ShowDialog();
	}
	else {
		MessageBox::Show("El carrito de compras está vacío.");
	}
	this->textcantbasico->Text = "0";
	this->textcantpremium->Text = "0";

	p = 0;
	b = 0;
	x = 0;
}
private: System::Void frmComprar_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//CERRAR
	CarritoController^ objCarritoController = gcnew CarritoController();
	objCarritoController->LimpiarCarrito();

	this->textcantbasico->Text = "0";
	this->textcantpremium->Text = "0";

	p = 0;
	b = 0;
	x = 0;
}
};
}
