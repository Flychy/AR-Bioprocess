#pragma once
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Math;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ lab_X_Axis;
	private: System::Windows::Forms::Label^ lab_Y_Axis;
	private: System::Windows::Forms::Label^ lab_X_Axis_Curr;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->lab_X_Axis = (gcnew System::Windows::Forms::Label());
			this->lab_Y_Axis = (gcnew System::Windows::Forms::Label());
			this->lab_X_Axis_Curr = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(174, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(680, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CHARACTERISTIC ELEMENTS OF THE PARAMETERS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(263, 557);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 50);
			this->button2->TabIndex = 11;
			this->button2->Text = L"CHART";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(559, 557);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PaleGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 4.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(544, 633);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(390, 12);
			this->label3->TabIndex = 9;
			this->label3->Text = L"by Boraciu Claudiu-Constantin --- Simion Dragos Mihai --- Stoean Andrei-Cosmin\r\n";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Silver;
			this->chart1->BackImageTransparentColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisX2->TitleFont = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisY2->TitleFont = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Cross;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(96, 133);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Lime;
			series1->EmptyPointStyle->BorderColor = System::Drawing::Color::White;
			series1->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->LabelForeColor = System::Drawing::Color::SeaShell;
			series1->Legend = L"Legend1";
			series1->Name = L"BIOPROCESS";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValuesPerPoint = 2;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Color = System::Drawing::Color::Red;
			series2->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"BIOPROCESS POINTS";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(793, 411);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			this->chart1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::chart1_MouseMove);
			// 
			// lab_X_Axis
			// 
			this->lab_X_Axis->BackColor = System::Drawing::Color::Navy;
			this->lab_X_Axis->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lab_X_Axis->Location = System::Drawing::Point(648, 133);
			this->lab_X_Axis->Name = L"lab_X_Axis";
			this->lab_X_Axis->Size = System::Drawing::Size(1, 1);
			this->lab_X_Axis->TabIndex = 13;
			this->lab_X_Axis->Click += gcnew System::EventHandler(this, &MyForm3::lab_X_Axis_Click);
			// 
			// lab_Y_Axis
			// 
			this->lab_Y_Axis->BackColor = System::Drawing::Color::Navy;
			this->lab_Y_Axis->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lab_Y_Axis->Location = System::Drawing::Point(165, 348);
			this->lab_Y_Axis->Name = L"lab_Y_Axis";
			this->lab_Y_Axis->Size = System::Drawing::Size(1, 1);
			this->lab_Y_Axis->TabIndex = 14;
			this->lab_Y_Axis->Click += gcnew System::EventHandler(this, &MyForm3::label4_Click);
			// 
			// lab_X_Axis_Curr
			// 
			this->lab_X_Axis_Curr->BackColor = System::Drawing::Color::PaleGreen;
			this->lab_X_Axis_Curr->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_X_Axis_Curr->ForeColor = System::Drawing::Color::Black;
			this->lab_X_Axis_Curr->Location = System::Drawing::Point(667, 277);
			this->lab_X_Axis_Curr->Name = L"lab_X_Axis_Curr";
			this->lab_X_Axis_Curr->Size = System::Drawing::Size(137, 28);
			this->lab_X_Axis_Curr->TabIndex = 15;
			this->lab_X_Axis_Curr->Text = L"lab_X_Axis_Curr";
			this->lab_X_Axis_Curr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lab_X_Axis_Curr->Click += gcnew System::EventHandler(this, &MyForm3::lab_X_Axis_Curr_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 654);
			this->Controls->Add(this->lab_X_Axis_Curr);
			this->Controls->Add(this->lab_Y_Axis);
			this->Controls->Add(this->lab_X_Axis);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Unix";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = false;
		
		std::ifstream in("date.csv");
		std::vector<std::vector<double>> fields;


		std::string aux;
		std::vector<double> timp;
		std::vector<double> DO;
		std::vector<double> pH;
		std::vector<double> substrat;
		std::vector<double> concentratie;


		while (getline(in, aux)) {
			std::istringstream input(aux);

			getline(input, aux, ',');
			timp.push_back(stod(aux));

			getline(input, aux, ',');
			DO.push_back(stod(aux));

			getline(input, aux, ',');
			pH.push_back(stod(aux));

			getline(input, aux, ',');
			substrat.push_back(stod(aux));

			getline(input, aux, ',');
			concentratie.push_back(stod(aux));

		}

		this->chart1->Series["BIOPROCESS"]->Points->Clear();

		for (int i = 0; i < 17; i++) {
			this->chart1->Series["BIOPROCESS"]->Points->AddXY(timp[i], DO[i]);
			this->chart1->Series["BIOPROCESS POINTS"]->Points->AddXY(timp[i], DO[i]);
		}

		/*this->chart1->Series["Bioproces"]->Points->AddXY(0, 0.45);
		this->chart1->Series["Bioproces"]->Points->AddXY(1, 1.61);
		this->chart1->Series["Bioproces"]->Points->AddXY(2, 2);
		this->chart1->Series["Bioproces"]->Points->AddXY(3, 2.6);
		this->chart1->Series["Bioproces"]->Points->AddXY(4, 3.2);
		this->chart1->Series["Bioproces"]->Points->AddXY(5, 4.1);
		this->chart1->Series["Bioproces"]->Points->AddXY(6, 5.2);
		this->chart1->Series["Bioproces"]->Points->AddXY(7, 7.1);
		this->chart1->Series["Bioproces"]->Points->AddXY(8, 8.2);
		this->chart1->Series["Bioproces"]->Points->AddXY(9, 8.5);
		this->chart1->Series["Bioproces"]->Points->AddXY(10, 9);
		this->chart1->Series["Bioproces"]->Points->AddXY(11, 9.3);
		this->chart1->Series["Bioproces"]->Points->AddXY(12, 9.4);
		this->chart1->Series["Bioproces"]->Points->AddXY(13, 9.7);
		this->chart1->Series["Bioproces"]->Points->AddXY(14, 9.8);
		this->chart1->Series["Bioproces"]->Points->AddXY(15, 9.9);
		this->chart1->Series["Bioproces"]->Points->AddXY(16, 9.92);*/

		/*float p[17];
		for (int j = 0; j < 17; j++) {
			//p[j] = (-2.2052) * pow(10, -11) * pow(j, 16) + 3.49683 * pow(10, -9) * pow(j, 15) - 2.53852 * pow(10, -7) * pow(j, 14) + 0.0000111818 * pow(j, 13) - 0.000333927; pow(j, 12) + 0.00715478 * pow(j, 11) - 0.113522 * pow(j, 10) + 1.35718 * pow(j, 9) - 12.3199 * pow(j, 8) + 84.9191 * pow(j, 7) - 441.302 * pow(j, 6) + 1703.26 * pow(j, 5) - 4760.98 * pow(j, 4) + 9256.23 * pow(j, 3) - 11705.3 * pow(j, 2) + 8505.37 * j - 2630.69;
			p[j] = j;
			this->chart1->Series["bioproces points"]->Points->AddXY(j, p[j]);
		}*/

		/*this->chart1->Series["Puncte de bioproces"]->Points->AddXY(0, 0.45);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(1, 1.61);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(2, 2);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(3, 2.6);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(4, 3.2);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(5, 4.1);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(6, 5.2);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(7, 7.1);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(8, 8.2);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(9, 8.5);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(10, 9);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(11, 9.3);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(12, 9.4);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(13, 9.7);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(14, 9.8);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(15, 9.9);
		this->chart1->Series["Puncte de bioproces"]->Points->AddXY(16, 9.92);*/
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lab_X_Axis->Visible = false;
		lab_Y_Axis->Visible = false;

		if (e->X <= 55 || e->Y >= 285 || e->Y <= 20 || e->X >= 400)
		{
			lab_X_Axis_Curr->Visible = false;
		}
		else
		{
			lab_X_Axis_Curr->Visible = true;
		}


		std::ifstream in("date.csv");
		std::vector<std::vector<double>> fields;


		std::string aux;
		std::vector<double> timp;
		std::vector<double> DO;
		std::vector<double> pH;
		std::vector<double> substrat;
		std::vector<double> concentratie;


		while (getline(in, aux)) {
			std::istringstream input(aux);

			getline(input, aux, ',');
			timp.push_back(stod(aux));

			getline(input, aux, ',');
			DO.push_back(stod(aux));

			getline(input, aux, ',');
			pH.push_back(stod(aux));

			getline(input, aux, ',');
			substrat.push_back(stod(aux));

			getline(input, aux, ',');
			concentratie.push_back(stod(aux));

		}


		double yValue = chart1->ChartAreas[0]->AxisY2->PixelPositionToValue(e->Y);
		double xValue = chart1->ChartAreas[0]->AxisX2->PixelPositionToValue(e->X);

		String^ string1;
		String^ string2;
		String^ string3;
		String^ string4;
		String^ string5;

		int ok = 0;

		double timpx;
		double DOx;
		double pHx;
		double substratx;
		double concentratiex;

		for (int i = 0; i < 17; i++) {
			if (xValue >= timp[i] - 0.1 && xValue <= timp[i] + 0.1 && yValue >= DO[i] - 0.1 && yValue <= DO[i] + 0.1) {
				ok = 1;
				timpx = timp[i];
				DOx = DO[i];
				pHx = pH[i];
				substratx = substrat[i];
				concentratiex = concentratie[i];
				break;
			}

			else {

				this->lab_X_Axis_Curr->Size = System::Drawing::Size(190, 40);

				String^ xValueString = (round(xValue * pow(10, 2)) / pow(10, 2)).ToString();
				String^ yValueString = (round(yValue * pow(10, 2)) / pow(10, 2)).ToString();


				lab_X_Axis_Curr->Text = "T = " + xValueString + " h , D.O. = " + yValueString;

				lab_X_Axis_Curr->Location = Point(470, 220);
			}
		}
		if (ok == 1) {
			this->lab_X_Axis_Curr->Size = System::Drawing::Size(190, 120);

			string1 = "Time: ";
			string2 = "D.O(x): ";
			string3 = "pH: ";
			string4 = "Substrate: ";
			string5 = "Oxygen concentration: ";

			lab_X_Axis_Curr->Text = string1 + timpx + " h\n" + string2 + DOx + "\n" + string3 + pHx + "\n" + string4 + substratx + " mg/100 ml\n" + string5 + concentratiex + " %";

			lab_X_Axis_Curr->Location = Point(470, 220);
		}
	}
private: System::Void lab_X_Axis_Curr_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lab_X_Axis_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
