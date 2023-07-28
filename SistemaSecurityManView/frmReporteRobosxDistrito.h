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
	/// Resumen de frmReporteRobosxDistrito
	/// </summary>
	public ref class frmReporteRobosxDistrito : public System::Windows::Forms::Form
	{
	public:
		frmReporteRobosxDistrito(void)
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
		~frmReporteRobosxDistrito()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(11, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1022, 548);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Robos por distrito";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(3, 22);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Incidencias";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1016, 523);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteRobosxDistrito
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 572);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmReporteRobosxDistrito";
			this->Text = L"frmReporteRobosxDistrito";
			this->Load += gcnew System::EventHandler(this, &frmReporteRobosxDistrito::frmReporteRobosxDistrito_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}//
#pragma endregion
	private: System::Void frmReporteRobosxDistrito_Load(System::Object^ sender, System::EventArgs^ e) {
		HistoricoOcurrenciasController^ objHistoricoOcurrenciasController = gcnew HistoricoOcurrenciasController();
		List<HistoricoOcurrencias^>^ listaHistoricoOcurrencias = objHistoricoOcurrenciasController->BuscarHistoricoOcurrenciasTodas();
		// Asegúrate de tener un objeto chart1 en tu formulario o control y que esté correctamente inicializado
		// Luego, crea una instancia de la clase Series para el gráfico de barras

		chart1->Series["Incidencias"]->ChartType = DataVisualization::Charting::SeriesChartType::Column; // Establece el tipo de gráfico de barras

		// Obtén los datos que deseas mostrar en el gráfico
		CostoEnvioController^ objCostoEnvioController = gcnew CostoEnvioController();
		List<Costo_Envio^>^ listaCosto_Envio = objCostoEnvioController->BuscarCosto_EnvioTodas();

		// Agrega los datos al gráfico de barras
		for (int i = 0; i < listaCosto_Envio->Count; i++) {
			int locales = 0;
			for (int j = 0; j < listaHistoricoOcurrencias->Count; j++) {
				if (listaCosto_Envio[i]->getDistrito() == listaHistoricoOcurrencias[j]->getLocales()->getDistrito()) {
					locales++;
				}
			}
			chart1->Series["Incidencias"]->Points->AddXY(listaCosto_Envio[i]->getDistrito(), locales); // Agrega los valores de X e Y para cada barra
		}
	}
	};
}
