#pragma once
#include "frmFactura.h"
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
	/// Resumen de frmTodasFacturas
	/// </summary>
	public ref class frmTodasFacturas : public System::Windows::Forms::Form
	{
	public:
		frmTodasFacturas(void)
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
		~frmTodasFacturas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Factura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Compra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Factura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Compra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(439, 534);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 26);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ver Factura";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmTodasFacturas::button2_Click_1);
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
			this->groupBox1->Size = System::Drawing::Size(1021, 516);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis compras";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Factura,
					this->Fecha, this->Compra, this->Cliente, this->ID, this->Direccion, this->Distrito, this->Total
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1015, 491);
			this->dataGridView1->TabIndex = 0;
			// 
			// Factura
			// 
			this->Factura->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Factura->HeaderText = L"N°Factura";
			this->Factura->Name = L"Factura";
			this->Factura->Width = 114;
			// 
			// Fecha
			// 
			this->Fecha->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 83;
			// 
			// Compra
			// 
			this->Compra->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Compra->HeaderText = L"N°Compra";
			this->Compra->Name = L"Compra";
			this->Compra->Width = 114;
			// 
			// Cliente
			// 
			this->Cliente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Cliente->HeaderText = L"Cliente";
			this->Cliente->Name = L"Cliente";
			this->Cliente->Width = 89;
			// 
			// ID
			// 
			this->ID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 50;
			// 
			// Direccion
			// 
			this->Direccion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Direccion->HeaderText = L"Dirección";
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 110;
			// 
			// Distrito
			// 
			this->Distrito->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 91;
			// 
			// Total
			// 
			this->Total->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->Width = 73;
			// 
			// frmTodasFacturas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 572);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmTodasFacturas";
			this->Text = L"frmTodasFacturas";
			this->Load += gcnew System::EventHandler(this, &frmTodasFacturas::frmTodasFacturas_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<FacturaModel^>^ listaEmpresa) {
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaEmpresa->Count; i++) {
			FacturaModel^ objEmpresa = listaEmpresa[i];
			array<String^>^ filaGrilla = gcnew array<String^>(8);
			filaGrilla[0] = Convert::ToString(objEmpresa->getNumFactura());
			filaGrilla[1] = objEmpresa->getFecha();
			filaGrilla[2] = Convert::ToString(objEmpresa->getNumCompra());
			filaGrilla[3] = objEmpresa->getNombreCliente();
			filaGrilla[4] = objEmpresa->getID();
			filaGrilla[5] = objEmpresa->getDireccion();
			filaGrilla[6] = objEmpresa->getDistrito();
			filaGrilla[7] = Convert::ToString(objEmpresa->getTotal());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmTodasFacturas_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		FacturaModelController^ objFacturaModelController = gcnew FacturaModelController();
		List<FacturaModel^>^ listafactura = objFacturaModelController->BuscarFacturaTodas();
		mostrarGrilla(listafactura);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ factura = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//--
			FacturaModelController^ objFacturaModelController = gcnew FacturaModelController();
			FacturaModel^ objFactura = objFacturaModelController->BuscarUnFacturaxCodigo(Convert::ToInt32(factura));
			//--
			frmFactura^ ventanaFactura = gcnew frmFactura(objFactura);
			ventanaFactura->ShowDialog();
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ factura = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		//--
		FacturaModelController^ objFacturaModelController = gcnew FacturaModelController();
		FacturaModel^ objFactura = objFacturaModelController->BuscarUnFacturaxCodigo(Convert::ToInt32(factura));
		//--
		frmFactura^ ventanaFactura = gcnew frmFactura(objFactura);
		ventanaFactura->ShowDialog();
	}
	else {
		MessageBox::Show("Debe seleccionar una fila");
	}
}
};
}
