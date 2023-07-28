#pragma once
#include "frmNuevoProductoProveedor.h"
#include "frmEditarProductoProveedor.h"

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
	/// Resumen de frmVerProductosProveedores
	/// </summary>
	public ref class frmVerProductosProveedores : public System::Windows::Forms::Form
	{
	public:
		frmVerProductosProveedores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerProductosProveedores(Proveedores^ objProveedores)
		{
			InitializeComponent();
			this->objProveedoresLocal = objProveedores;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerProductosProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;

	//
	private: Proveedores^ objProveedoresLocal;
		   //
	private: System::Windows::Forms::Button^ Editar;
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::Button^ Nuevo;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Componente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;








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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Componente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Editar = (gcnew System::Windows::Forms::Button());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 77);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(657, 349);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Codigo,
					this->Proveedor, this->Componente, this->Precio, this->Stock
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 324);
			this->dataGridView1->TabIndex = 0;
			// 
			// Codigo
			// 
			this->Codigo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
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
			this->Componente->Width = 135;
			// 
			// Precio
			// 
			this->Precio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->Width = 85;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->Width = 79;
			// 
			// Editar
			// 
			this->Editar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Editar->Location = System::Drawing::Point(218, 432);
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(105, 26);
			this->Editar->TabIndex = 19;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmVerProductosProveedores::Editar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(356, 432);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(105, 26);
			this->Eliminar->TabIndex = 18;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmVerProductosProveedores::Eliminar_Click);
			// 
			// Nuevo
			// 
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(79, 432);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(105, 26);
			this->Nuevo->TabIndex = 17;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmVerProductosProveedores::Nuevo_Click);
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(492, 432);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(105, 26);
			this->Cancelar->TabIndex = 20;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmVerProductosProveedores::Cancelar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(657, 59);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Criterio de busqueda";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button1->Location = System::Drawing::Point(459, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 26);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerProductosProveedores::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 23;
			// 
			// frmVerProductosProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 465);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Editar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Nuevo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmVerProductosProveedores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Ver Productos de Proveedores";
			this->Load += gcnew System::EventHandler(this, &frmVerProductosProveedores::frmVerProductosProveedores_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
	private: System::Void frmVerProductosProveedores_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->groupBox1->Text = "Productos de " + objProveedoresLocal->getNombre();
		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());
		/*mostrar*/
		mostrarGrilla(listaProductosProveedores);
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		frmNuevoProductoProveedor^ ventanaVerProductos = gcnew frmNuevoProductoProveedor(objProveedoresLocal);
		ventanaVerProductos->ShowDialog();

		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());
		/*mostrar*/
		mostrarGrilla(listaProductosProveedores);
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSelecionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ codigo = this->dataGridView1->Rows[filaSelecionada]->Cells[0]->Value->ToString();
			//--
			ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
			objProductosProveedoresController->EliminarProductosProveedoresxProveedorxComponente(Convert::ToInt32(codigo));
			//--
			List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());
			/*mostrar*/
			mostrarGrilla(listaProductosProveedores);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//
			ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
			ProductosProveedores^ objProductosProveedores = objProductosProveedoresController->BuscarUnProductosProveedoresxCodigo(codigo);
			//
			frmEditarProductoProveedor^ ventanaEditarProducto = gcnew frmEditarProductoProveedor(objProductosProveedores);
			ventanaEditarProducto->ShowDialog();
			//--
			List<ProductosProveedores^>^ listaProductosProveedores = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedor(objProveedoresLocal->getNombre());
			/*mostrar*/
			mostrarGrilla(listaProductosProveedores);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ componente = this->textBox1->Text;
		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaCosto_Envio = objProductosProveedoresController->BuscarListaProductosProveedoresxProveedorxComponente(objProveedoresLocal->getNombre(), componente);
		/*mostrar*/
		mostrarGrilla(listaCosto_Envio);
	}
};
}
