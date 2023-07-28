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
	/// Resumen de frmComprarComponentes
	/// </summary>
	public ref class frmComprarComponentes : public System::Windows::Forms::Form
	{
	public:
		frmComprarComponentes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprarComponentes(Clientes^ objClientes, Proveedores^ objProveedores)
		{
			InitializeComponent();
			this->objClientesLocal = objClientes;
			this->objProveedoresLocal = objProveedores;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComprarComponentes()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Clientes^ objClientesLocal;
	private: Proveedores^ objProveedoresLocal;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ Buscar;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Unidades;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ preciocarro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::Button^ Comprar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Componente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::Label^ Compo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Componente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Unidades = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->preciocarro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Comprar = (gcnew System::Windows::Forms::Button());
			this->Compo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(339, 276);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de componentes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Codigo,
					this->Proveedor, this->Componente, this->Precio, this->Stock
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(327, 213);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmComprarComponentes::dataGridView1_CellClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->Name = L"Codigo";
			this->Codigo->Visible = false;
			// 
			// Proveedor
			// 
			this->Proveedor->HeaderText = L"Proveedor";
			this->Proveedor->Name = L"Proveedor";
			this->Proveedor->Visible = false;
			// 
			// Componente
			// 
			this->Componente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Componente->HeaderText = L"Componente";
			this->Componente->Name = L"Componente";
			this->Componente->Width = 125;
			// 
			// Precio
			// 
			this->Precio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->Width = 81;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->Width = 75;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 25);
			this->textBox1->TabIndex = 4;
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(217, 25);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(116, 26);
			this->Buscar->TabIndex = 3;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmComprarComponentes::Buscar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(357, 178);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(490, 326);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Carrito";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->Unidades, this->preciocarro, this->Total
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(484, 302);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Componente";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// Unidades
			// 
			this->Unidades->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Unidades->HeaderText = L"Unidades";
			this->Unidades->Name = L"Unidades";
			this->Unidades->Width = 101;
			// 
			// preciocarro
			// 
			this->preciocarro->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->preciocarro->HeaderText = L"Precio U.";
			this->preciocarro->Name = L"preciocarro";
			this->preciocarro->Width = 101;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(353, 510);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(241, 35);
			this->Cancelar->TabIndex = 7;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmComprarComponentes::Cancelar_Click);
			// 
			// Comprar
			// 
			this->Comprar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Comprar->Location = System::Drawing::Point(603, 510);
			this->Comprar->Name = L"Comprar";
			this->Comprar->Size = System::Drawing::Size(244, 35);
			this->Comprar->TabIndex = 8;
			this->Comprar->Text = L"Comprar";
			this->Comprar->UseVisualStyleBackColor = true;
			this->Comprar->Click += gcnew System::EventHandler(this, &frmComprarComponentes::Comprar_Click);
			// 
			// Compo
			// 
			this->Compo->AutoSize = true;
			this->Compo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Compo->Location = System::Drawing::Point(71, 28);
			this->Compo->Name = L"Compo";
			this->Compo->Size = System::Drawing::Size(115, 18);
			this->Compo->TabIndex = 9;
			this->Compo->Text = L"Componente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"---";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(71, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Unidades:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textBox2->Location = System::Drawing::Point(212, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button2->Location = System::Drawing::Point(289, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmComprarComponentes::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button3->Location = System::Drawing::Point(350, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComprarComponentes::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button4->Location = System::Drawing::Point(253, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(223, 35);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Agregar al carrito";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmComprarComponentes::button4_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->Compo);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(360, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(487, 160);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button5->Location = System::Drawing::Point(11, 119);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(223, 35);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Limpiar Carrito";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmComprarComponentes::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 288);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 257);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// frmComprarComponentes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 557);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->Comprar);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmComprarComponentes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Comprar Componentes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmComprarComponentes::frmComprarComponentes_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmComprarComponentes::frmComprarComponentes_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<ProductosProveedores^>^ listaComponentes) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaComponentes->Count; i++) {
			ProductosProveedores^ objComponentes = listaComponentes[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objComponentes->getCodigo());
			filaGrilla[1] = objComponentes->getProveedores()->getNombre();
			filaGrilla[2] = objComponentes->getComponentes()->getNombre();
			filaGrilla[3] = Convert::ToString(objComponentes->getPrecio());
			filaGrilla[4] = Convert::ToString(objComponentes->getStock());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: void mostrarGrilla2(List<CarritoProveedores^>^ listaComponentes) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView2->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaComponentes->Count; i++) {
			CarritoProveedores^ objComponentes = listaComponentes[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = objComponentes->getProductosProveedores()->getComponentes()->getNombre();
			filaGrilla[1] = Convert::ToString(objComponentes->getUnidades());
			filaGrilla[2] = Convert::ToString(objComponentes->getProductosProveedores()->getPrecio());
			filaGrilla[3] = Convert::ToString(objComponentes->getPrecio_t());
			this->dataGridView2->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmComprarComponentes_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		/*unidades*/
		this->textBox2->Text = "0";
		/*motrar productos*/
		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());
		/*mostrar*/
		mostrarGrilla(listaProductosProveedores);
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ componente = this->textBox1->Text;
		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedorxComponente(objProveedoresLocal->getNombre(), componente);
		mostrarGrilla(listaProductosProveedores);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//RESTAR
		if (Convert::ToInt32(this->textBox2->Text) > 0) {
			this->textBox2->Text = Convert::ToString(Convert::ToInt32(this->textBox2->Text)-1);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//SUMAR
		this->textBox2->Text = Convert::ToString(Convert::ToInt32(this->textBox2->Text) + 1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//SELECCIONAR
		/*mostrar nombre de componente*/
		//COMPRAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ componentetext = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
			this->label1->Text = componentetext;
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//AGREGAR CARRITO
		CarritoProveedoresController^ objCarritoProveedoresController = gcnew CarritoProveedoresController();

		if (label1->Text == "---") {
			MessageBox::Show("Seleccione un componente.");
		}
		else {
			if (this->textBox2->Text == "0") {
				MessageBox::Show("Ingrese una cantidad de productos.");
			}
			else {
				String^ Componente = this->label1->Text;
				ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
				ProductosProveedores^ objProductosProveedores = objProductosProveedoresController->BuscarUnProductosProveedoresxProveedorxComponente(objProveedoresLocal->getNombre(), Componente);
				/*stock*/
				int stock = objProductosProveedores->getStock();
				double precio = objProductosProveedores->getPrecio();

				int unidades = Convert::ToInt32(this->textBox2->Text);

				int existe1 = objCarritoProveedoresController->ExisteTecnicoxComponente(Componente);

				if (unidades > stock) {
					MessageBox::Show("El número de unidades seleccionadas supera el stock disponible");
				}
				if (existe1) {
					MessageBox::Show("Ya existe este componente en el carrito");
				}
				else {
					objCarritoProveedoresController->RegistrarCarritoProveedores(objProductosProveedores, unidades, precio * Convert::ToDouble(unidades));
					List<CarritoProveedores^>^ listacarrito = objCarritoProveedoresController->BuscarCarritoProveedoresTodas();
					this->textBox2->Text = "0";
					mostrarGrilla2(listacarrito);
				}
			}
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		CarritoProveedoresController^ objCarritoProveedoresController = gcnew CarritoProveedoresController();
		objCarritoProveedoresController->LimpiarCarritoProveedores();
		this->Close();	
	}
	private: System::Void frmComprarComponentes_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//CERRAR
		CarritoProveedoresController^ objCarritoProveedoresController = gcnew CarritoProveedoresController();
		objCarritoProveedoresController->LimpiarCarritoProveedores();
	}
	private: System::Void Comprar_Click(System::Object^ sender, System::EventArgs^ e) {
		//COMPRAR
		CarritoProveedoresController^ objCarritoProveedoresController = gcnew CarritoProveedoresController();
		List<CarritoProveedores^>^ listacarrito =  objCarritoProveedoresController->BuscarCarritoProveedoresTodas();

		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());

		double Total = 0;

		if (listacarrito->Count > 0) {
			ComponentesController^ objComponentesController = gcnew ComponentesController();

			for (int i = 0; i < listacarrito->Count; i++) {
				objComponentesController->ActualizarComponentesxStock(listacarrito[i]->getProductosProveedores()->getComponentes()->getNombre(), listacarrito[i]->getUnidades());

				ProductosProveedores^ objProductosProveedores = gcnew ProductosProveedores();
				objProductosProveedores = objProductosProveedoresController->BuscarUnProductosProveedoresxProveedorxComponente(objProveedoresLocal->getNombre(), listacarrito[i]->getProductosProveedores()->getComponentes()->getNombre());
				
				objProductosProveedoresController->ActualizarProductosProveedoresTecnico(objProductosProveedores->getCodigo(), listacarrito[i]->getUnidades());

				Total = Total + objProductosProveedores->getPrecio() * listacarrito[i]->getUnidades();
			}

			mostrarGrilla(listaProductosProveedores);
			/*limpiar carro*/
			objCarritoProveedoresController->LimpiarCarritoProveedores();
			mostrarGrilla2(listacarrito);

			this->textBox2->Text = "0";

			MessageBox::Show("Compra exitosa.");

			//REPORTE
			Balance^ objBalance = gcnew Balance();
			BalanceController^ objBalanceController = gcnew BalanceController();
			objBalance = objBalanceController->BuscarBalance();

			double Egresosantes = objBalance->getEgresos();

			double Egresosdespues = Egresosantes + Total;

			objBalanceController->ActualizarEgresos(Egresosdespues);

			this->Close();
		}
		else {
			MessageBox::Show("El carrito está vacio.");
		}

		
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//LIMPIAR CARRITO
	CarritoProveedoresController^ objCarritoProveedoresController = gcnew CarritoProveedoresController();
	objCarritoProveedoresController->LimpiarCarritoProveedores();

	List<CarritoProveedores^>^ listacarrito = objCarritoProveedoresController->BuscarCarritoProveedoresTodas();
	mostrarGrilla2(listacarrito);
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//CELL CLICK
	if (this->dataGridView1->SelectedRows->Count > 0) {

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();

		ComponentesController^ objComponentesController = gcnew ComponentesController();
		Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(nombre);

		this->label1->Text = nombre;

		System::Drawing::Image^ image = System::Drawing::Image::FromFile(objComponentes->getImagen());
		pictureBox1->BackgroundImage = image;

	}
}
};
}
