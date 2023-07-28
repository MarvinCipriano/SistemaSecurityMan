#pragma once
#include "frmBuscarProductoSinLocal.h"

namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Reflection;
	//SIEMPRE
	using namespace System::Collections::Generic;
	using namespace SistemaSecurityManController;
	using namespace SistemaSecurityManModel;

	/// <summary>
	/// Resumen de frmProductoxLocal
	/// </summary>
	public ref class frmProductoxLocal : public System::Windows::Forms::Form
	{
	public:
		frmProductoxLocal(void)
		{
			InitializeComponent();
			//this->tipoFigura = 1;
			//this->objColor = Color::Black;
			// this->listaFiguras = gcnew List<Figura^>;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmProductoxLocal(Locales^ objLocales, Clientes^ objClientes)
		{
			InitializeComponent();
			this->objLocalesLocal = objLocales;
			this->objClientesLocal = objClientes;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmProductoxLocal()
		{
			if (components)
			{
				delete components;
			}
		}


	private: Locales^ objLocalesLocal;
	private: Clientes^ objClientesLocal;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: int tipoFigura=1;
	private:Color objColor = Color::Black;
	private: int inicioX;
	private: int inicioY;
	private:List < Figura^>^ listaFiguras = gcnew List<Figura^>;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fabricación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IMEI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N_Serie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Garantia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Propietario;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->groupBox1->Size = System::Drawing::Size(594, 455);
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
			this->dataGridView1->Size = System::Drawing::Size(588, 430);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProductoxLocal::dataGridView1_CellClick);
			// 
			// Código
			// 
			this->Código->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Código->HeaderText = L"Código";
			this->Código->Name = L"Código";
			this->Código->Visible = false;
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
			this->Fabricación->Visible = false;
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
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button1->Location = System::Drawing::Point(59, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Asignar Producto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmProductoxLocal::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button2->Location = System::Drawing::Point(303, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Eliminar Producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmProductoxLocal::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button3->Location = System::Drawing::Point(792, 473);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Agregar Plano";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmProductoxLocal::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(612, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 430);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmProductoxLocal::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmProductoxLocal::panel1_MouseDown);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmProductoxLocal::panel1_MouseUp);
			// 
			// frmProductoxLocal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1177, 506);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmProductoxLocal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ProductoxLocal";
			this->Load += gcnew System::EventHandler(this, &frmProductoxLocal::frmProductoxLocal_Load);
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
	private: System::Void frmProductoxLocal_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		ProductoController^ objProductoController = gcnew ProductoController();
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxLocal(Convert::ToString(objLocalesLocal->getCodigo()));
		
		PlanoLocalController^ objPlanoLocalController = gcnew PlanoLocalController();
		PlanoLocal^ objPlanoLocal = objPlanoLocalController->BuscarUnPlanoLocalxCodigo(objLocalesLocal->getCodigo());
		if (objPlanoLocal != nullptr) {
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(objPlanoLocal->getNombrePlano());
			panel1->BackgroundImage = image;
		}

		mostrarGrilla(listaProducto);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//ASIGNAR PRODUCTO
		Producto^ objProducto = gcnew Producto();
		frmBuscarProductoSinLocal^ ventanaproductos = gcnew frmBuscarProductoSinLocal(objProducto, objClientesLocal);
		ventanaproductos->ShowDialog();

		ProductoController^ objProductoController = gcnew ProductoController();
		
		objProducto = objProductoController->BuscarUnProductoxCodigo(Convert::ToString(objProducto->getCodigo()));
		if (objProducto != nullptr) {
			objProductoController->ActualizarProductoLocal(Convert::ToString(objProducto->getCodigo()), objLocalesLocal);
		}
		/*mostrar grilla*/
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxLocal(Convert::ToString(objLocalesLocal->getCodigo()));
		mostrarGrilla(listaProducto);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR PRODUCTO
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ codigo = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		ProductoController^ objProductoController = gcnew ProductoController();
		Producto^ objProducto = objProductoController->BuscarUnProductoxCodigo(codigo);
		Locales^ objLocalesnull = objLocalesLocal;
		objProductoController->ActualizarProductoLocalEliminar(Convert::ToString(objProducto->getCodigo()), objLocalesnull = nullptr);
		/*mostrar grilla*/
		List<Producto^>^ listaProducto = objProductoController->BuscarListaProductoxLocal(Convert::ToString(objLocalesLocal->getCodigo()));
		mostrarGrilla(listaProducto);
	}
	else {
		MessageBox::Show("Debe seleccionar una fila");
	}
}
	   String^ NombreImagen = "";
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen (*.jpg, *.png, *.bmp)|*.jpg;*.png;*.bmp";
	openFileDialog->Title = "Agregar imagen";

	System::Windows::Forms::DialogResult result = openFileDialog->ShowDialog(this);
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		String^ archivoSeleccionado = openFileDialog->FileName;
		String^ extension = Path::GetExtension(archivoSeleccionado);

		// Validar la extensión de la imagen seleccionada
		if (extension->ToLower() == ".jpg" || extension->ToLower() == ".png" || extension->ToLower() == ".bmp")
		{
			String^ nombreArchivo = Path::GetFileName(archivoSeleccionado);

			// Obtener la ruta absoluta de la carpeta "View" del proyecto
			String^ rutaView = Path::Combine(Application::StartupPath, "..\\..\\SistemaSecurityManView");

			String^ rutaImagenGuardado = Path::Combine(rutaView, nombreArchivo);

			if (File::Exists(rutaImagenGuardado))
			{
				MessageBox::Show("Ya hay una imagen con el mismo nombre.");
			}
			else
			{
				File::Copy(archivoSeleccionado, rutaImagenGuardado);

				NombreImagen = nombreArchivo;
				MessageBox::Show("Imagen agregada correctamente: " + NombreImagen);
				System::Drawing::Image^ image = System::Drawing::Image::FromFile(NombreImagen);

				PlanoLocalController^ objPlanoLocalController = gcnew PlanoLocalController();
				objPlanoLocalController->RegistrarPlanoLocal(objLocalesLocal->getCodigo(), NombreImagen);

				panel1->BackgroundImage = image;
			}
		}
		else
		{
			MessageBox::Show("Agrega una imagen en formato JPG, PNG o BMP.");
		}
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->tipoFigura = 1;
}
	
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Graphics^ objGraphics = e->Graphics;
	for (int i = 0; i < this->listaFiguras->Count; i++) {
		Figura^ objFigura = this->listaFiguras[i];
		if (objFigura->getTipo() == 1) {
			Pen^ objLapiz = gcnew Pen(objFigura->getColor());
			objGraphics->DrawRectangle(objLapiz, objFigura->getInicioX(), objFigura->getInicioY(), objFigura->getFinX() - objFigura->getInicioX(), objFigura->getFinX() - objFigura->getInicioX());
		}
		else {
			Pen^ objLapiz = gcnew Pen(objFigura->getColor());
			objGraphics->DrawEllipse(objLapiz, objFigura->getInicioX(), objFigura->getInicioY(), objFigura->getFinX() - objFigura->getInicioX(), objFigura->getFinX() - objFigura->getInicioX());
		}
	}
}
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->inicioX = e->X;
	this->inicioY = e->Y;
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	int finX = e->X;
	int finY = e->Y;
	Figura^ objFigura = gcnew Figura(this->inicioX, this->inicioY, finX, finY, this->tipoFigura, this->objColor);
	this->listaFiguras->Add(objFigura);
	this->panel1->Invalidate();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
