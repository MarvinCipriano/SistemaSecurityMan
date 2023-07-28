#pragma once
#include "frmMantComponente.h"

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
	/// Resumen de frmNuevoProductoProveedor
	/// </summary>
	public ref class frmNuevoProductoProveedor : public System::Windows::Forms::Form
	{
	public:
		frmNuevoProductoProveedor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevoProductoProveedor(Proveedores^ objProveedores)
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
		~frmNuevoProductoProveedor()
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
	private: Proveedores^ objProveedoresLocal;
	private: System::Windows::Forms::Button^ BuscarComp;
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
			this->BuscarComp = (gcnew System::Windows::Forms::Button());
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
			this->Cancelar->Location = System::Drawing::Point(281, 205);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 11;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmNuevoProductoProveedor::Cancelar_Click);
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(129, 205);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 10;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmNuevoProductoProveedor::Grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BuscarComp);
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
			this->groupBox1->Size = System::Drawing::Size(496, 185);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar Producto";
			// 
			// BuscarComp
			// 
			this->BuscarComp->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuscarComp->Location = System::Drawing::Point(361, 34);
			this->BuscarComp->Name = L"BuscarComp";
			this->BuscarComp->Size = System::Drawing::Size(104, 26);
			this->BuscarComp->TabIndex = 25;
			this->BuscarComp->Text = L"Buscar";
			this->BuscarComp->UseVisualStyleBackColor = true;
			this->BuscarComp->Click += gcnew System::EventHandler(this, &frmNuevoProductoProveedor::BuscarComp_Click);
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
			// frmNuevoProductoProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 243);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmNuevoProductoProveedor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Nuevo Producto Proveedor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Grabar_Click(System::Object ^ sender, System::EventArgs ^ e) {
		//GRABAR
		
		ProductosProveedoresController^ objProductosProveedoresController = gcnew ProductosProveedoresController();
		List<ProductosProveedores^>^ listaProductos = objProductosProveedoresController->BuscarProductosProveedoresTodas();

		int  Codigo;
		if (listaProductos->Count == 0) {
			Codigo = 1;
		}
		else {
			ProductosProveedores^ objProductosProveedoresUltimo = listaProductos[listaProductos->Count - 1];
			Codigo = (Convert::ToInt32(objProductosProveedoresUltimo->getCodigo())) + 1;
		}
		String ^ Proveedor = objProveedoresLocal->getNombre();
		String^ Componente = this->textComponente->Text;
		String^ Precio = this->textPrecio->Text;
		String^ Stock = this->textStock->Text;

		ComponentesController^ objComponentesController = gcnew ComponentesController();
		Componentes^ objComponentes = objComponentesController->BuscarUnComponentesxNombre(Componente);

		int existe1 = objProductosProveedoresController->ExisteProductosProveedoresxProveedorxComponente(Proveedor, Componente);

		if (existe1) {
			MessageBox::Show("El proveedor ya tiene este componente registrado en el sistema");
		}
		else if (existe1 == 0) {
			objProductosProveedoresController->RegistrarProductosProveedores(Codigo, objProveedoresLocal, objComponentes, Convert::ToDouble(Precio), Convert::ToInt32(Stock));
			MessageBox::Show("El nuevo producto ha sido registrado con exito");
			this->Close();
		}
	}
	private: System::Void BuscarComp_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR COMPONENTE
		Componentes^ objcomponentesProve = gcnew Componentes();
		frmMantComponente^ ventanaBuscarcomponentes = gcnew frmMantComponente(objcomponentesProve);
		ventanaBuscarcomponentes->ShowDialog();
		this->textComponente->Text = objcomponentesProve->getNombre();

	}
};
}
