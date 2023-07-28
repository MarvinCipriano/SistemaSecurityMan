#pragma once
using namespace System::IO;

/*

Conexiones:

Arduino UNO:
	Se encargará de hacer el sonido una vez el bluetooth reciba una señal de '1' y apagara
	el sonido si el bluetooth recibe una señal de '0'.

	Pin 12 (digital) ---- Terminal positivo (+) del buzzer zumbador
	GND              ---- Terminal restante del buzzer zumbador

	Pin 3 (digital) ---- RxD (Bluetooh ESCLAVO)
	Pin 2 (digital) ---- TxD (Bluetooh ESCLAVO)
	5V              ---- VCC (Bluetooh ESCLAVO)
	GND             ---- GND (Bluetooh ESCLAVO)

Arduino NANO:
	Se encargará de sensar el objeto de valor, tendra un Sensor de Ultrasonido y enviará por
	el bluetooth una señal de '0' si el objeto esta a menos o igual 10 cm y enviará un '1' si
	está a una distancia mayor que 10 cm, lo hará de manera constante.

	Pin 7 (digital) ----- Trig (Sensor Ultrasonido)
	Pin 6 (digital) ----- Echo (Sensor Ultrasonido)
	5V              ----- VCC  (Sensor Ultrasonido)
	GND             ----- GND  (Sensor Ultrasonido)

	Tx1             ---- RxD (Bluetooh MAESTRO)
	Rx0             ---- TxD (Bluetooh MAESTRO)
	5V              ---- VCC (Bluetooh MAESTRO)
	GND             ---- GND (Bluetooh MAESTRO)

*/

