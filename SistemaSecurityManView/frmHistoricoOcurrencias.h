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
	/// Resumen de frmHistoricoOcurrencias
	/// </summary>
	public ref class frmHistoricoOcurrencias : public System::Windows::Forms::Form
	{
	public:
		frmHistoricoOcurrencias(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmHistoricoOcurrencias(Clientes^ objClientes)
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
		~frmHistoricoOcurrencias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Local;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: Clientes^ objClientesLocal;
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
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Local = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(879, 455);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis compras";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Fecha,
					this->Hora, this->Local, this->Distrito, this->Direccion
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(873, 430);
			this->dataGridView1->TabIndex = 0;
			// 
			// Fecha
			// 
			this->Fecha->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 83;
			// 
			// Hora
			// 
			this->Hora->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Hora->HeaderText = L"Hora";
			this->Hora->Name = L"Hora";
			this->Hora->Width = 72;
			// 
			// Local
			// 
			this->Local->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Local->HeaderText = L"Local";
			this->Local->Name = L"Local";
			this->Local->Width = 77;
			// 
			// Distrito
			// 
			this->Distrito->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 91;
			// 
			// Direccion
			// 
			this->Direccion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Direccion->HeaderText = L"Dirección";
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 110;
			// 
			// frmHistoricoOcurrencias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 479);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmHistoricoOcurrencias";
			this->Text = L"frmHistoricoOcurrencias";
			this->Load += gcnew System::EventHandler(this, &frmHistoricoOcurrencias::frmHistoricoOcurrencias_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<HistoricoOcurrencias^>^ listaEmpresa) {
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaEmpresa->Count; i++) {
			HistoricoOcurrencias^ objEmpresa = listaEmpresa[i];
			array<String^>^ filaGrilla = gcnew array<String^>(8);
			filaGrilla[0] = objEmpresa->getFecha();
			filaGrilla[1] = objEmpresa->getHora();
			filaGrilla[2] = objEmpresa->getLocales()->getNombre();
			filaGrilla[3] = objEmpresa->getLocales()->getDistrito();
			filaGrilla[4] = objEmpresa->getLocales()->getDireccion();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmHistoricoOcurrencias_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		HistoricoOcurrenciasController^ objFacturaModelController = gcnew HistoricoOcurrenciasController();
		List<HistoricoOcurrencias^>^ listafactura = objFacturaModelController->BuscarListaHistoricoOcurrenciasxClientes(objClientesLocal->getIdentificacion());
		mostrarGrilla(listafactura);
	}
};
}
