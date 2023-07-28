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
	/// Resumen de frmEditarTipoProductos
	/// </summary>
	public ref class frmEditarTipoProductos : public System::Windows::Forms::Form
	{
	public:
		frmEditarTipoProductos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarTipoProductos(Tipo_Producto^ objTipo)
		{
			InitializeComponent();
			this->objTipoLocal = objTipo;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarTipoProductos()
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
	private: System::Windows::Forms::TextBox^ textcaracte;
	private: System::Windows::Forms::TextBox^ textprecio;
	private: System::Windows::Forms::TextBox^ textdescrip;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	//
	private: Tipo_Producto^ objTipoLocal;
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
			this->textcaracte = (gcnew System::Windows::Forms::TextBox());
			this->textprecio = (gcnew System::Windows::Forms::TextBox());
			this->textdescrip = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Cancelar
			// 
			this->Cancelar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelar->Location = System::Drawing::Point(223, 221);
			this->Cancelar->Name = L"Cancelar";
			this->Cancelar->Size = System::Drawing::Size(104, 26);
			this->Cancelar->TabIndex = 8;
			this->Cancelar->Text = L"Cancelar";
			this->Cancelar->UseVisualStyleBackColor = true;
			this->Cancelar->Click += gcnew System::EventHandler(this, &frmEditarTipoProductos::Cancelar_Click);
			// 
			// Grabar
			// 
			this->Grabar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grabar->Location = System::Drawing::Point(71, 221);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(104, 26);
			this->Grabar->TabIndex = 7;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &frmEditarTipoProductos::Grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textcaracte);
			this->groupBox1->Controls->Add(this->textprecio);
			this->groupBox1->Controls->Add(this->textdescrip);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(374, 198);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar Cliente Independiente";
			// 
			// textcaracte
			// 
			this->textcaracte->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textcaracte->Location = System::Drawing::Point(162, 143);
			this->textcaracte->Name = L"textcaracte";
			this->textcaracte->Size = System::Drawing::Size(182, 25);
			this->textcaracte->TabIndex = 23;
			// 
			// textprecio
			// 
			this->textprecio->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textprecio->Location = System::Drawing::Point(162, 94);
			this->textprecio->Name = L"textprecio";
			this->textprecio->Size = System::Drawing::Size(182, 25);
			this->textprecio->TabIndex = 22;
			// 
			// textdescrip
			// 
			this->textdescrip->Enabled = false;
			this->textdescrip->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F));
			this->textdescrip->Location = System::Drawing::Point(162, 46);
			this->textdescrip->Name = L"textdescrip";
			this->textdescrip->Size = System::Drawing::Size(182, 25);
			this->textdescrip->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(19, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Caracteristicas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(19, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Precio:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(19, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Descripción:";
			// 
			// frmEditarTipoProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 259);
			this->Controls->Add(this->Cancelar);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmEditarTipoProductos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Editar Tipo de Productos";
			this->Load += gcnew System::EventHandler(this, &frmEditarTipoProductos::frmEditarTipoProductos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		//GRABAR
		String^ Descripcion = this->textdescrip->Text;
		double Precio = Convert::ToDouble(this->textprecio->Text);
		String^ Caracteristicas = this->textcaracte->Text;
		Tipo_ProductoController^ objTipo_ProductoController = gcnew Tipo_ProductoController();
		objTipo_ProductoController->ActualizarTipo_Producto(Descripcion, Precio, Caracteristicas);
		MessageBox::Show("Los datos del tipo han sido actualizados con exito");
		this->Close();
	}
	private: System::Void frmEditarTipoProductos_Load(System::Object^ sender, System::EventArgs^ e) {
		//VENTANA
		this->textdescrip->Text = this->objTipoLocal->getNombre();
		this->textprecio->Text = Convert::ToString(this->objTipoLocal->getPrecio());
		this->textcaracte->Text = this->objTipoLocal->getCaracteristicas();
	}
};
}
