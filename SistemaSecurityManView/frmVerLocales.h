#pragma once
#include "frmNuevoLocal.h"
#include "frmProductoxLocal.h"
#include "frmEditarLocales.h"
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
	/// Resumen de frmVerLocales
	/// </summary>

	public ref class frmVerLocales : public System::Windows::Forms::Form
	{
	public:
		frmVerLocales(void)
		{
			InitializeComponent();
			webBrowser1->ScriptErrorsSuppressed = true;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmVerLocales(Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClienteslocal = objClientes;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerLocales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Productos;
	private: System::Windows::Forms::Button^ Nuevo;
	protected:

	protected:

	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: Clientes^ objClienteslocal;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ubicacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dirección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Editar;
	private: System::Windows::Forms::Button^ button1;









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
			this->Productos = (gcnew System::Windows::Forms::Button());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ubicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dirección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Editar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Productos
			// 
			this->Productos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Productos->Location = System::Drawing::Point(606, 534);
			this->Productos->Name = L"Productos";
			this->Productos->Size = System::Drawing::Size(125, 26);
			this->Productos->TabIndex = 25;
			this->Productos->Text = L"Productos";
			this->Productos->UseVisualStyleBackColor = true;
			this->Productos->Click += gcnew System::EventHandler(this, &frmVerLocales::Productos_Click);
			// 
			// Nuevo
			// 
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(163, 534);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(125, 26);
			this->Nuevo->TabIndex = 24;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmVerLocales::Nuevo_Click);
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(757, 534);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(125, 26);
			this->Cancelar->TabIndex = 23;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmVerLocales::Cancelar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(12, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(557, 416);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Locales";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Código,
					this->Nombre, this->Ubicacion, this->Dirección, this->Distrito
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(551, 391);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmVerLocales::dataGridView1_CellClick);
			// 
			// Código
			// 
			this->Código->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Width = 89;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// Ubicacion
			// 
			this->Ubicacion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Ubicacion->HeaderText = L"Ubicación";
			this->Ubicacion->Name = L"Ubicacion";
			this->Ubicacion->Visible = false;
			// 
			// Dirección
			// 
			this->Dirección->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Dirección->HeaderText = L"Dirección";
			this->Dirección->Name = L"Dirección";
			this->Dirección->Width = 110;
			// 
			// Distrito
			// 
			this->Distrito->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 91;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->Buscar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1022, 94);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de locales";
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
			this->Buscar->Location = System::Drawing::Point(467, 40);
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
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(575, 37);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->ScrollBarsEnabled = false;
			this->webBrowser1->Size = System::Drawing::Size(459, 488);
			this->webBrowser1->TabIndex = 26;
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(575, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(459, 13);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmVerLocales::textBox2_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Red;
			this->pictureBox1->Location = System::Drawing::Point(805, 325);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 2);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Red;
			this->pictureBox2->Location = System::Drawing::Point(809, 321);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(2, 10);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// Editar
			// 
			this->Editar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Editar->Location = System::Drawing::Point(311, 534);
			this->Editar->Name = L"Editar";
			this->Editar->Size = System::Drawing::Size(125, 26);
			this->Editar->TabIndex = 29;
			this->Editar->Text = L"Editar";
			this->Editar->UseVisualStyleBackColor = true;
			this->Editar->Click += gcnew System::EventHandler(this, &frmVerLocales::Editar_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button1->Location = System::Drawing::Point(458, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 26);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerLocales::button1_Click_1);
			// 
			// frmVerLocales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Editar);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->Productos);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmVerLocales";
			this->Text = L"Ver Locales";
			this->Load += gcnew System::EventHandler(this, &frmVerLocales::frmVerLocales_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarGrilla(List<Locales^>^ listaEmpresa) {
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaEmpresa->Count; i++) {
			Locales^ objLocales = listaEmpresa[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objLocales->getCodigo());
			filaGrilla[1] = Convert::ToString(objLocales->getNombre());
			filaGrilla[2] = objLocales->getUbicacion();
			filaGrilla[3] = objLocales->getDireccion();
			filaGrilla[4] = objLocales->getDistrito();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoLocal^ ventanaBuscarTecnicos = gcnew frmNuevoLocal(objClienteslocal);
		ventanaBuscarTecnicos->ShowDialog();
		//VENTANA
		LocalesController^ objLocalesController = gcnew LocalesController();
		List<Locales^>^ listaLocales = objLocalesController->BuscarListaLocalesxClientes(objClienteslocal->getIdentificacion());
		/*mostrar*/
		mostrarGrilla(listaLocales);
	}
	private: System::Void frmVerLocales_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		LocalesController^ objLocalesController = gcnew LocalesController();
		List<Locales^>^ listaLocales = objLocalesController->BuscarListaLocalesxClientes(objClienteslocal->getIdentificacion());
		/*mostrar*/
		mostrarGrilla(listaLocales);

		;
	}
	private: System::Void Productos_Click(System::Object^ sender, System::EventArgs^ e) {
		//PRODUCTOS
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			LocalesController^ objLocalesController = gcnew LocalesController();
			Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(codigo);

			frmProductoxLocal^ ventanaproductos = gcnew frmProductoxLocal(objLocales, objClienteslocal);
			ventanaproductos->ShowDialog();
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//CELL CLICK
		if (this->dataGridView1->SelectedRows->Count > 0) {

			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			LocalesController^ objLocalesController = gcnew LocalesController();
			Locales^ objlocal = objLocalesController->BuscarUnLocalesxCodigo(codigo);

			webBrowser1->Navigate(objlocal->getUbicacion());
		}
	}
	private: System::Void Editar_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			LocalesController^ objLocalesController = gcnew LocalesController();
			Locales^ objLocales = objLocalesController->BuscarUnLocalesxCodigo(codigo);

			frmEditarLocales^ ventanaEditarLocales = gcnew frmEditarLocales(objClienteslocal, objLocales);
			ventanaEditarLocales->ShowDialog();
			//--
			List<Locales^>^ listaLocales = objLocalesController->BuscarListaLocalesxClientes(objClienteslocal->getIdentificacion());
			/*mostrar*/
			mostrarGrilla(listaLocales);

		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			try {
				int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
				String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

				LocalesController^ objLocalesController = gcnew LocalesController();
				objLocalesController->EliminarLocalesxCodigo(Convert::ToInt32(codigo));
				//--
				List<Locales^>^ listaLocales = objLocalesController->BuscarListaLocalesxClientes(objClienteslocal->getIdentificacion());
				/*mostrar*/
				mostrarGrilla(listaLocales);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Elimine los productos que estan asignados al local");
			}
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
};
}
