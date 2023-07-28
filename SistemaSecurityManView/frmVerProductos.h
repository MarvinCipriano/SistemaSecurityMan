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
	/// Resumen de frmVerProductos
	/// </summary>
	public ref class frmVerProductos : public System::Windows::Forms::Form
	{
	public:
		frmVerProductos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerProductos(Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClientesLocal = objClientes;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerProductos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fabricación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IMEI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N_Serie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Garantia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Propietario;
	//
	private: Clientes^ objClientesLocal;
	//
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
			this->groupBox1->Size = System::Drawing::Size(1022, 548);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis Productos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmVerProductos::groupBox1_Enter);
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
			this->dataGridView1->Size = System::Drawing::Size(1016, 523);
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
			// frmVerProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmVerProductos";
			this->Text = L"Ver Productos";
			this->Load += gcnew System::EventHandler(this, &frmVerProductos::frmVerProductos_Load);
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
	private: System::Void frmVerProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		/*mostrar grilla*/
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxCliente(objClientesLocal->getIdentificacion());
		mostrarGrilla(listaProducto);
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