namespace SistemaSecurityManView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Collections::Generic;
	//SIEMPRE
	using namespace SistemaSecurityManController;
	using namespace SistemaSecurityManModel;
	//CORREO
	using namespace System::Net::Mail;

	//Añadir libreria de windows para producir palabras
	using namespace System::Speech::Synthesis;

	/// <summary>
	/// Resumen de Alarma
	/// </summary>
	public ref class Alarma : public System::Windows::Forms::Form
	{
	public:
		Alarma(void)
		{
			InitializeComponent();
			//TODO: agregar código de constructor aquí
			//
		}
		Alarma(Clientes^ objClientes)
		{
			InitializeComponent();
			this->objClienteslocal = objClientes;
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Alarma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button20;

	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button21;

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ label5;


	private: Clientes^ objClienteslocal;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Alarma::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(733, 453);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Encender";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Alarma::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(888, 453);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Apagar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Alarma::button2_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Alarma::serialPort1_DataReceived);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(25, 108);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(670, 441);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Configuración";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(22, 99);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(620, 320);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Contraseña (4 dígitos)";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Alarma::groupBox3_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 146);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Limpiar:";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::Control;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(117, 110);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(86, 84);
			this->button21->TabIndex = 22;
			this->button21->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Alarma::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Tomato;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(470, 252);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(48, 50);
			this->button20->TabIndex = 21;
			this->button20->Text = L"D";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Alarma::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Tomato;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(410, 252);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(48, 50);
			this->button19->TabIndex = 20;
			this->button19->Text = L"#";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Alarma::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DodgerBlue;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(350, 252);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(48, 50);
			this->button18->TabIndex = 19;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Alarma::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Tomato;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(290, 252);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(48, 50);
			this->button17->TabIndex = 18;
			this->button17->Text = L"*";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Alarma::button17_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Tomato;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(470, 189);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(48, 50);
			this->button14->TabIndex = 16;
			this->button14->Text = L"C";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Alarma::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DodgerBlue;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(410, 189);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 50);
			this->button13->TabIndex = 15;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Alarma::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DodgerBlue;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(350, 189);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(48, 50);
			this->button12->TabIndex = 14;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Alarma::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DodgerBlue;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(290, 189);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 50);
			this->button11->TabIndex = 13;
			this->button11->Text = L"7";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Alarma::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Tomato;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(470, 128);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(48, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"B";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Alarma::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DodgerBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(410, 128);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 50);
			this->button9->TabIndex = 11;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Alarma::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DodgerBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(350, 128);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 50);
			this->button8->TabIndex = 10;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Alarma::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DodgerBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(290, 128);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 50);
			this->button7->TabIndex = 9;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Alarma::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Tomato;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(470, 69);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"A";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Alarma::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DodgerBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(410, 69);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 50);
			this->button5->TabIndex = 7;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Alarma::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DodgerBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(350, 69);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Alarma::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DodgerBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(290, 69);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Alarma::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(290, 24);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Alarma::textBox1_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(537, 44);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(107, 26);
			this->comboBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(458, 46);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"LOCAL: ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"9600", L"38400", L"57600", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(340, 41);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(103, 26);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(147, 41);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(89, 26);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Alarma::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 44);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"BAUDIOS:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 44);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PUERTO COM:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(733, 108);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(278, 292);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Estado de la alarma";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(44, 63);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(191, 195);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(191, 195);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->ErrorImage = nullptr;
			this->pictureBox2->ImageLocation = L"";
			this->pictureBox2->Location = System::Drawing::Point(653, 22);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(83, 72);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(281, 15);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(365, 78);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Securityman";
			// 
			// Alarma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->ClientSize = System::Drawing::Size(1046, 572);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Alarma";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Configuración Alarma";
			this->Load += gcnew System::EventHandler(this, &Alarma::Alarma_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Alarma_Load(System::Object^ sender, System::EventArgs^ e) {

		try {
			button2->Enabled = false;
			pictureBox3->Visible = false;
			pictureBox1->Visible = true;
			comboBox1->Enabled = true;
			comboBox2->Enabled = true;

			SerialPort^ portlist = gcnew SerialPort;
			array<String^>^ ListaPuertos = portlist->GetPortNames();
			comboBox1->Items->AddRange(ListaPuertos);

			String^ lineaCUM = File::ReadAllText("AlarmaCUM.txt");
			String^ lineaLOCAL = File::ReadAllText("AlarmaLOCAL.txt");
			String^ lineaBAUDIOS = File::ReadAllText("AlarmaBAUDIOS.txt");
			String^ lineaCONTRA = File::ReadAllText("AlarmaCONTRASENHA.txt");

			if(lineaCUM != "")
			comboBox1->Text = lineaCUM;
			if (lineaLOCAL != "")
			comboBox3->Text = lineaLOCAL;
			if (lineaBAUDIOS != "")
			comboBox2->Text = lineaBAUDIOS;
			if (lineaCONTRA != "")
			textBox1->Text = lineaCONTRA;

			String^ linea = File::ReadAllText("Encendido.txt");
			if (linea == "1") {
				button1->PerformClick();
			}

		}
		catch (Exception^ error) {

			MessageBox::Show(error->Message);
		}

		//PARA BUSCAR CON LOCALES
		LocalesController^ objLocalesController = gcnew LocalesController();

		List< Locales^>^ listalocales = objLocalesController->BuscarListaLocalesxClientes(objClienteslocal->getIdentificacion());

		this->comboBox3->Items->Clear(); //Borra valores 

		for (int i = 0; i < listalocales->Count; i++) {

			this->comboBox3->Items->Add(listalocales[i]->getNombre());

		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->comboBox1->Text == "" || this->comboBox2->Text == "" || this->comboBox3->Text == "" || this->textBox1->Text == "") {
			MessageBox::Show("Complete todos los campos");
		}
		else {
			try {
				//ENCENDER
				serialPort1->PortName = comboBox1->Text;
				serialPort1->BaudRate = Convert::ToInt32(comboBox2->Text);
				serialPort1->Open();
				button1->Enabled = false;
				button2->Enabled = true;
				String^ contrasenha = textBox1->Text + "I";
				serialPort1->WriteLine(contrasenha);  //Envio la contraseña guardada
				pictureBox3->Visible = true;
				pictureBox1->Visible = false;
				comboBox1->Enabled = false;
				comboBox2->Enabled = false;
				groupBox1->Enabled = false;

				//GUARDAR NUEVO USUARIO
				String^ filePath = "Encendido.txt";
				String^ linea = File::ReadAllText("Encendido.txt");
				// Elimina el texto
				linea = String::Empty;
				//GUARDAR EL BORRADO
				File::WriteAllText(filePath, linea);
				//GUARDO NUEVO DNI
				File::WriteAllText(filePath, "1");


				//GUARDAR NUEVO USUARIO
				String^ filePathCUM = "AlarmaCUM.txt";
				String^ filePathLOCAL = "AlarmaLOCAL.txt";
				String^ filePathBAUDIOS = "AlarmaBAUDIOS.txt";
				String^ filePathCONTRA = "AlarmaCONTRASENHA.txt";
				String^ lineaCUM = File::ReadAllText("AlarmaCUM.txt");
				String^ lineaLOCAL = File::ReadAllText("AlarmaLOCAL.txt");
				String^ lineaBAUDIOS = File::ReadAllText("AlarmaBAUDIOS.txt");
				String^ lineaCONTRA = File::ReadAllText("AlarmaCONTRASENHA.txt");
				// Elimina el texto
				lineaCUM = String::Empty;
				lineaLOCAL = String::Empty;
				lineaBAUDIOS = String::Empty;
				lineaCONTRA = String::Empty;
				//GUARDAR EL BORRADO
				File::WriteAllText(filePathCUM, lineaCUM);
				File::WriteAllText(filePathLOCAL, lineaLOCAL);
				File::WriteAllText(filePathBAUDIOS, lineaBAUDIOS);
				File::WriteAllText(filePathCONTRA, lineaCONTRA);
				//GUARDO NUEVO DNI
				File::WriteAllText(filePathCUM, comboBox1->Text);
				File::WriteAllText(filePathLOCAL, comboBox3->Text);
				File::WriteAllText(filePathBAUDIOS, comboBox2->Text);
				File::WriteAllText(filePathCONTRA, textBox1->Text);
			}
			catch (Exception^ error) {

				MessageBox::Show(error->Message);
			}

		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


		try {
			//APAGAR
			button2->Enabled = false;
			button1->Enabled = true;
			serialPort1->WriteLine("F");  //FIN
			pictureBox3->Visible = false;
			pictureBox1->Visible = true;
			comboBox1->Enabled = true;
			comboBox2->Enabled = true;
			groupBox1->Enabled = true;
			serialPort1->Close();

			//GUARDAR NUEVO USUARIO
			String^ filePath = "Encendido.txt";
			String^ linea = File::ReadAllText("Encendido.txt");
			// Elimina el texto
			linea = String::Empty;
			//GUARDAR EL BORRADO
			File::WriteAllText(filePath, linea);
			//GUARDO NUEVO DNI
			File::WriteAllText(filePath, "0");
		}
		catch (Exception^ error) {

			MessageBox::Show(error->Message);
		}

	}

	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Numero de digitos de la contraseña
		   int dig = 0;

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "1";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "2";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "3";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "A";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "4";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "5";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "6";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "B";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "7";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "8";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "9";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "C";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "*";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "0";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "#";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}

	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dig < 4) {
			String^ num = textBox1->Text;
			textBox1->Text = num + "D";
			dig++;
		}
		else {
			MessageBox::Show("Debe ingresar una contraseña de 4 dígitos");
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		dig = 0;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {

		char Robo = serialPort1->ReadChar();

		if (Robo == 'R') {
			String^ lineaLOCAL = File::ReadAllText("AlarmaLOCAL.txt");
			//	
			LocalesController^ objLocalesController = gcnew LocalesController();
			Locales^ objLocales = objLocalesController->BuscarUnLocalesxNombrexCliente(lineaLOCAL, objClienteslocal->getIdentificacion());
			//
			DateTime^ FechaLarga = DateTime::Now;
			String^ Fecha = FechaLarga->ToString("dd/MM/yyyy");
			String^ Hora = FechaLarga->ToString("HH:mm:ss");
			//
			HistoricoOcurrenciasController^ objHistoricoOcurrenciasController = gcnew HistoricoOcurrenciasController();
			objHistoricoOcurrenciasController->RegistrarHistoricoOcurrencias(objClienteslocal->getIdentificacion(), objLocales->getCodigo(), Fecha, Hora);

			try
			{
				String^ toAddress = objClienteslocal->getEmail();
				String^ subject = "ALERTA DE ROBO";
				String^ body = "Te estan robando causaaaaaaaaaaaaaaaaaaaaaa.";

				SmtpClient^ smtpClient = gcnew SmtpClient("smtp.gmail.com", 587);
				smtpClient->EnableSsl = true;
				smtpClient->UseDefaultCredentials = false;
				smtpClient->Credentials = gcnew System::Net::NetworkCredential("sebalt891@gmail.com", "srvozrsqzwjpwppv");

				MailMessage^ mailMessage = gcnew MailMessage();
				mailMessage->From = gcnew MailAddress("sebalt891@gmail.com");
				mailMessage->To->Add(toAddress);
				mailMessage->Subject = subject;
				mailMessage->Body = body;

				smtpClient->Send(mailMessage);

				MessageBox::Show("Correo enviado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Ocurrió un error al enviar el correo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			//Sentencias para producir sonido
			SpeechSynthesizer^ synthesizer = gcnew SpeechSynthesizer();
			synthesizer->Speak("Alerta de Robo");
			Console::ReadLine();
			MessageBox::Show("Alerta de Robo");
		}

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}