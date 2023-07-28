#pragma once
#include "frmBuscarTecnicos.h"

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
	/// Resumen de frmOrdenProduccion
	/// </summary>
	public ref class frmOrdenProduccion : public System::Windows::Forms::Form
	{
	public:
		frmOrdenProduccion(void)
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
		~frmOrdenProduccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox2->Location = System::Drawing::Point(240, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(557, 143);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Técnico Encargado";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textBox4->Location = System::Drawing::Point(141, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 26);
			this->textBox4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->Location = System::Drawing::Point(29, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"DNI:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textBox3->Location = System::Drawing::Point(141, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 26);
			this->textBox3->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button3->Location = System::Drawing::Point(369, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 26);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmOrdenProduccion::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->groupBox1->Location = System::Drawing::Point(240, 170);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(557, 210);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Detalles de Producción";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(349, 156);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(148, 26);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->Location = System::Drawing::Point(94, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Fecha Limite:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->Location = System::Drawing::Point(94, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Alarma Básica (Unid):";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textBox2->Location = System::Drawing::Point(349, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->textBox1->Location = System::Drawing::Point(349, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->Location = System::Drawing::Point(94, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Alarma Premium (Unid):";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F));
			this->button2->Location = System::Drawing::Point(240, 485);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(557, 75);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmOrdenProduccion::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(240, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(557, 75);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmOrdenProduccion::button1_Click);
			// 
			// frmOrdenProduccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmOrdenProduccion";
			this->Text = L"frmOrdenProduccion";
			this->Load += gcnew System::EventHandler(this, &frmOrdenProduccion::frmOrdenProduccion_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//BUSCAR
		Tecnico^ objTecnico = gcnew Tecnico();
		frmBuscarTecnicos^ ventanaBuscarTecnicos = gcnew frmBuscarTecnicos(objTecnico);

		ventanaBuscarTecnicos->ShowDialog();

		this->textBox4->Text = objTecnico->getNombre() + " " + objTecnico->getApellido();
		this->textBox3->Text = Convert::ToString(objTecnico->getDNI());
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//CANCELAR
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//REGISTRAR
		Orden_ProduccionController^ objOrdenController = gcnew Orden_ProduccionController();
		List<Orden_Produccion^>^ listaOrden = objOrdenController->BuscarOrden_ProduccionTodas();

		int  numero_Produccion;
		if (listaOrden->Count == 0) {
			numero_Produccion = 1;
		}
		else {
			Orden_Produccion^ objOrden_produccionUltimo = listaOrden[listaOrden->Count - 1];
			numero_Produccion = (Convert::ToInt32(objOrden_produccionUltimo->getnumero_produccion())) + 1;
		}
		String^ dni = this->textBox3->Text;
		int cantBasico = Convert::ToInt32(this->textBox1->Text);
		int cantPremium = Convert::ToInt32(this->textBox2->Text);
		String^ FechaLimite = this->dateTimePicker1->Text;

		TecnicoController^ objTecnicoController = gcnew TecnicoController();
		Tecnico^ objTecnico = objTecnicoController->BuscarUnTecnicoxDNI(dni);

		Orden_ProduccionController^ objOrdenProduccionController = gcnew Orden_ProduccionController();
		objOrdenProduccionController->RegistrarOrden_Produccion(numero_Produccion, objTecnico, cantBasico, cantPremium, FechaLimite);

		MessageBox::Show("La nueva orden ha sido registrada con exito");

		this->textBox1->Text = "0";
		this->textBox2->Text = "0";
		this->textBox3->Clear();
		this->textBox4->Clear();
	}
private: System::Void frmOrdenProduccion_Load(System::Object^ sender, System::EventArgs^ e) {
	//VENTANA
	this->textBox1->Text = "0";
	this->textBox2->Text = "0";
}
};
}
