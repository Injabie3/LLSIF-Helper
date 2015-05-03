#pragma once

namespace LLSIFAssistant2013 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabTokenCollection;
	private: System::Windows::Forms::TabPage^  tabScoreMatch;
	protected:


	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::NumericUpDown^  controlToken_CurrentTokens;

	private: System::Windows::Forms::NumericUpDown^  controlToken_CurrentPoints;

	private: System::Windows::Forms::Label^  labelToken_CurrentTokens;
	private: System::Windows::Forms::Label^  labelToken_CurrentPoints;




	private: System::Windows::Forms::Label^  labelToken_Difficulty;
	private: System::Windows::Forms::ComboBox^  controlToken_Difficulty;
	private: System::Windows::Forms::Button^  buttonToken_Calculate;





	private: System::Windows::Forms::Label^  labelToken_AveragePoints;

	private: System::Windows::Forms::NumericUpDown^  controlToken_AveragePoints;
	private: System::Windows::Forms::Label^  labelToken_EstimatedPoints;
	private: System::Windows::Forms::Label^  labelToken_Result;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabTokenCollection = (gcnew System::Windows::Forms::TabPage());
			this->controlToken_CurrentTokens = (gcnew System::Windows::Forms::NumericUpDown());
			this->controlToken_CurrentPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_CurrentTokens = (gcnew System::Windows::Forms::Label());
			this->labelToken_CurrentPoints = (gcnew System::Windows::Forms::Label());
			this->tabScoreMatch = (gcnew System::Windows::Forms::TabPage());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->controlToken_Difficulty = (gcnew System::Windows::Forms::ComboBox());
			this->labelToken_Difficulty = (gcnew System::Windows::Forms::Label());
			this->controlToken_AveragePoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_AveragePoints = (gcnew System::Windows::Forms::Label());
			this->buttonToken_Calculate = (gcnew System::Windows::Forms::Button());
			this->labelToken_Result = (gcnew System::Windows::Forms::Label());
			this->labelToken_EstimatedPoints = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabTokenCollection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentTokens))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentPoints))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_AveragePoints))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabTokenCollection);
			this->tabControl1->Controls->Add(this->tabScoreMatch);
			this->tabControl1->Location = System::Drawing::Point(12, 36);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(448, 213);
			this->tabControl1->TabIndex = 0;
			// 
			// tabTokenCollection
			// 
			this->tabTokenCollection->Controls->Add(this->labelToken_EstimatedPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_Result);
			this->tabTokenCollection->Controls->Add(this->buttonToken_Calculate);
			this->tabTokenCollection->Controls->Add(this->labelToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->controlToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_Difficulty);
			this->tabTokenCollection->Controls->Add(this->controlToken_Difficulty);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentPoints);
			this->tabTokenCollection->Location = System::Drawing::Point(4, 22);
			this->tabTokenCollection->Name = L"tabTokenCollection";
			this->tabTokenCollection->Padding = System::Windows::Forms::Padding(3);
			this->tabTokenCollection->Size = System::Drawing::Size(440, 187);
			this->tabTokenCollection->TabIndex = 0;
			this->tabTokenCollection->Text = L"Token Collection";
			this->tabTokenCollection->UseVisualStyleBackColor = true;
			this->tabTokenCollection->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// controlToken_CurrentTokens
			// 
			this->controlToken_CurrentTokens->Location = System::Drawing::Point(96, 47);
			this->controlToken_CurrentTokens->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentTokens->Name = L"controlToken_CurrentTokens";
			this->controlToken_CurrentTokens->Size = System::Drawing::Size(100, 20);
			this->controlToken_CurrentTokens->TabIndex = 4;
			// 
			// controlToken_CurrentPoints
			// 
			this->controlToken_CurrentPoints->Location = System::Drawing::Point(96, 21);
			this->controlToken_CurrentPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentPoints->Name = L"controlToken_CurrentPoints";
			this->controlToken_CurrentPoints->Size = System::Drawing::Size(100, 20);
			this->controlToken_CurrentPoints->TabIndex = 3;
			// 
			// labelToken_CurrentTokens
			// 
			this->labelToken_CurrentTokens->AutoSize = true;
			this->labelToken_CurrentTokens->Location = System::Drawing::Point(7, 49);
			this->labelToken_CurrentTokens->Name = L"labelToken_CurrentTokens";
			this->labelToken_CurrentTokens->Size = System::Drawing::Size(83, 13);
			this->labelToken_CurrentTokens->TabIndex = 1;
			this->labelToken_CurrentTokens->Text = L"Current Tokens:";
			// 
			// labelToken_CurrentPoints
			// 
			this->labelToken_CurrentPoints->AutoSize = true;
			this->labelToken_CurrentPoints->Location = System::Drawing::Point(14, 23);
			this->labelToken_CurrentPoints->Name = L"labelToken_CurrentPoints";
			this->labelToken_CurrentPoints->Size = System::Drawing::Size(76, 13);
			this->labelToken_CurrentPoints->TabIndex = 0;
			this->labelToken_CurrentPoints->Text = L"Current Points:";
			// 
			// tabScoreMatch
			// 
			this->tabScoreMatch->Location = System::Drawing::Point(4, 22);
			this->tabScoreMatch->Name = L"tabScoreMatch";
			this->tabScoreMatch->Padding = System::Windows::Forms::Padding(3);
			this->tabScoreMatch->Size = System::Drawing::Size(440, 187);
			this->tabScoreMatch->TabIndex = 1;
			this->tabScoreMatch->Text = L"Score Match";
			this->tabScoreMatch->UseVisualStyleBackColor = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 265);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(472, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(472, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// controlToken_Difficulty
			// 
			this->controlToken_Difficulty->FormattingEnabled = true;
			this->controlToken_Difficulty->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Easy", L"Normal", L"Hard", L"Expert" });
			this->controlToken_Difficulty->Location = System::Drawing::Point(96, 73);
			this->controlToken_Difficulty->Name = L"controlToken_Difficulty";
			this->controlToken_Difficulty->Size = System::Drawing::Size(100, 21);
			this->controlToken_Difficulty->TabIndex = 5;
			// 
			// labelToken_Difficulty
			// 
			this->labelToken_Difficulty->AutoSize = true;
			this->labelToken_Difficulty->Location = System::Drawing::Point(40, 76);
			this->labelToken_Difficulty->Name = L"labelToken_Difficulty";
			this->labelToken_Difficulty->Size = System::Drawing::Size(50, 13);
			this->labelToken_Difficulty->TabIndex = 6;
			this->labelToken_Difficulty->Text = L"Difficulty:";
			// 
			// controlToken_AveragePoints
			// 
			this->controlToken_AveragePoints->Location = System::Drawing::Point(96, 100);
			this->controlToken_AveragePoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_AveragePoints->Name = L"controlToken_AveragePoints";
			this->controlToken_AveragePoints->Size = System::Drawing::Size(100, 20);
			this->controlToken_AveragePoints->TabIndex = 7;
			// 
			// labelToken_AveragePoints
			// 
			this->labelToken_AveragePoints->AutoSize = true;
			this->labelToken_AveragePoints->Location = System::Drawing::Point(8, 102);
			this->labelToken_AveragePoints->Name = L"labelToken_AveragePoints";
			this->labelToken_AveragePoints->Size = System::Drawing::Size(82, 13);
			this->labelToken_AveragePoints->TabIndex = 8;
			this->labelToken_AveragePoints->Text = L"Average Points:";
			// 
			// buttonToken_Calculate
			// 
			this->buttonToken_Calculate->Location = System::Drawing::Point(15, 149);
			this->buttonToken_Calculate->Name = L"buttonToken_Calculate";
			this->buttonToken_Calculate->Size = System::Drawing::Size(75, 23);
			this->buttonToken_Calculate->TabIndex = 9;
			this->buttonToken_Calculate->Text = L"Calculate";
			this->buttonToken_Calculate->UseVisualStyleBackColor = true;
			this->buttonToken_Calculate->Click += gcnew System::EventHandler(this, &MyForm::buttonToken_Calculate_Click);
			// 
			// labelToken_Result
			// 
			this->labelToken_Result->AutoSize = true;
			this->labelToken_Result->Location = System::Drawing::Point(106, 154);
			this->labelToken_Result->Name = L"labelToken_Result";
			this->labelToken_Result->Size = System::Drawing::Size(119, 13);
			this->labelToken_Result->TabIndex = 10;
			this->labelToken_Result->Text = L"Estimated Event Points:";
			// 
			// labelToken_EstimatedPoints
			// 
			this->labelToken_EstimatedPoints->AutoSize = true;
			this->labelToken_EstimatedPoints->Location = System::Drawing::Point(231, 154);
			this->labelToken_EstimatedPoints->Name = L"labelToken_EstimatedPoints";
			this->labelToken_EstimatedPoints->Size = System::Drawing::Size(47, 13);
			this->labelToken_EstimatedPoints->TabIndex = 11;
			this->labelToken_EstimatedPoints->Text = L"<points>";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 287);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabTokenCollection->ResumeLayout(false);
			this->tabTokenCollection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentTokens))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentPoints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_AveragePoints))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonToken_Calculate_Click(System::Object^  sender, System::EventArgs^  e) {

}
}
