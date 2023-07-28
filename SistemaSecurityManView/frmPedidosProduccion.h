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
	/// Resumen de frmPedidosProduccion
	/// </summary>
	public ref class frmPedidosProduccion : public System::Windows::Forms::Form
	{
	public:
		frmPedidosProduccion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPedidosProduccion(Clientes^ objClientes)
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
		~frmPedidosProduccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancelar;
	private: System::Windows::Forms::Button^ Realizado;
	protected:

	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	//
	private: Clientes^ objClientesLocal;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Buscar;


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
			this->Cancelar = (gcnew System::Windows::Forms::Button());
			this->Realizado = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// Cancelar
			// 
			this->Cancelar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Cancelar->Location = System::Drawing::Point(12, 509);
			this->Cancelar->Margin = System::Windows::Forms::Padding(2);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(659, 52);
			this->Cancelar->TabIndex = 7;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmPedidosProduccion::Cancelar_Click);
			// 
			// Realizado
			// 
			this->Realizado->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Realizado->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->Realizado->Location = System::Drawing::Point(12, 444);
			this->Realizado->Margin = System::Windows::Forms::Padding(2);
			this->Realizado->Name = L"Realizado";
			this->Realizado->Size = System::Drawing::Size(659, 52);
			this->Realizado->TabIndex = 6;
			this->Realizado->Text = L"Realizado";
			this->Realizado->UseVisualStyleBackColor = true;
			this->Realizado->Click += gcnew System::EventHandler(this, &frmPedidosProduccion::Realizado_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 22);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(653, 402);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"N° de producción";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 155;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Alarmas Básicas (Unid)";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 156;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Alarmas Premium (Unid)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 161;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Fecha Limite";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 124;
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
			this->groupBox1->Size = System::Drawing::Size(659, 427);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de Pedidos :";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->Buscar);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(677, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(357, 548);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" Componentes disponibles";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Nombre,
					this->Stock
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 56);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(345, 486);
			this->dataGridView2->TabIndex = 0;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 96;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->Width = 79;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textBox1->Location = System::Drawing::Point(83, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 25);
			this->textBox1->TabIndex = 1;
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->Buscar->Location = System::Drawing::Point(247, 25);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(104, 26);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			// 
			// frmPedidosProduccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Realizado);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPedidosProduccion";
			this->Text = L"frmPedidosProduccion";
			this->Load += gcnew System::EventHandler(this, &frmPedidosProduccion::frmPedidosProduccion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void mostrarGrilla(List<Orden_Produccion^>^ listaOrden) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView1->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaOrden->Count; i++) {
			Orden_Produccion^ objOrden_produccion = listaOrden[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objOrden_produccion->getnumero_produccion());
			filaGrilla[1] = Convert::ToString(objOrden_produccion->getcant_AlarmaBasica());
			filaGrilla[2] = Convert::ToString(objOrden_produccion->getcant_AlarmaPremimum());
			filaGrilla[3] = objOrden_produccion->getFechaLimite();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: void mostrarGrilla2(List<Componentes^>^ listaOrden) {
		//FUNCION PARA MOSTRAR LA TABLA
		this->dataGridView2->Rows->Clear(); //elimino toda la informacion
		for (int i = 0; i < listaOrden->Count; i++) {
			Componentes^ objOrden_produccion = listaOrden[i];
			array<String^>^ filaGrilla = gcnew array<String^>(2);
			filaGrilla[0] = objOrden_produccion->getNombre();
			filaGrilla[1] = Convert::ToString(objOrden_produccion->getStock());
			this->dataGridView2->Rows->Add(filaGrilla);
		}
	}
	private: System::Void frmPedidosProduccion_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		String^ DNItecnico = objClientesLocal->getIdentificacion();
		Orden_ProduccionController^ objOrdenController = gcnew Orden_ProduccionController();
		List<Orden_Produccion^>^ listaOrden = objOrdenController->BuscarListaOrden_ProduccionxTecnico(DNItecnico);
		/*mostrar*/
		mostrarGrilla(listaOrden);

		ComponentesController^ objComponentesController = gcnew ComponentesController();
		List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
		/*mostrar*/
		mostrarGrilla2(listaComponentes);
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Realizado_Click(System::Object^ sender, System::EventArgs^ e) {
		//REALIZADO
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;//0 porque solo se seleciona una fila
			String^ numero_produccion = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

			int cant_Basico = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString());
			int cant_Premium = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString());

			DateTime^ FechaCreacionLarga = DateTime::Now;
			String^ FechaCreacion = FechaCreacionLarga->ToString("dd/MM/yyyy");
			 
			ComponentesController^ objComponentesController = gcnew ComponentesController();
			int haystockpremium = objComponentesController->ExisteSuficiente("Premium", cant_Premium);
			int haystockbasico = objComponentesController->ExisteSuficiente("Básico", cant_Basico);
			int haystock = objComponentesController->ExisteSuficiente2("Premium", cant_Basico, cant_Premium);

			if (haystockbasico == 0 && haystockbasico == 0) {
				MessageBox::Show("No hay suficientes componentes disponibles para realizar esta orden.");
			}
			else if (cant_Basico==0 && haystockpremium == 0) {
				MessageBox::Show("No hay suficientes componentes disponibles para realizar esta orden.");
			}
			else if (cant_Premium==0 && haystockbasico == 0) {
				MessageBox::Show("No hay suficientes componentes disponibles para realizar esta orden.");
			} 
			else if (haystock == 0) {
				MessageBox::Show("No hay suficientes componentes disponibles para realizar esta orden.");
			}
			else {
				for (int i = 0; cant_Basico > i; i++) {

					ProductoController^ ObjProduccionController = gcnew ProductoController();
					List<Producto^>^ listaProducto = ObjProduccionController->BuscarProductoTodas();

					objComponentesController->ActualizarComponentesxProducto("Básico");

					//Codigo de producto
					String^ Codigo;
					if (listaProducto->Count == 0) {
						Codigo = "1";
					}
					else {
						Producto^ objProductoUltimo = listaProducto[listaProducto->Count - 1];
						Codigo = Convert::ToString(Convert::ToInt32(objProductoUltimo->getCodigo()) + 1);;
					}
					Producto^ objProducto = gcnew Producto();
					objProducto->setCodigo(Convert::ToInt32(Codigo));

					//Tipo de producto
					Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
					Tipo_Producto^ objTipo = objTipo_ProductoController->BuscarUnTipo_ProductoxNombre("Básico");
					objProducto->setTipo_Producto(objTipo);

					//Fecha de creacion de producto
					objProducto->setFecha_Creacion(FechaCreacion);

					//IMEI de producto
					Random^ random_imei = gcnew Random();;

					long long minValor = 100000000000000;
					long long maxValor = 999999999999999;
					String^ imei = Convert::ToString((long long)((maxValor - minValor + 1) * random_imei->NextDouble()) + minValor);
					objProducto->setIMEI(imei);

					//N_Serie de producto
					Random^ random_nproducto = gcnew Random();
					int longitud = 7; // Longitud deseada de la cadena aleatoria
					String^ caracteres = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
					String^ cadenaAleatoria = "";
					for (int i = 0; i < longitud; i++) {
						int indice = random_nproducto->Next(0, caracteres->Length);
						cadenaAleatoria += caracteres[indice];
					}
					objProducto->setN_Serie(cadenaAleatoria);

					//Tiempo Garantia de producto
					DateTime^ FechaCreacionAumentada = FechaCreacionLarga->AddYears(2);
					String^ FechaGarantia = FechaCreacionAumentada->ToString("dd/MM/yyyy");
					objProducto->setTiempo_Garantia(FechaGarantia);

					//Agrego el producto
					ProductoController^ objProductoController = gcnew ProductoController();
					objProductoController->AregarProducto(objProducto);
				}

				for (int i = 0; cant_Premium > i; i++) {

					ProductoController^ ObjProduccionController = gcnew ProductoController();
					List<Producto^>^ listaProducto = ObjProduccionController->BuscarProductoTodas();

					objComponentesController->ActualizarComponentesxProducto("Premium");

					//Codigo de producto
					String^ Codigo;
					if (listaProducto->Count == 0) {
						Codigo = "1";
					}
					else {
						Producto^ objProductoUltimo = listaProducto[listaProducto->Count - 1];
						Codigo = Convert::ToString(Convert::ToInt32(objProductoUltimo->getCodigo()) + 1);
					}
					Producto^ objProducto = gcnew Producto();
					objProducto->setCodigo(Convert::ToInt32(Codigo));

					//Tipo de producto
					Tipo_ProductoController^ objProductoController3 = gcnew Tipo_ProductoController();
					Tipo_Producto^ objTipo = objProductoController3->BuscarUnTipo_ProductoxNombre("Premium");
					objProducto->setTipo_Producto(objTipo);

					//Fecha de creacion de producto
					objProducto->setFecha_Creacion(FechaCreacion);

					//IMEI de producto
					Random^ random_imei = gcnew Random();
					//String^ imei = Convert::ToString(random_imei->Next(100000000000000, 999999999999999));

					long long minValor = 100000000000000;
					long long maxValor = 999999999999999;
					String^ imei = Convert::ToString((long long)((maxValor - minValor + 1) * random_imei->NextDouble()) + minValor);
					objProducto->setIMEI(imei);

					//N_Serie de producto
					Random^ random_nproducto = gcnew Random();
					int longitud = 7; // Longitud deseada de la cadena aleatoria
					String^ caracteres = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
					String^ cadenaAleatoria = "";
					for (int i = 0; i < longitud; i++) {
						int indice = random_nproducto->Next(0, caracteres->Length);
						cadenaAleatoria += caracteres[indice];
					}
					objProducto->setN_Serie(cadenaAleatoria);

					//Tiempo Garantia de producto
					DateTime^ FechaCreacionAumentada = FechaCreacionLarga->AddYears(2);
					String^ FechaGarantia = FechaCreacionAumentada->ToString("dd/MM/yyyy");
					objProducto->setTiempo_Garantia(FechaGarantia);

					//Agrego el producto
					ProductoController^ objProductoController = gcnew ProductoController();
					objProductoController->AregarProducto(objProducto);
				}

				Orden_ProduccionController^ objProduccionController = gcnew Orden_ProduccionController();
				objProduccionController->EliminarOrden_ProduccionxCodigo(numero_produccion);

				MessageBox::Show("La orden ha sido completada con exito y los productos añadidos");

				//Actualiza la tabla en automatico
				String^ DNItecnico = objClientesLocal->getIdentificacion();
				List<Orden_Produccion^>^ listaOrden = objProduccionController->BuscarListaOrden_ProduccionxTecnico(DNItecnico);
				//mostrar
				mostrarGrilla(listaOrden);

				List<Componentes^>^ listaComponentes = objComponentesController->BuscarComponentesTodas();
				/*mostrar*/
				mostrarGrilla2(listaComponentes);
			}
		}
		else {
			MessageBox::Show("Debe seleccionar una fila");
		}
	}
};
}
