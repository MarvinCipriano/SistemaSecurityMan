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
	/// Resumen de frmEditarProductoProveedor
	/// </summary>
	public ref class frmEditarProductoProveedor : public System::Windows::Forms::Form
	{
	public:
		frmEditarProductoProveedor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarProductoProveedor(ProductosProveedores^ objProductosProveedores)
		{
			InitializeComponent();
			this->objProductosProveedoresLocal = objProductosProveedores;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarProductoProveedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancelar;
	protected:
	private: System::Windows::Forms::Button^ Grabar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textStock;
	private: System::Windows::Forms::TextBox^ textPrecio;
	private: System::Windows::Forms::TextBox^ textComponente;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
		   //
	private: ProductosProveedores^ objProductosProveedoresLocal;
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
			this->Grabar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textStock = (gcnew System::Windows::Forms::TextBox());
			this->textPrecio = (gcnew System::Windows::Forms::TextBox());
			this->textComponente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelar->Location = System::Drawing::Point(207, 205);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 14;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmEditarProductoProveedor::Cancelar_Click);
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(55, 205);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 13;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmEditarProductoProveedor::Grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textStock);
			this->groupBox1->Controls->Add(this->textPrecio);
			this->groupBox1->Controls->Add(this->textComponente);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(342, 185);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editar Producto";
			// 
			// textStock
			// 
			this->textStock->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textStock->Location = System::Drawing::Point(146, 135);
			this->textStock->Name = L"textStock";
			this->textStock->Size = System::Drawing::Size(182, 25);
			this->textStock->TabIndex = 24;
			// 
			// textPrecio
			// 
			this->textPrecio->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textPrecio->Location = System::Drawing::Point(146, 84);
			this->textPrecio->Name = L"textPrecio";
			this->textPrecio->Size = System::Drawing::Size(182, 25);
			this->textPrecio->TabIndex = 23;
			// 
			// textComponente
			// 
			this->textComponente->Enabled = false;
			this->textComponente->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textComponente->Location = System::Drawing::Point(146, 36);
			this->textComponente->Name = L"textComponente";
			this->textComponente->Size = System::Drawing::Size(182, 25);
			this->textComponente->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(23, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Stock:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(23, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Precio:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(23, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Componente:";
			// 
			// frmEditarProductoProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(366, 243);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmEditarProductoProveedor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Producto Proveedor";
			this->Load += gcnew System::EventHandler(this, &frmEditarProductoProveedor::frmEditarProductoProveedor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarProductoProveedor_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->textComponente->Text = this->objProductosProveedoresLocal->getComponentes()->getNombre();
		this->textPrecio->Text = Convert::ToString(this->objProductosProveedoresLocal->getPrecio());
		this->textStock->Text = Convert::ToString(this->objProductosProveedoresLocal->getStock());
	}
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		//GRABAR
		String^ componente = this->textComponente->Text;
		double precio = Convert::ToDouble(this->textPrecio->Text);
		int stock = Convert::ToInt32(this->textStock->Text);

		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		objProductosProveedoresController->ActualizarProductosProveedores(objProductosProveedoresLocal->getCodigo(), objProductosProveedoresLocal->getProveedores(), objProductosProveedoresLocal->getComponentes(), precio, stock);

		MessageBox::Show("Los datos del producto se han actualizado con exito");
		this->Close();
}
};
}
