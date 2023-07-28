#pragma once
#include "frmEditarTipoProductos.h"
#include "frmVerComponentes_Tipo.h"

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
	/// Resumen de frmMantTipoProductos
	/// </summary>
	public ref class frmMantTipoProductos : public System::Windows::Forms::Form
	{
	public:
		frmMantTipoProductos(void)
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
		~frmMantTipoProductos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Componentes;
	protected:
	private: System::Windows::Forms::Button^ Editar;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Caracteristicas;

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
			this->Componentes = (gcnew System::Windows::Forms::Button());
			this->Editar = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Caracteristicas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Componentes
			// 
			this->Componentes->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Componentes->Location = System::Drawing::Point(460, 534);
			this->Componentes->Name = L"Componentes";
			this->Componentes->Size = System::Drawing::Size(125, 26);
			this->Componentes->TabIndex = 25;
			this->Componentes->Text = L"Componentes";
			this->Componentes->UseVisualStyleBackColor = true;
			this->Componentes->Click += gcnew System::EventHandler(this, &frmMantTipoProductos::Componentes_Click_1);
			// 
			// Editar
			// 
			this->Editar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Editar->Location = System::Drawing::Point(306, 534);
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(125, 26);
			this->Editar->TabIndex = 24;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmMantTipoProductos::Editar_Click_1);
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(611, 534);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(125, 26);
			this->Cancelar->TabIndex = 23;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmMantTipoProductos::Cancelar_Click_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(129, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(795, 416);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Tipo de producto";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Código,
					this->Nombre, this->Precio, this->Caracteristicas
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(789, 391);
			this->dataGridView1->TabIndex = 0;
			// 
			// Código
			// 
			this->Código->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Visible = false;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// Precio
			// 
			this->Precio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->Width = 85;
			// 
			// Caracteristicas
			// 
			this->Caracteristicas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Caracteristicas->HeaderText = L"Caracteristicas";
			this->Caracteristicas->Name = L"Caracteristicas";
			this->Caracteristicas->Width = 157;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(129, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(795, 94);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de tipo de producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(126, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre:";
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(573, 39);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(229, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// frmMantTipoProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->Componentes);
			this->Controls->Add(this->Editar);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMantTipoProductos";
			this->Text = L"frmMantTipoProductos";
			this->Load += gcnew System::EventHandler(this, &frmMantTipoProductos::frmMantTipoProductos_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Tipo_Producto^>^ listaTipo_Producto) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaTipo_Producto->Count; i++) {
			Tipo_Producto^ objTipo_Producto = listaTipo_Producto[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objTipo_Producto->getCodigo());
			filaGrilla[1] = objTipo_Producto->getNombre();
			filaGrilla[2] = Convert::ToString(objTipo_Producto->getPrecio());
			filaGrilla[3] = objTipo_Producto->getCaracteristicas();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ nombre = this->textBox1->Text;
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		List<Tipo_Producto^>^ listaTipo_Producto = objTipo_ProductoController->BuscarListaTipo_ProductoxNombre(nombre);
		/*mostrar*/
		mostrarGrilla(listaTipo_Producto);
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO	
	}
	private: System::Void frmMantTipoProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		List<Tipo_Producto^>^ listaTipo_Producto = objTipo_ProductoController->BuscarTipo_ProductoTodas();
		/*mostrar*/
		mostrarGrilla(listaTipo_Producto);
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR

	}
	private: System::Void Componentes_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//COMPONENTES
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ tipo = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();

			Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
			Tipo_Producto^ objTipo_Producto = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(tipo);

			frmVerComponentes_Tipo^ ventanaComponentesTipos = gcnew frmVerComponentes_Tipo(objTipo_Producto);
			ventanaComponentesTipos->ShowDialog();
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Editar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ Nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();
			//--
			Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
			Tipo_Producto^ objTipoProduct = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre(Nombre);
			//--
			frmEditarTipoProductos^ ventanaEditarTipos = gcnew frmEditarTipoProductos(objTipoProduct);
			ventanaEditarTipos->ShowDialog();

			List<Tipo_Producto^>^ listaTipo_Producto = objTipo_ProductoController->BuscarTipo_ProductoTodas();
			/*mostrar*/
			mostrarGrilla(listaTipo_Producto);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Cancelar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
};
}
