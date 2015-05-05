#pragma once
#include "uiAbout.h"

//Define some classes here.
tokenCollection Tracker;

namespace LLSIFAssistant2013 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// The Main UI for LLSIF Helper
	/// </summary>
	public ref class uiMain : public System::Windows::Forms::Form
	{
	public:
		uiMain(void)
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
		~uiMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabTokenCollection;
	private: System::Windows::Forms::TabPage^  tabScoreMatch;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	protected:



	private: System::Windows::Forms::MenuStrip^  menuStrip;

	private: System::Windows::Forms::NumericUpDown^  controlToken_CurrentTokens;

	private: System::Windows::Forms::NumericUpDown^  controlToken_CurrentPoints;

	private: System::Windows::Forms::Label^  labelToken_CurrentTokens;
	private: System::Windows::Forms::Label^  labelToken_CurrentPoints;
	private: System::Windows::Forms::Label^  labelToken_DifficultySelection;






	private: System::Windows::Forms::Button^  buttonToken_Calculate;





	private: System::Windows::Forms::Label^  labelToken_AveragePoints;

	private: System::Windows::Forms::NumericUpDown^  controlToken_AveragePoints;
	private: System::Windows::Forms::Label^  labelToken_EstimatedPoints;
	private: System::Windows::Forms::Label^  labelToken_Result;
	private: System::Windows::Forms::Button^  controlDifficultyExpert;
	private: System::Windows::Forms::Button^  controlDifficultyHard;
	private: System::Windows::Forms::Button^  controlDifficultyNormal;
	private: System::Windows::Forms::Button^  controlDifficultyEasy;
	private: System::Windows::Forms::Label^  labelToken_Difficulty;

	private: System::Windows::Forms::Label^  labelToken_SelectedDifficulty;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_File;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_File_Exit;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_Help;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_Help_About;






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
			this->labelToken_Difficulty = (gcnew System::Windows::Forms::Label());
			this->labelToken_SelectedDifficulty = (gcnew System::Windows::Forms::Label());
			this->controlDifficultyExpert = (gcnew System::Windows::Forms::Button());
			this->controlDifficultyHard = (gcnew System::Windows::Forms::Button());
			this->controlDifficultyNormal = (gcnew System::Windows::Forms::Button());
			this->controlDifficultyEasy = (gcnew System::Windows::Forms::Button());
			this->labelToken_EstimatedPoints = (gcnew System::Windows::Forms::Label());
			this->labelToken_Result = (gcnew System::Windows::Forms::Label());
			this->buttonToken_Calculate = (gcnew System::Windows::Forms::Button());
			this->labelToken_AveragePoints = (gcnew System::Windows::Forms::Label());
			this->controlToken_AveragePoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_DifficultySelection = (gcnew System::Windows::Forms::Label());
			this->controlToken_CurrentTokens = (gcnew System::Windows::Forms::NumericUpDown());
			this->controlToken_CurrentPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_CurrentTokens = (gcnew System::Windows::Forms::Label());
			this->labelToken_CurrentPoints = (gcnew System::Windows::Forms::Label());
			this->tabScoreMatch = (gcnew System::Windows::Forms::TabPage());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip_File = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_File_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Help = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip_Help_About = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabTokenCollection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_AveragePoints))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentTokens))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentPoints))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabTokenCollection);
			this->tabControl1->Controls->Add(this->tabScoreMatch);
			this->tabControl1->Location = System::Drawing::Point(12, 36);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(448, 248);
			this->tabControl1->TabIndex = 0;
			// 
			// tabTokenCollection
			// 
			this->tabTokenCollection->Controls->Add(this->labelToken_Difficulty);
			this->tabTokenCollection->Controls->Add(this->labelToken_SelectedDifficulty);
			this->tabTokenCollection->Controls->Add(this->controlDifficultyExpert);
			this->tabTokenCollection->Controls->Add(this->controlDifficultyHard);
			this->tabTokenCollection->Controls->Add(this->controlDifficultyNormal);
			this->tabTokenCollection->Controls->Add(this->controlDifficultyEasy);
			this->tabTokenCollection->Controls->Add(this->labelToken_EstimatedPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_Result);
			this->tabTokenCollection->Controls->Add(this->buttonToken_Calculate);
			this->tabTokenCollection->Controls->Add(this->labelToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->controlToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_DifficultySelection);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentPoints);
			this->tabTokenCollection->Location = System::Drawing::Point(4, 22);
			this->tabTokenCollection->Name = L"tabTokenCollection";
			this->tabTokenCollection->Padding = System::Windows::Forms::Padding(3);
			this->tabTokenCollection->Size = System::Drawing::Size(440, 222);
			this->tabTokenCollection->TabIndex = 0;
			this->tabTokenCollection->Text = L"Token Collection";
			this->tabTokenCollection->UseVisualStyleBackColor = true;
			// 
			// labelToken_Difficulty
			// 
			this->labelToken_Difficulty->AutoSize = true;
			this->labelToken_Difficulty->Location = System::Drawing::Point(152, 131);
			this->labelToken_Difficulty->Name = L"labelToken_Difficulty";
			this->labelToken_Difficulty->Size = System::Drawing::Size(123, 13);
			this->labelToken_Difficulty->TabIndex = 17;
			this->labelToken_Difficulty->Text = L"Please select a difficulty.";
			// 
			// labelToken_SelectedDifficulty
			// 
			this->labelToken_SelectedDifficulty->AutoSize = true;
			this->labelToken_SelectedDifficulty->Location = System::Drawing::Point(54, 131);
			this->labelToken_SelectedDifficulty->Name = L"labelToken_SelectedDifficulty";
			this->labelToken_SelectedDifficulty->Size = System::Drawing::Size(95, 13);
			this->labelToken_SelectedDifficulty->TabIndex = 16;
			this->labelToken_SelectedDifficulty->Text = L"Selected Difficulty:";
			// 
			// controlDifficultyExpert
			// 
			this->controlDifficultyExpert->Location = System::Drawing::Point(332, 102);
			this->controlDifficultyExpert->Name = L"controlDifficultyExpert";
			this->controlDifficultyExpert->Size = System::Drawing::Size(53, 23);
			this->controlDifficultyExpert->TabIndex = 7;
			this->controlDifficultyExpert->Text = L"Expert";
			this->controlDifficultyExpert->UseVisualStyleBackColor = true;
			this->controlDifficultyExpert->Click += gcnew System::EventHandler(this, &uiMain::controlDifficultyExpert_Click);
			// 
			// controlDifficultyHard
			// 
			this->controlDifficultyHard->Location = System::Drawing::Point(273, 102);
			this->controlDifficultyHard->Name = L"controlDifficultyHard";
			this->controlDifficultyHard->Size = System::Drawing::Size(53, 23);
			this->controlDifficultyHard->TabIndex = 6;
			this->controlDifficultyHard->Text = L"Hard";
			this->controlDifficultyHard->UseVisualStyleBackColor = true;
			this->controlDifficultyHard->Click += gcnew System::EventHandler(this, &uiMain::controlDifficultyHard_Click);
			// 
			// controlDifficultyNormal
			// 
			this->controlDifficultyNormal->Location = System::Drawing::Point(214, 102);
			this->controlDifficultyNormal->Name = L"controlDifficultyNormal";
			this->controlDifficultyNormal->Size = System::Drawing::Size(53, 23);
			this->controlDifficultyNormal->TabIndex = 5;
			this->controlDifficultyNormal->Text = L"Normal";
			this->controlDifficultyNormal->UseVisualStyleBackColor = true;
			this->controlDifficultyNormal->Click += gcnew System::EventHandler(this, &uiMain::controlDifficultyNormal_Click);
			// 
			// controlDifficultyEasy
			// 
			this->controlDifficultyEasy->Location = System::Drawing::Point(155, 102);
			this->controlDifficultyEasy->Name = L"controlDifficultyEasy";
			this->controlDifficultyEasy->Size = System::Drawing::Size(53, 23);
			this->controlDifficultyEasy->TabIndex = 4;
			this->controlDifficultyEasy->Text = L"Easy";
			this->controlDifficultyEasy->UseVisualStyleBackColor = true;
			this->controlDifficultyEasy->Click += gcnew System::EventHandler(this, &uiMain::controlDifficultyEasy_Click);
			// 
			// labelToken_EstimatedPoints
			// 
			this->labelToken_EstimatedPoints->AutoSize = true;
			this->labelToken_EstimatedPoints->Location = System::Drawing::Point(152, 154);
			this->labelToken_EstimatedPoints->Name = L"labelToken_EstimatedPoints";
			this->labelToken_EstimatedPoints->Size = System::Drawing::Size(172, 13);
			this->labelToken_EstimatedPoints->TabIndex = 11;
			this->labelToken_EstimatedPoints->Text = L"Click Calculate to determine points.";
			// 
			// labelToken_Result
			// 
			this->labelToken_Result->AutoSize = true;
			this->labelToken_Result->Location = System::Drawing::Point(30, 154);
			this->labelToken_Result->Name = L"labelToken_Result";
			this->labelToken_Result->Size = System::Drawing::Size(119, 13);
			this->labelToken_Result->TabIndex = 10;
			this->labelToken_Result->Text = L"Estimated Event Points:";
			// 
			// buttonToken_Calculate
			// 
			this->buttonToken_Calculate->Location = System::Drawing::Point(169, 186);
			this->buttonToken_Calculate->Name = L"buttonToken_Calculate";
			this->buttonToken_Calculate->Size = System::Drawing::Size(75, 23);
			this->buttonToken_Calculate->TabIndex = 8;
			this->buttonToken_Calculate->Text = L"Calculate";
			this->buttonToken_Calculate->UseVisualStyleBackColor = true;
			this->buttonToken_Calculate->Click += gcnew System::EventHandler(this, &uiMain::buttonToken_Calculate_Click);
			// 
			// labelToken_AveragePoints
			// 
			this->labelToken_AveragePoints->AutoSize = true;
			this->labelToken_AveragePoints->Location = System::Drawing::Point(67, 78);
			this->labelToken_AveragePoints->Name = L"labelToken_AveragePoints";
			this->labelToken_AveragePoints->Size = System::Drawing::Size(82, 13);
			this->labelToken_AveragePoints->TabIndex = 8;
			this->labelToken_AveragePoints->Text = L"Average Points:";
			// 
			// controlToken_AveragePoints
			// 
			this->controlToken_AveragePoints->Location = System::Drawing::Point(155, 76);
			this->controlToken_AveragePoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_AveragePoints->Name = L"controlToken_AveragePoints";
			this->controlToken_AveragePoints->Size = System::Drawing::Size(100, 20);
			this->controlToken_AveragePoints->TabIndex = 3;
			// 
			// labelToken_DifficultySelection
			// 
			this->labelToken_DifficultySelection->AutoSize = true;
			this->labelToken_DifficultySelection->Location = System::Drawing::Point(99, 107);
			this->labelToken_DifficultySelection->Name = L"labelToken_DifficultySelection";
			this->labelToken_DifficultySelection->Size = System::Drawing::Size(50, 13);
			this->labelToken_DifficultySelection->TabIndex = 6;
			this->labelToken_DifficultySelection->Text = L"Difficulty:";
			// 
			// controlToken_CurrentTokens
			// 
			this->controlToken_CurrentTokens->Location = System::Drawing::Point(155, 50);
			this->controlToken_CurrentTokens->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentTokens->Name = L"controlToken_CurrentTokens";
			this->controlToken_CurrentTokens->Size = System::Drawing::Size(100, 20);
			this->controlToken_CurrentTokens->TabIndex = 2;
			// 
			// controlToken_CurrentPoints
			// 
			this->controlToken_CurrentPoints->Location = System::Drawing::Point(155, 24);
			this->controlToken_CurrentPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentPoints->Name = L"controlToken_CurrentPoints";
			this->controlToken_CurrentPoints->Size = System::Drawing::Size(100, 20);
			this->controlToken_CurrentPoints->TabIndex = 1;
			// 
			// labelToken_CurrentTokens
			// 
			this->labelToken_CurrentTokens->AutoSize = true;
			this->labelToken_CurrentTokens->Location = System::Drawing::Point(66, 52);
			this->labelToken_CurrentTokens->Name = L"labelToken_CurrentTokens";
			this->labelToken_CurrentTokens->Size = System::Drawing::Size(83, 13);
			this->labelToken_CurrentTokens->TabIndex = 1;
			this->labelToken_CurrentTokens->Text = L"Current Tokens:";
			// 
			// labelToken_CurrentPoints
			// 
			this->labelToken_CurrentPoints->AutoSize = true;
			this->labelToken_CurrentPoints->Location = System::Drawing::Point(73, 26);
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
			this->tabScoreMatch->Size = System::Drawing::Size(440, 222);
			this->tabScoreMatch->TabIndex = 1;
			this->tabScoreMatch->Text = L"Score Match";
			this->tabScoreMatch->UseVisualStyleBackColor = true;
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 301);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(472, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->menuStrip_File, this->menuStrip_Help });
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(472, 24);
			this->menuStrip->TabIndex = 2;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// menuStrip_File
			// 
			this->menuStrip_File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuStrip_File_Exit });
			this->menuStrip_File->Name = L"menuStrip_File";
			this->menuStrip_File->Size = System::Drawing::Size(39, 20);
			this->menuStrip_File->Text = L"File";
			// 
			// menuStrip_File_Exit
			// 
			this->menuStrip_File_Exit->Name = L"menuStrip_File_Exit";
			this->menuStrip_File_Exit->Size = System::Drawing::Size(96, 22);
			this->menuStrip_File_Exit->Text = L"Exit";
			this->menuStrip_File_Exit->Click += gcnew System::EventHandler(this, &uiMain::menuStrip_File_Exit_Click);
			// 
			// menuStrip_Help
			// 
			this->menuStrip_Help->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuStrip_Help_About });
			this->menuStrip_Help->Name = L"menuStrip_Help";
			this->menuStrip_Help->Size = System::Drawing::Size(45, 20);
			this->menuStrip_Help->Text = L"Help";
			// 
			// menuStrip_Help_About
			// 
			this->menuStrip_Help_About->Name = L"menuStrip_Help_About";
			this->menuStrip_Help_About->Size = System::Drawing::Size(152, 22);
			this->menuStrip_Help_About->Text = L"About";
			this->menuStrip_Help_About->Click += gcnew System::EventHandler(this, &uiMain::menuStrip_Help_About_Click);
			// 
			// uiMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 323);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"uiMain";
			this->Text = L"LLSIF Helper";
			this->tabControl1->ResumeLayout(false);
			this->tabTokenCollection->ResumeLayout(false);
			this->tabTokenCollection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_AveragePoints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentTokens))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentPoints))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonToken_Calculate_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Tracker.getDifficulty() == 0)
		{
			labelToken_EstimatedPoints->Text = "Please set difficulty!";
			return;
		}
		Tracker.setData(Convert::ToInt32(controlToken_CurrentPoints->Value), Convert::ToInt32(controlToken_CurrentTokens->Value), Convert::ToInt32(controlToken_AveragePoints->Value));
		Tracker.calculateEstimatedPoints();
		labelToken_EstimatedPoints->Text = Convert::ToString(Tracker.getEstimatedPoints());
	}
private: System::Void controlDifficultyEasy_Click(System::Object^  sender, System::EventArgs^  e) {
	Tracker.setDifficulty(1);
	this->labelToken_Difficulty->Text = "Easy";
}
private: System::Void controlDifficultyNormal_Click(System::Object^  sender, System::EventArgs^  e) {
	Tracker.setDifficulty(2);
	this->labelToken_Difficulty->Text = "Normal";
}
private: System::Void controlDifficultyHard_Click(System::Object^  sender, System::EventArgs^  e) {
	Tracker.setDifficulty(3);
	this->labelToken_Difficulty->Text = "Hard";
}
private: System::Void controlDifficultyExpert_Click(System::Object^  sender, System::EventArgs^  e) {
	Tracker.setDifficulty(4);
	this->labelToken_Difficulty->Text = "Expert";
}
private: System::Void menuStrip_File_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void menuStrip_Help_About_Click(System::Object^  sender, System::EventArgs^  e) {
	uiAbout FormAbout;
	FormAbout.Show();
}
};
}