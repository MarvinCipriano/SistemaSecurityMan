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
	/// Resumen de frmBuscarProductoSinLocal
	/// </summary>
	public ref class frmBuscarProductoSinLocal : public System::Windows::Forms::Form
	{
	public:
		frmBuscarProductoSinLocal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmBuscarProductoSinLocal(Producto^ objProducto, Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClientesLocal = objClientes;
			this->objProductoLocal = objProducto;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBuscarProductoSinLocal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fabricación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IMEI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N_Serie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Garantia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Propietario;
	private: System::Windows::Forms::Button^ button1;
		   //
	private: Clientes^ objClientesLocal;
	private: Producto^ objProductoLocal;
	private: System::Windows::Forms::Button^ button2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IMEI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N_Serie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Garantia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Propietario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(740, 459);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis Productos";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Código,
					this->Tipo, this->Fabricación, this->IMEI, this->N_Serie, this->Garantia, this->Propietario
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(734, 434);
			this->dataGridView1->TabIndex = 1;
			// 
			// Código
			// 
			this->Código->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Width = 89;
			// 
			// Tipo
			// 
			this->Tipo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			this->Tipo->Width = 67;
			// 
			// Fabricación
			// 
			this->Fabricación->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Fabricación->HeaderText = L"Fabricación";
			this->Fabricación->Name = L"Fabricación";
			this->Fabricación->Width = 128;
			// 
			// IMEI
			// 
			this->IMEI->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->IMEI->HeaderText = L"IMEI";
			this->IMEI->Name = L"IMEI";
			this->IMEI->Width = 67;
			// 
			// N_Serie
			// 
			this->N_Serie->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->N_Serie->HeaderText = L"N° Serie";
			this->N_Serie->Name = L"N_Serie";
			this->N_Serie->Width = 97;
			// 
			// Garantia
			// 
			this->Garantia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Garantia->HeaderText = L"Fin Garantía";
			this->Garantia->Name = L"Garantia";
			this->Garantia->Width = 131;
			// 
			// Propietario
			// 
			this->Propietario->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Propietario->DefaultCellStyle = dataGridViewCellStyle1;
			this->Propietario->HeaderText = L"ID Propietario";
			this->Propietario->Name = L"Propietario";
			this->Propietario->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(181, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Seleccionar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarProductoSinLocal::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(412, 477);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 31);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarProductoSinLocal::button2_Click);
			// 
			// frmBuscarProductoSinLocal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 516);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmBuscarProductoSinLocal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Buscar Producto Sin Local";
			this->Load += gcnew System::EventHandler(this, &frmBuscarProductoSinLocal::frmBuscarProductoSinLocal_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Producto^>^ listaProducto) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaProducto->Count; i++) {
			Producto^ objProducto = listaProducto[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(objProducto->getCodigo());
			filaGrilla[1] = Convert::ToString(objProducto->getTipo_Producto()->getNombre());
			filaGrilla[2] = objProducto->getFecha_Creacion();
			filaGrilla[3] = objProducto->getIMEI();
			filaGrilla[4] = objProducto->getN_Serie();
			filaGrilla[5] = objProducto->getTiempo_Garantia();
			if (objProducto->getClientes() == nullptr) {
				filaGrilla[6] = "-";
			}
			else {
				filaGrilla[6] = objProducto->getClientes()->getIdentificacion();
			}
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//SELECCIONAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//--
			//ProductoController^ objProductoController = gcnew ProductoController();
			//Producto^ objProducto = objProductoController->BuscarUnProductoxCodigo(codigo);

			objProductoLocal->setCodigo(Convert::ToInt32(codigo));
			
			this->Close();
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void frmBuscarProductoSinLocal_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxClienteSinLocal(objClientesLocal->getIdentificacion());
		mostrarGrilla(listaProducto);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
};
}
