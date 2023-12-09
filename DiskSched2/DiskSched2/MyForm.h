#pragma once

namespace DiskSched2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Linq;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		List<Tuple<double, double>^>^ points;
		double currentXvalue;
	private: System::Windows::Forms::Label^ maxtracklabel;
	private: System::Windows::Forms::TextBox^ maxtrack;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackwidth;
	private: System::Windows::Forms::TrackBar^ pointsize;






	private: System::Windows::Forms::Button^ homebutton;
	private: System::Windows::Forms::Button^ settingsbutton;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ settings;
	private: System::Windows::Forms::Panel^ main;











		   List<double>^ Yvalues;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			points = gcnew List<Tuple<double, double>^>();
			currentXvalue = 0;
			Yvalues = gcnew List<double>();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ sched;
	protected:

	private: System::Windows::Forms::TextBox^ inputtracks;
	private: System::Windows::Forms::Label^ InputLabel;
	private: System::Windows::Forms::Button^ submitbutton;
	private: System::Windows::Forms::Label^ AlgoLabel;
	private: System::Windows::Forms::ComboBox^ Algorithm;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ values;
	private: System::Windows::Forms::Label^ movement;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->sched = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->inputtracks = (gcnew System::Windows::Forms::TextBox());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->AlgoLabel = (gcnew System::Windows::Forms::Label());
			this->Algorithm = (gcnew System::Windows::Forms::ComboBox());
			this->submitbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackwidth = (gcnew System::Windows::Forms::TrackBar());
			this->pointsize = (gcnew System::Windows::Forms::TrackBar());
			this->maxtrack = (gcnew System::Windows::Forms::TextBox());
			this->maxtracklabel = (gcnew System::Windows::Forms::Label());
			this->movement = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->values = (gcnew System::Windows::Forms::ListBox());
			this->homebutton = (gcnew System::Windows::Forms::Button());
			this->settingsbutton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->settings = (gcnew System::Windows::Forms::Panel());
			this->main = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sched))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackwidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pointsize))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->settings->SuspendLayout();
			this->main->SuspendLayout();
			this->SuspendLayout();
			// 
			// sched
			// 
			this->sched->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sched->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->sched->BorderlineColor = System::Drawing::SystemColors::Window;
			this->sched->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->sched->BorderlineWidth = 3;
			chartArea2->AxisX->IsMarginVisible = false;
			chartArea2->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisX->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisX->Title = L"Time";
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			chartArea2->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->AxisY->IsLabelAutoFit = false;
			chartArea2->AxisY->LabelStyle->Interval = 0;
			chartArea2->AxisY->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisY->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisY->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisY->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisY->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisY->MinorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisY->Title = L"Track number";
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			chartArea2->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea2->Name = L"ChartArea1";
			this->sched->ChartAreas->Add(chartArea2);
			this->sched->Cursor = System::Windows::Forms::Cursors::Default;
			legend2->Name = L"Legend1";
			this->sched->Legends->Add(legend2);
			this->sched->Location = System::Drawing::Point(24, 24);
			this->sched->Margin = System::Windows::Forms::Padding(4);
			this->sched->Name = L"sched";
			this->sched->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series4->BorderColor = System::Drawing::Color::White;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			series4->Legend = L"Legend1";
			series4->Name = L"Track";
			series4->YValuesPerPoint = 6;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->Color = System::Drawing::Color::Crimson;
			series5->Legend = L"Legend1";
			series5->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series5->Name = L"Points";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->IsVisibleInLegend = false;
			series6->Legend = L"Legend1";
			series6->MarkerColor = System::Drawing::Color::White;
			series6->MarkerSize = 0;
			series6->Name = L"Series3";
			this->sched->Series->Add(series4);
			this->sched->Series->Add(series5);
			this->sched->Series->Add(series6);
			this->sched->Size = System::Drawing::Size(805, 588);
			this->sched->TabIndex = 0;
			this->sched->Text = L"chart1";
			// 
			// inputtracks
			// 
			this->inputtracks->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputtracks->Location = System::Drawing::Point(25, 55);
			this->inputtracks->Margin = System::Windows::Forms::Padding(4);
			this->inputtracks->Name = L"inputtracks";
			this->inputtracks->Size = System::Drawing::Size(270, 30);
			this->inputtracks->TabIndex = 1;
			this->inputtracks->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::inputtracks_KeyDown);
			// 
			// InputLabel
			// 
			this->InputLabel->AutoSize = true;
			this->InputLabel->BackColor = System::Drawing::Color::Transparent;
			this->InputLabel->ForeColor = System::Drawing::Color::Black;
			this->InputLabel->Location = System::Drawing::Point(24, 24);
			this->InputLabel->Margin = System::Windows::Forms::Padding(4);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(105, 23);
			this->InputLabel->TabIndex = 2;
			this->InputLabel->Text = L"Input Tracks:";
			// 
			// AlgoLabel
			// 
			this->AlgoLabel->AutoSize = true;
			this->AlgoLabel->BackColor = System::Drawing::Color::Transparent;
			this->AlgoLabel->Location = System::Drawing::Point(24, 94);
			this->AlgoLabel->Margin = System::Windows::Forms::Padding(4);
			this->AlgoLabel->Name = L"AlgoLabel";
			this->AlgoLabel->Size = System::Drawing::Size(90, 23);
			this->AlgoLabel->TabIndex = 5;
			this->AlgoLabel->Text = L"Algorithm:";
			// 
			// Algorithm
			// 
			this->Algorithm->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Algorithm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Algorithm->Location = System::Drawing::Point(25, 125);
			this->Algorithm->Margin = System::Windows::Forms::Padding(4);
			this->Algorithm->Name = L"Algorithm";
			this->Algorithm->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Algorithm->Size = System::Drawing::Size(133, 31);
			this->Algorithm->TabIndex = 4;
			this->Algorithm->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::inputtracks_KeyDown);
			// 
			// submitbutton
			// 
			this->submitbutton->BackColor = System::Drawing::Color::MediumAquamarine;
			this->submitbutton->FlatAppearance->BorderSize = 0;
			this->submitbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submitbutton->ForeColor = System::Drawing::Color::Black;
			this->submitbutton->Location = System::Drawing::Point(25, 163);
			this->submitbutton->Margin = System::Windows::Forms::Padding(4);
			this->submitbutton->Name = L"submitbutton";
			this->submitbutton->Size = System::Drawing::Size(270, 36);
			this->submitbutton->TabIndex = 2;
			this->submitbutton->Text = L"Submit";
			this->submitbutton->UseVisualStyleBackColor = false;
			this->submitbutton->Click += gcnew System::EventHandler(this, &MyForm::submitbutton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(24, 24);
			this->label3->Margin = System::Windows::Forms::Padding(4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Track width";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(24, 117);
			this->label2->Margin = System::Windows::Forms::Padding(4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 23);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Point size:";
			// 
			// trackwidth
			// 
			this->trackwidth->Location = System::Drawing::Point(18, 54);
			this->trackwidth->Maximum = 15;
			this->trackwidth->Minimum = 1;
			this->trackwidth->Name = L"trackwidth";
			this->trackwidth->Size = System::Drawing::Size(274, 56);
			this->trackwidth->TabIndex = 12;
			this->trackwidth->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackwidth->Value = 1;
			this->trackwidth->Scroll += gcnew System::EventHandler(this, &MyForm::trackwidth_Scroll);
			// 
			// pointsize
			// 
			this->pointsize->Location = System::Drawing::Point(18, 147);
			this->pointsize->Maximum = 15;
			this->pointsize->Minimum = 1;
			this->pointsize->Name = L"pointsize";
			this->pointsize->Size = System::Drawing::Size(274, 56);
			this->pointsize->TabIndex = 11;
			this->pointsize->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->pointsize->Value = 1;
			this->pointsize->Scroll += gcnew System::EventHandler(this, &MyForm::pointsize_Scroll);
			// 
			// maxtrack
			// 
			this->maxtrack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maxtrack->Location = System::Drawing::Point(162, 126);
			this->maxtrack->Margin = System::Windows::Forms::Padding(4);
			this->maxtrack->Name = L"maxtrack";
			this->maxtrack->Size = System::Drawing::Size(131, 30);
			this->maxtrack->TabIndex = 10;
			this->maxtrack->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::inputtracks_KeyDown);
			// 
			// maxtracklabel
			// 
			this->maxtracklabel->AutoSize = true;
			this->maxtracklabel->BackColor = System::Drawing::Color::Transparent;
			this->maxtracklabel->Location = System::Drawing::Point(158, 95);
			this->maxtracklabel->Margin = System::Windows::Forms::Padding(4);
			this->maxtracklabel->Name = L"maxtracklabel";
			this->maxtracklabel->Size = System::Drawing::Size(89, 23);
			this->maxtracklabel->TabIndex = 9;
			this->maxtracklabel->Text = L"Max Track:";
			// 
			// movement
			// 
			this->movement->AutoSize = true;
			this->movement->BackColor = System::Drawing::Color::Khaki;
			this->movement->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->movement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->movement->ForeColor = System::Drawing::Color::Black;
			this->movement->Location = System::Drawing::Point(25, 476);
			this->movement->Margin = System::Windows::Forms::Padding(4);
			this->movement->MinimumSize = System::Drawing::Size(271, 2);
			this->movement->Name = L"movement";
			this->movement->Size = System::Drawing::Size(271, 25);
			this->movement->TabIndex = 8;
			this->movement->Text = L"Total Movement:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(24, 207);
			this->label1->Margin = System::Windows::Forms::Padding(4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Values:";
			// 
			// values
			// 
			this->values->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->values->FormattingEnabled = true;
			this->values->ItemHeight = 23;
			this->values->Location = System::Drawing::Point(25, 237);
			this->values->Name = L"values";
			this->values->Size = System::Drawing::Size(270, 232);
			this->values->TabIndex = 6;
			// 
			// homebutton
			// 
			this->homebutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->homebutton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->homebutton->FlatAppearance->BorderSize = 3;
			this->homebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homebutton->Location = System::Drawing::Point(0, 0);
			this->homebutton->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->homebutton->Name = L"homebutton";
			this->homebutton->Padding = System::Windows::Forms::Padding(5);
			this->homebutton->Size = System::Drawing::Size(155, 47);
			this->homebutton->TabIndex = 12;
			this->homebutton->Text = L"Main";
			this->homebutton->UseVisualStyleBackColor = false;
			this->homebutton->Click += gcnew System::EventHandler(this, &MyForm::homebutton_Click);
			// 
			// settingsbutton
			// 
			this->settingsbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->settingsbutton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->settingsbutton->FlatAppearance->BorderSize = 3;
			this->settingsbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingsbutton->Location = System::Drawing::Point(161, 0);
			this->settingsbutton->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->settingsbutton->Name = L"settingsbutton";
			this->settingsbutton->Padding = System::Windows::Forms::Padding(5);
			this->settingsbutton->Size = System::Drawing::Size(156, 47);
			this->settingsbutton->TabIndex = 13;
			this->settingsbutton->Text = L"Settings";
			this->settingsbutton->UseVisualStyleBackColor = false;
			this->settingsbutton->Click += gcnew System::EventHandler(this, &MyForm::settingsbutton_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->homebutton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->settingsbutton, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(867, 24);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(317, 68);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// settings
			// 
			this->settings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->settings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->settings->Controls->Add(this->label3);
			this->settings->Controls->Add(this->label2);
			this->settings->Controls->Add(this->trackwidth);
			this->settings->Controls->Add(this->pointsize);
			this->settings->Location = System::Drawing::Point(867, 76);
			this->settings->Name = L"settings";
			this->settings->Padding = System::Windows::Forms::Padding(20);
			this->settings->Size = System::Drawing::Size(317, 536);
			this->settings->TabIndex = 15;
			// 
			// main
			// 
			this->main->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->main->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->main->Controls->Add(this->maxtrack);
			this->main->Controls->Add(this->maxtracklabel);
			this->main->Controls->Add(this->Algorithm);
			this->main->Controls->Add(this->InputLabel);
			this->main->Controls->Add(this->submitbutton);
			this->main->Controls->Add(this->inputtracks);
			this->main->Controls->Add(this->values);
			this->main->Controls->Add(this->label1);
			this->main->Controls->Add(this->movement);
			this->main->Controls->Add(this->AlgoLabel);
			this->main->Location = System::Drawing::Point(867, 76);
			this->main->Name = L"main";
			this->main->Padding = System::Windows::Forms::Padding(20);
			this->main->Size = System::Drawing::Size(317, 536);
			this->main->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->ClientSize = System::Drawing::Size(1207, 635);
			this->Controls->Add(this->main);
			this->Controls->Add(this->settings);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->sched);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1225, 663);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(20);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Disk Sched";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sched))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackwidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pointsize))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->settings->ResumeLayout(false);
			this->settings->PerformLayout();
			this->main->ResumeLayout(false);
			this->main->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void submitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(inputtracks->Text))
		{
			MessageBox::Show("Tracks must not be empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			Yvalues->Clear();
			points->Clear();
			currentXvalue = 0.0;
			String^ selected = Algorithm->Text;
			String^ input = inputtracks->Text;
			Yvalues->AddRange(stringtodouble(input));

			if (selected == "SSTF") {
				Yvalues->AddRange(sortseektime(Yvalues));
			}
			else if (selected == "SCAN" || selected == "C-SCAN" || selected == "LOOK" || selected == "C-LOOK") {
				Yvalues->AddRange(scan(Yvalues));
			}

			if (!String::IsNullOrEmpty(maxtrack->Text))
			{
				sched->ChartAreas[0]->AxisY->Maximum = Convert::ToDouble(maxtrack->Text);
			}
			else
			{
				sched->ChartAreas[0]->AxisY->Maximum = Enumerable::Max(Yvalues);
			}
			
			points->AddRange(pairup(Yvalues));
			values->Items->Clear();
			update();
		}
	}
	private: System::Void trackwidth_Scroll(System::Object^ sender, System::EventArgs^ e) {
		sched->Series[0]->BorderWidth = trackwidth->Value;
	}
	private: System::Void pointsize_Scroll(System::Object^ sender, System::EventArgs^ e) {
		sched->Series[1]->MarkerSize = pointsize->Value;
	}

	
	
	private: System::Void inputtracks_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			submitbutton->PerformClick();
		}
	}
	private: System::Void homebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		main->Visible = true;
		settings->Visible = false;
		homebutton->BackColor = Color::FromArgb(238, 233, 218);
		settingsbutton->BackColor = Color::FromArgb(189, 205, 214);
		settingsbutton->Width = 156;
		settingsbutton->Height = 47;
		homebutton->Width = 156;
		homebutton->Height = 55;
		settingsbutton->FlatAppearance->BorderSize = 3;
		homebutton->FlatAppearance->BorderSize = 0;
	}
	private: System::Void settingsbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		main->Visible = false;
		settings->Visible = true;
		homebutton->BackColor = Color::FromArgb(189, 205, 214);
		settingsbutton->BackColor = Color::FromArgb(238, 233, 218);
		settingsbutton->Width = 156;
		settingsbutton->Height = 55;
		homebutton->Width = 156;
		homebutton->Height = 47;
		settingsbutton->FlatAppearance->BorderSize = 0;
		homebutton->FlatAppearance->BorderSize = 3;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Algorithm->Items->Add("FCFS");
		Algorithm->Items->Add("SSTF");
		Algorithm->Items->Add("SCAN");
		Algorithm->Items->Add("C-SCAN");
		Algorithm->Items->Add("LOOK");
		Algorithm->Items->Add("C-LOOK");
		Algorithm->SelectedIndex = 0;
		sched->ChartAreas[0]->AxisY->Maximum = 100.0;
		sched->ChartAreas[0]->AxisY->Minimum = 0.0;
		sched->ChartAreas[0]->AxisX->Minimum = 0.0;
		sched->Series[2]->Points->AddXY(0.0, 100);
		sched->Series[2]->Points->AddXY(1.0, 100);
		sched->Series[2]->Points->AddXY(2.0, 100);
		sched->Series[2]->Points->AddXY(3.0, 100);
		homebutton->PerformClick();
	}



	private: List<double>^ stringtodouble(String^ input) {
		List<double>^ resultList = gcnew List<double>();

		array<String^>^ values = input->Split(' ');

		for each (String ^ value in values) {
			double result = 0.0;
			if (Double::TryParse(value, result)) {
				resultList->Add(result);
			}
		}
		return resultList;
	}

	private: List<Tuple<double, double>^>^ pairup(List<double>^ requests) {
		List<Tuple<double, double>^>^ schedule = gcnew List<Tuple<double, double>^>();

		for each (double request in requests) {
			double y = request;
			schedule->Add(gcnew Tuple<double, double>(currentXvalue, y));
			currentXvalue += 1;

		}

		return schedule;
	}
	private: List<double>^ sortseektime(List<double>^ requests) {
		double initialHeadPosition = requests[0];
		List<double>^ request_dup = gcnew List<double>(requests->Count);
		request_dup->AddRange(requests);

		List<double>^ result = gcnew List<double>();

		while (request_dup->Count > 0)
		{
			double minSeekTime = Double::MaxValue;
			double nextRequest = -1;

			for each (double request in request_dup)
			{
				double seekTime = Math::Abs(initialHeadPosition - request);

				if (seekTime < minSeekTime)
				{
					minSeekTime = seekTime;
					nextRequest = request;
				}
			}

			result->Add(nextRequest);
			initialHeadPosition = nextRequest;

			request_dup->Remove(nextRequest);
		}
		Yvalues->Clear();
		return result;
	}

	private: List<double>^ scan(List<double>^ requests)
	{
		if (Algorithm->Text == "SCAN" || Algorithm->Text == "C-SCAN") {
			double max = sched->ChartAreas[0]->AxisY->Maximum;
			if (Enumerable::Max(Yvalues) != max && !Double::IsNaN(max))
			{
				Yvalues->Add(max);
			}
			if (Algorithm->Text == "C-SCAN") {
				double min = sched->ChartAreas[0]->AxisY->Minimum;
				if (Enumerable::Min(Yvalues) != min && !Double::IsNaN(min))
				{
					Yvalues->Add(min);
				}
			}
		}
		List<double>^ result = gcnew List<double>();
		List<double>^ lower = gcnew List<double>();
		List<double>^ upper = gcnew List<double>();
		for each (double request in requests)
		{
			if (request < requests[0])
				lower->Add(request);
			else
				upper->Add(request);
		}

		lower->Sort();
		upper->Sort();
		if (Algorithm->Text == "SCAN" || Algorithm->Text == "LOOK") {
			lower->Reverse();
		}

		for each (double request in upper)
		{
			result->Add(request);
		}

		for each (double request in lower)
		{
			result->Add(request);
		}

		Yvalues->Clear();
		return result;
	}

	private: double totalmovement(List<double>^ requests) {
		double totalMovement = 0.0;

		for (int i = 1; i < requests->Count; ++i) {
			totalMovement += Math::Abs(requests[i] - requests[i - 1]);
		}

		return totalMovement;
	}

	private: void update() {
		values->Items->Clear();
		for (int i = 0; i < points->Count; ++i) {
			Tuple<double, double>^ point = points[i];
			values->Items->Add((i + 1) + ".\tX: " + point->Item1 + ", Y: " + point->Item2);
		}

		sched->Series[0]->Points->Clear();
		sched->Series[1]->Points->Clear();

		for each (Tuple<double, double> ^ point in points) {
			sched->Series[0]->Points->AddXY(point->Item1, point->Item2);
			sched->Series[1]->Points->AddXY(point->Item1, point->Item2);
		}


		movement->Text = "Total Movement: " + Convert::ToString(totalmovement(Yvalues));
	}
};
}
