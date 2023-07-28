#pragma once
#include "frmNuevoComponente.h"
#include "frmEditarComponentes.h"
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
	/// Resumen de frmMantComponente
	/// </summary>
	public ref class frmMantComponente : public System::Windows::Forms::Form
	{
	public:
		frmMantComponente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMantComponente(Componentes_Tipo^ objcomponentes, Tipo_Producto^ objTipo)
		{
			InitializeComponent();
			this->objcomponentesLocal = objcomponentes;
			this->objTipoLocal = objTipo;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMantComponente(Componentes^ objcomponentesProve)
		{
			InitializeComponent();
			this->objcomponentesProveLocal = objcomponentesProve;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantComponente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Utilidad;
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::Button^ Eliminar;
	private: System::Windows::Forms::Button^ Nuevo;
	private: System::Windows::Forms::Button^ Seleccionar;
	//
	private: Componentes_Tipo^ objcomponentesLocal;
	private: Tipo_Producto^ objTipoLocal;
	private: Componentes^ objcomponentesProveLocal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Utilidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->Seleccionar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->groupBox1->Size = System::Drawing::Size(953, 94);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de busqueda de componente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(186, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre:";
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(633, 39);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &frmMantComponente::Buscar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(289, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 25);
			this->textBox1->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(12, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(618, 416);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Resultado de busqueda - Componentes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Nombre,
					this->Utilidad
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(612, 391);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantComponente::dataGridView1_CellClick);
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// Utilidad
			// 
			this->Utilidad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Utilidad->HeaderText = L"Utilidad";
			this->Utilidad->Name = L"Utilidad";
			this->Utilidad->Width = 93;
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Cancelar->Location = System::Drawing::Point(704, 533);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(111, 26);
			this->Cancelar->TabIndex = 13;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmMantComponente::Cancelar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Eliminar->Location = System::Drawing::Point(566, 534);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(111, 26);
			this->Eliminar->TabIndex = 12;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmMantComponente::Eliminar_Click);
			// 
			// Nuevo
			// 
			this->Nuevo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Nuevo->Location = System::Drawing::Point(290, 534);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(111, 26);
			this->Nuevo->TabIndex = 11;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &frmMantComponente::Nuevo_Click);
			// 
			// Seleccionar
			// 
			this->Seleccionar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Seleccionar->Location = System::Drawing::Point(143, 534);
			this->Seleccionar->Name = L"Seleccionar";
			this->Seleccionar->Size = System::Drawing::Size(111, 26);
			this->Seleccionar->TabIndex = 14;
			this->Seleccionar->Text = L"Seleccionar";
			this->Seleccionar->UseVisualStyleBackColor = true;
			this->Seleccionar->Click += gcnew System::EventHandler(this, &frmMantComponente::Seleccionar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(266, 537);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 18);
			this->label1->TabIndex = 15;
			this->label1->Text = L"|";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(636, 134);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(329, 391);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->button1->Location = System::Drawing::Point(425, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 26);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantComponente::button1_Click);
			// 
			// frmMantComponente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 572);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Seleccionar);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmMantComponente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Componente";
			this->Load += gcnew System::EventHandler(this, &frmMantComponente::frmMantComponente_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int m = 0;
	private: void mostrarGrilla(List<Componentes^>^ listaComponentes) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaComponentes->Count; i++) {
			Componentes^ objComponentes = listaComponentes[i];
			array<String^>^ filaGrilla = gcnew array<String^>(2);
			filaGrilla[0] = objComponentes->getNombre();
			filaGrilla[1] = objComponentes->getUtilidad();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		String^ ComponentesBuscar = this->textBox1->Text;
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		List<Componentes^>^ listaComponentes = objComponentesController->BuscarListaComponentesxNombre(ComponentesBuscar);
		/*mostrar*/
		mostrarGrilla(listaComponentes);
	}
	private: System::Void frmMantComponente_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
		/*mostrar*/
		mostrarGrilla(listaComponentes);
	}
	private: System::Void Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		//NUEVO
		frmNuevoComponente^ ventanaNuevoComponente = gcnew frmNuevoComponente();
		ventanaNuevoComponente->ShowDialog();
		ComponentesController^ objComponentesController = gcnew ComponentesController();
		List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
		/*mostrar*/
		mostrarGrilla(listaComponentes);
	}
	private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//ELIMINAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//--
			ComponentesController^ objComponentesController = gcnew ComponentesController();
			objComponentesController->EliminarComponentes(nombre);
			List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
			mostrarGrilla(listaComponentes);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		//objcomponentesLocal->setCodigo(0);
		this->Close();
	}
	private: System::Void Seleccionar_Click(System::Object^ sender, System::EventArgs^ e) {
		//SELECCIONAR
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ Nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			//--
			ComponentesController^ objcomponentesController = gcnew ComponentesController();
			Componentes^ objComponentes = objcomponentesController->BuscarUnComponentesxNombre(Nombre);

			Componentes_TipoController^ objComponentes_TipoController = gcnew Componentes_TipoController();
			List<Componentes_Tipo^>^ listaComponentes_Tipo = objComponentes_TipoController->BuscarComponentes_TipoTodas();

			if (objTipoLocal != nullptr) {
				String^ nombre = objComponentes->getNombre();
				String^ utilidad = objComponentes->getUtilidad();

				int existe = objComponentes_TipoController->ExisteComponentesxNombrexTipo(nombre, objTipoLocal->getNombre());

				if (existe == 0) {
					int cant = listaComponentes_Tipo->Count;

					objcomponentesLocal->setNombre(nombre);
					objcomponentesLocal->setUtilidad(utilidad);

					if (cant == 0) {
						objcomponentesLocal->setCodigo(1);
					}
					else {
						objcomponentesLocal->setCodigo(listaComponentes_Tipo[cant - 1]->getCodigo() + 1);
					}
					this->Close();
				}
				else {
					MessageBox::Show("Ya existe un componente con el mismo nombre.");
				}
			}
			else{
				//////////////////////////////////////////////
				//Para aumentar componentes a los proveedores
				ComponentesController^ objComponentesControllerProve = gcnew ComponentesController();
				Componentes^ objcomponentesprove = objComponentesControllerProve->BuscarUnComponentesxNombre(Nombre);

				this->objcomponentesProveLocal->setNombre(objcomponentesprove->getNombre());
				this->Close();
			}
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//CELL CLICK
		if (this->dataGridView1->SelectedRows->Count > 0) {

			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			String^ nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			ComponentesController^ objComponentesController = gcnew ComponentesController();
			Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(nombre);
			if (objComponentes->getImagen() != "") {
				System::Drawing::Image^ image = System::Drawing::Image::FromFile(objComponentes->getImagen());
				pictureBox1->BackgroundImage = image;
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//EDITAR
		 /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
			String^ nombre = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			ComponentesController^ objComponentesController = gcnew ComponentesController();
			Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(nombre);
			frmEditarComponentes^ ventanaEditarComponentes = gcnew frmEditarComponentes(objComponentes);
			ventanaEditarComponentes->ShowDialog();
			//--
			List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
			/*mostrar*/
			mostrarGrilla(listaComponentes);
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
};
}
