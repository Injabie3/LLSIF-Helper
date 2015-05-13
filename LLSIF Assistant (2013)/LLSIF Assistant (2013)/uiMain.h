#pragma once
#include "uiAbout.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>

//Define some classes here.
tokenCollection tokenTracker;
scoreMatch scoreMatchTracker;

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
	private: System::Windows::Forms::Button^  controlToken_Calculate;












	private: System::Windows::Forms::Label^  labelToken_AveragePoints;

	private: System::Windows::Forms::NumericUpDown^  controlToken_AveragePoints;
	private: System::Windows::Forms::Label^  labelToken_EstimatedPoints;
	private: System::Windows::Forms::Label^  labelToken_Result;
	private: System::Windows::Forms::Button^  controlToken_DifficultyExpert;

	private: System::Windows::Forms::Button^  controlToken_DifficultyHard;

	private: System::Windows::Forms::Button^  controlToken_DifficultyNormal;

	private: System::Windows::Forms::Button^  controlToken_DifficultyEasy;

	private: System::Windows::Forms::Label^  labelToken_Difficulty;

	private: System::Windows::Forms::Label^  labelToken_SelectedDifficulty;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_File;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_File_Exit;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_Help;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStrip_Help_About;
	private: System::Windows::Forms::Label^  labelSM_Difficulty;

	private: System::Windows::Forms::Label^  labelSM_SelectedDifficulty;

	private: System::Windows::Forms::Button^  controlSM_DifficultyExpert;

	private: System::Windows::Forms::Button^  controlSM_DifficultyHard;

	private: System::Windows::Forms::Button^  controlSM_DifficultyNormal;


	private: System::Windows::Forms::Button^  controlSM_DifficultyEasy;
	private: System::Windows::Forms::Label^  labelSM_EstimatedLP;


	private: System::Windows::Forms::Label^  labelSM_Result;



	private: System::Windows::Forms::Label^  labelSM_AveragePoints;
	private: System::Windows::Forms::NumericUpDown^  controlSM_AveragePoints;


	private: System::Windows::Forms::Label^  labelSM_DifficultySelection;


	private: System::Windows::Forms::NumericUpDown^  controlSM_PointGoal;

	private: System::Windows::Forms::NumericUpDown^  controlSM_CurrentPoints;

	private: System::Windows::Forms::Label^  labelSM_PointGoal;


	private: System::Windows::Forms::Label^  labelSM_CurrentPoints;
private: System::Windows::Forms::TabPage^  tabRankUp;
private: System::Windows::Forms::Button^  controlToken_SaveData;
private: System::Windows::Forms::Button^  controlToken_LoadData;
private: System::Windows::Forms::Button^  controlSM_SaveData;

private: System::Windows::Forms::Button^  controlSM_LoadData;

private: System::Windows::Forms::Button^  controlSM_Calculate;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(uiMain::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabTokenCollection = (gcnew System::Windows::Forms::TabPage());
			this->controlToken_SaveData = (gcnew System::Windows::Forms::Button());
			this->controlToken_LoadData = (gcnew System::Windows::Forms::Button());
			this->labelToken_Difficulty = (gcnew System::Windows::Forms::Label());
			this->labelToken_SelectedDifficulty = (gcnew System::Windows::Forms::Label());
			this->controlToken_DifficultyExpert = (gcnew System::Windows::Forms::Button());
			this->controlToken_DifficultyHard = (gcnew System::Windows::Forms::Button());
			this->controlToken_DifficultyNormal = (gcnew System::Windows::Forms::Button());
			this->controlToken_DifficultyEasy = (gcnew System::Windows::Forms::Button());
			this->labelToken_EstimatedPoints = (gcnew System::Windows::Forms::Label());
			this->labelToken_Result = (gcnew System::Windows::Forms::Label());
			this->controlToken_Calculate = (gcnew System::Windows::Forms::Button());
			this->labelToken_AveragePoints = (gcnew System::Windows::Forms::Label());
			this->controlToken_AveragePoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_DifficultySelection = (gcnew System::Windows::Forms::Label());
			this->controlToken_CurrentTokens = (gcnew System::Windows::Forms::NumericUpDown());
			this->controlToken_CurrentPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelToken_CurrentTokens = (gcnew System::Windows::Forms::Label());
			this->labelToken_CurrentPoints = (gcnew System::Windows::Forms::Label());
			this->tabScoreMatch = (gcnew System::Windows::Forms::TabPage());
			this->controlSM_SaveData = (gcnew System::Windows::Forms::Button());
			this->controlSM_LoadData = (gcnew System::Windows::Forms::Button());
			this->labelSM_Difficulty = (gcnew System::Windows::Forms::Label());
			this->labelSM_SelectedDifficulty = (gcnew System::Windows::Forms::Label());
			this->controlSM_DifficultyExpert = (gcnew System::Windows::Forms::Button());
			this->controlSM_DifficultyHard = (gcnew System::Windows::Forms::Button());
			this->controlSM_DifficultyNormal = (gcnew System::Windows::Forms::Button());
			this->controlSM_DifficultyEasy = (gcnew System::Windows::Forms::Button());
			this->labelSM_EstimatedLP = (gcnew System::Windows::Forms::Label());
			this->labelSM_Result = (gcnew System::Windows::Forms::Label());
			this->controlSM_Calculate = (gcnew System::Windows::Forms::Button());
			this->labelSM_AveragePoints = (gcnew System::Windows::Forms::Label());
			this->controlSM_AveragePoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSM_DifficultySelection = (gcnew System::Windows::Forms::Label());
			this->controlSM_PointGoal = (gcnew System::Windows::Forms::NumericUpDown());
			this->controlSM_CurrentPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSM_PointGoal = (gcnew System::Windows::Forms::Label());
			this->labelSM_CurrentPoints = (gcnew System::Windows::Forms::Label());
			this->tabRankUp = (gcnew System::Windows::Forms::TabPage());
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
			this->tabScoreMatch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_AveragePoints))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_PointGoal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_CurrentPoints))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabTokenCollection);
			this->tabControl1->Controls->Add(this->tabScoreMatch);
			this->tabControl1->Controls->Add(this->tabRankUp);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->tabControl1->Location = System::Drawing::Point(20, 50);
			this->tabControl1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(767, 381);
			this->tabControl1->TabIndex = 0;
			// 
			// tabTokenCollection
			// 
			this->tabTokenCollection->Controls->Add(this->controlToken_SaveData);
			this->tabTokenCollection->Controls->Add(this->controlToken_LoadData);
			this->tabTokenCollection->Controls->Add(this->labelToken_Difficulty);
			this->tabTokenCollection->Controls->Add(this->labelToken_SelectedDifficulty);
			this->tabTokenCollection->Controls->Add(this->controlToken_DifficultyExpert);
			this->tabTokenCollection->Controls->Add(this->controlToken_DifficultyHard);
			this->tabTokenCollection->Controls->Add(this->controlToken_DifficultyNormal);
			this->tabTokenCollection->Controls->Add(this->controlToken_DifficultyEasy);
			this->tabTokenCollection->Controls->Add(this->labelToken_EstimatedPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_Result);
			this->tabTokenCollection->Controls->Add(this->controlToken_Calculate);
			this->tabTokenCollection->Controls->Add(this->labelToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->controlToken_AveragePoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_DifficultySelection);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->controlToken_CurrentPoints);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentTokens);
			this->tabTokenCollection->Controls->Add(this->labelToken_CurrentPoints);
			this->tabTokenCollection->Location = System::Drawing::Point(4, 32);
			this->tabTokenCollection->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabTokenCollection->Name = L"tabTokenCollection";
			this->tabTokenCollection->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabTokenCollection->Size = System::Drawing::Size(759, 345);
			this->tabTokenCollection->TabIndex = 0;
			this->tabTokenCollection->Text = L"Token Collection";
			// 
			// controlToken_SaveData
			// 
			this->controlToken_SaveData->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_SaveData->Location = System::Drawing::Point(457, 253);
			this->controlToken_SaveData->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_SaveData->Name = L"controlToken_SaveData";
			this->controlToken_SaveData->Size = System::Drawing::Size(140, 32);
			this->controlToken_SaveData->TabIndex = 10;
			this->controlToken_SaveData->Text = L"Save Data";
			this->controlToken_SaveData->UseVisualStyleBackColor = true;
			this->controlToken_SaveData->Click += gcnew System::EventHandler(this, &uiMain::controlToken_SaveData_Click);
			// 
			// controlToken_LoadData
			// 
			this->controlToken_LoadData->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_LoadData->Location = System::Drawing::Point(307, 253);
			this->controlToken_LoadData->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_LoadData->Name = L"controlToken_LoadData";
			this->controlToken_LoadData->Size = System::Drawing::Size(140, 32);
			this->controlToken_LoadData->TabIndex = 9;
			this->controlToken_LoadData->Text = L"Load Data";
			this->controlToken_LoadData->UseVisualStyleBackColor = true;
			this->controlToken_LoadData->Click += gcnew System::EventHandler(this, &uiMain::controlToken_LoadData_Click);
			// 
			// labelToken_Difficulty
			// 
			this->labelToken_Difficulty->AutoSize = true;
			this->labelToken_Difficulty->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_Difficulty->Location = System::Drawing::Point(303, 181);
			this->labelToken_Difficulty->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_Difficulty->Name = L"labelToken_Difficulty";
			this->labelToken_Difficulty->Size = System::Drawing::Size(222, 23);
			this->labelToken_Difficulty->TabIndex = 17;
			this->labelToken_Difficulty->Text = L"Please select a difficulty.";
			// 
			// labelToken_SelectedDifficulty
			// 
			this->labelToken_SelectedDifficulty->AutoSize = true;
			this->labelToken_SelectedDifficulty->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_SelectedDifficulty->Location = System::Drawing::Point(123, 181);
			this->labelToken_SelectedDifficulty->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_SelectedDifficulty->Name = L"labelToken_SelectedDifficulty";
			this->labelToken_SelectedDifficulty->Size = System::Drawing::Size(174, 23);
			this->labelToken_SelectedDifficulty->TabIndex = 16;
			this->labelToken_SelectedDifficulty->Text = L"Selected Difficulty:";
			// 
			// controlToken_DifficultyExpert
			// 
			this->controlToken_DifficultyExpert->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_DifficultyExpert->Location = System::Drawing::Point(602, 145);
			this->controlToken_DifficultyExpert->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_DifficultyExpert->Name = L"controlToken_DifficultyExpert";
			this->controlToken_DifficultyExpert->Size = System::Drawing::Size(88, 32);
			this->controlToken_DifficultyExpert->TabIndex = 7;
			this->controlToken_DifficultyExpert->Text = L"Expert";
			this->controlToken_DifficultyExpert->UseVisualStyleBackColor = true;
			this->controlToken_DifficultyExpert->Click += gcnew System::EventHandler(this, &uiMain::controlToken_DifficultyExpert_Click);
			// 
			// controlToken_DifficultyHard
			// 
			this->controlToken_DifficultyHard->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_DifficultyHard->Location = System::Drawing::Point(503, 145);
			this->controlToken_DifficultyHard->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_DifficultyHard->Name = L"controlToken_DifficultyHard";
			this->controlToken_DifficultyHard->Size = System::Drawing::Size(88, 32);
			this->controlToken_DifficultyHard->TabIndex = 6;
			this->controlToken_DifficultyHard->Text = L"Hard";
			this->controlToken_DifficultyHard->UseVisualStyleBackColor = true;
			this->controlToken_DifficultyHard->Click += gcnew System::EventHandler(this, &uiMain::controlToken_DifficultyHard_Click);
			// 
			// controlToken_DifficultyNormal
			// 
			this->controlToken_DifficultyNormal->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_DifficultyNormal->Location = System::Drawing::Point(405, 145);
			this->controlToken_DifficultyNormal->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_DifficultyNormal->Name = L"controlToken_DifficultyNormal";
			this->controlToken_DifficultyNormal->Size = System::Drawing::Size(88, 32);
			this->controlToken_DifficultyNormal->TabIndex = 5;
			this->controlToken_DifficultyNormal->Text = L"Normal";
			this->controlToken_DifficultyNormal->UseVisualStyleBackColor = true;
			this->controlToken_DifficultyNormal->Click += gcnew System::EventHandler(this, &uiMain::controlToken_DifficultyNormal_Click);
			// 
			// controlToken_DifficultyEasy
			// 
			this->controlToken_DifficultyEasy->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_DifficultyEasy->Location = System::Drawing::Point(307, 145);
			this->controlToken_DifficultyEasy->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_DifficultyEasy->Name = L"controlToken_DifficultyEasy";
			this->controlToken_DifficultyEasy->Size = System::Drawing::Size(88, 32);
			this->controlToken_DifficultyEasy->TabIndex = 4;
			this->controlToken_DifficultyEasy->Text = L"Easy";
			this->controlToken_DifficultyEasy->UseVisualStyleBackColor = true;
			this->controlToken_DifficultyEasy->Click += gcnew System::EventHandler(this, &uiMain::controlToken_DifficultyEasy_Click);
			// 
			// labelToken_EstimatedPoints
			// 
			this->labelToken_EstimatedPoints->AutoSize = true;
			this->labelToken_EstimatedPoints->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_EstimatedPoints->Location = System::Drawing::Point(303, 213);
			this->labelToken_EstimatedPoints->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_EstimatedPoints->Name = L"labelToken_EstimatedPoints";
			this->labelToken_EstimatedPoints->Size = System::Drawing::Size(320, 23);
			this->labelToken_EstimatedPoints->TabIndex = 11;
			this->labelToken_EstimatedPoints->Text = L"Click Calculate to determine points.";
			// 
			// labelToken_Result
			// 
			this->labelToken_Result->AutoSize = true;
			this->labelToken_Result->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_Result->Location = System::Drawing::Point(77, 213);
			this->labelToken_Result->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_Result->Name = L"labelToken_Result";
			this->labelToken_Result->Size = System::Drawing::Size(220, 23);
			this->labelToken_Result->TabIndex = 10;
			this->labelToken_Result->Text = L"Estimated Event Points:";
			// 
			// controlToken_Calculate
			// 
			this->controlToken_Calculate->BackColor = System::Drawing::Color::Transparent;
			this->controlToken_Calculate->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlToken_Calculate->Location = System::Drawing::Point(157, 253);
			this->controlToken_Calculate->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_Calculate->Name = L"controlToken_Calculate";
			this->controlToken_Calculate->Size = System::Drawing::Size(140, 32);
			this->controlToken_Calculate->TabIndex = 8;
			this->controlToken_Calculate->Text = L"Calculate";
			this->controlToken_Calculate->UseVisualStyleBackColor = false;
			this->controlToken_Calculate->Click += gcnew System::EventHandler(this, &uiMain::controlToken_Calculate_Click);
			// 
			// labelToken_AveragePoints
			// 
			this->labelToken_AveragePoints->AutoSize = true;
			this->labelToken_AveragePoints->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_AveragePoints->Location = System::Drawing::Point(149, 107);
			this->labelToken_AveragePoints->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_AveragePoints->Name = L"labelToken_AveragePoints";
			this->labelToken_AveragePoints->Size = System::Drawing::Size(148, 23);
			this->labelToken_AveragePoints->TabIndex = 8;
			this->labelToken_AveragePoints->Text = L"Average Points:";
			// 
			// controlToken_AveragePoints
			// 
			this->controlToken_AveragePoints->Location = System::Drawing::Point(307, 109);
			this->controlToken_AveragePoints->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_AveragePoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_AveragePoints->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->controlToken_AveragePoints->Name = L"controlToken_AveragePoints";
			this->controlToken_AveragePoints->Size = System::Drawing::Size(167, 30);
			this->controlToken_AveragePoints->TabIndex = 3;
			this->controlToken_AveragePoints->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelToken_DifficultySelection
			// 
			this->labelToken_DifficultySelection->AutoSize = true;
			this->labelToken_DifficultySelection->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_DifficultySelection->Location = System::Drawing::Point(202, 150);
			this->labelToken_DifficultySelection->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_DifficultySelection->Name = L"labelToken_DifficultySelection";
			this->labelToken_DifficultySelection->Size = System::Drawing::Size(95, 23);
			this->labelToken_DifficultySelection->TabIndex = 6;
			this->labelToken_DifficultySelection->Text = L"Difficulty:";
			// 
			// controlToken_CurrentTokens
			// 
			this->controlToken_CurrentTokens->Location = System::Drawing::Point(307, 73);
			this->controlToken_CurrentTokens->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_CurrentTokens->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentTokens->Name = L"controlToken_CurrentTokens";
			this->controlToken_CurrentTokens->Size = System::Drawing::Size(167, 30);
			this->controlToken_CurrentTokens->TabIndex = 2;
			// 
			// controlToken_CurrentPoints
			// 
			this->controlToken_CurrentPoints->Location = System::Drawing::Point(307, 37);
			this->controlToken_CurrentPoints->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlToken_CurrentPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlToken_CurrentPoints->Name = L"controlToken_CurrentPoints";
			this->controlToken_CurrentPoints->Size = System::Drawing::Size(167, 30);
			this->controlToken_CurrentPoints->TabIndex = 1;
			// 
			// labelToken_CurrentTokens
			// 
			this->labelToken_CurrentTokens->AutoSize = true;
			this->labelToken_CurrentTokens->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelToken_CurrentTokens->Location = System::Drawing::Point(148, 71);
			this->labelToken_CurrentTokens->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_CurrentTokens->Name = L"labelToken_CurrentTokens";
			this->labelToken_CurrentTokens->Size = System::Drawing::Size(149, 23);
			this->labelToken_CurrentTokens->TabIndex = 1;
			this->labelToken_CurrentTokens->Text = L"Current Tokens:";
			// 
			// labelToken_CurrentPoints
			// 
			this->labelToken_CurrentPoints->AutoSize = true;
			this->labelToken_CurrentPoints->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelToken_CurrentPoints->Location = System::Drawing::Point(154, 35);
			this->labelToken_CurrentPoints->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelToken_CurrentPoints->Name = L"labelToken_CurrentPoints";
			this->labelToken_CurrentPoints->Size = System::Drawing::Size(143, 23);
			this->labelToken_CurrentPoints->TabIndex = 0;
			this->labelToken_CurrentPoints->Text = L"Current Points:";
			// 
			// tabScoreMatch
			// 
			this->tabScoreMatch->Controls->Add(this->controlSM_SaveData);
			this->tabScoreMatch->Controls->Add(this->controlSM_LoadData);
			this->tabScoreMatch->Controls->Add(this->labelSM_Difficulty);
			this->tabScoreMatch->Controls->Add(this->labelSM_SelectedDifficulty);
			this->tabScoreMatch->Controls->Add(this->controlSM_DifficultyExpert);
			this->tabScoreMatch->Controls->Add(this->controlSM_DifficultyHard);
			this->tabScoreMatch->Controls->Add(this->controlSM_DifficultyNormal);
			this->tabScoreMatch->Controls->Add(this->controlSM_DifficultyEasy);
			this->tabScoreMatch->Controls->Add(this->labelSM_EstimatedLP);
			this->tabScoreMatch->Controls->Add(this->labelSM_Result);
			this->tabScoreMatch->Controls->Add(this->controlSM_Calculate);
			this->tabScoreMatch->Controls->Add(this->labelSM_AveragePoints);
			this->tabScoreMatch->Controls->Add(this->controlSM_AveragePoints);
			this->tabScoreMatch->Controls->Add(this->labelSM_DifficultySelection);
			this->tabScoreMatch->Controls->Add(this->controlSM_PointGoal);
			this->tabScoreMatch->Controls->Add(this->controlSM_CurrentPoints);
			this->tabScoreMatch->Controls->Add(this->labelSM_PointGoal);
			this->tabScoreMatch->Controls->Add(this->labelSM_CurrentPoints);
			this->tabScoreMatch->Location = System::Drawing::Point(4, 28);
			this->tabScoreMatch->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabScoreMatch->Name = L"tabScoreMatch";
			this->tabScoreMatch->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabScoreMatch->Size = System::Drawing::Size(759, 349);
			this->tabScoreMatch->TabIndex = 1;
			this->tabScoreMatch->Text = L"Score Match";
			this->tabScoreMatch->UseVisualStyleBackColor = true;
			// 
			// controlSM_SaveData
			// 
			this->controlSM_SaveData->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_SaveData->Location = System::Drawing::Point(457, 253);
			this->controlSM_SaveData->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_SaveData->Name = L"controlSM_SaveData";
			this->controlSM_SaveData->Size = System::Drawing::Size(140, 32);
			this->controlSM_SaveData->TabIndex = 35;
			this->controlSM_SaveData->Text = L"Save Data";
			this->controlSM_SaveData->UseVisualStyleBackColor = true;
			this->controlSM_SaveData->Click += gcnew System::EventHandler(this, &uiMain::controlSM_SaveData_Click);
			// 
			// controlSM_LoadData
			// 
			this->controlSM_LoadData->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_LoadData->Location = System::Drawing::Point(307, 253);
			this->controlSM_LoadData->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_LoadData->Name = L"controlSM_LoadData";
			this->controlSM_LoadData->Size = System::Drawing::Size(140, 32);
			this->controlSM_LoadData->TabIndex = 34;
			this->controlSM_LoadData->Text = L"Load Data";
			this->controlSM_LoadData->UseVisualStyleBackColor = true;
			this->controlSM_LoadData->Click += gcnew System::EventHandler(this, &uiMain::controlSM_LoadData_Click);
			// 
			// labelSM_Difficulty
			// 
			this->labelSM_Difficulty->AutoSize = true;
			this->labelSM_Difficulty->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_Difficulty->Location = System::Drawing::Point(303, 181);
			this->labelSM_Difficulty->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_Difficulty->Name = L"labelSM_Difficulty";
			this->labelSM_Difficulty->Size = System::Drawing::Size(222, 23);
			this->labelSM_Difficulty->TabIndex = 33;
			this->labelSM_Difficulty->Text = L"Please select a difficulty.";
			// 
			// labelSM_SelectedDifficulty
			// 
			this->labelSM_SelectedDifficulty->AutoSize = true;
			this->labelSM_SelectedDifficulty->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_SelectedDifficulty->Location = System::Drawing::Point(123, 181);
			this->labelSM_SelectedDifficulty->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_SelectedDifficulty->Name = L"labelSM_SelectedDifficulty";
			this->labelSM_SelectedDifficulty->Size = System::Drawing::Size(174, 23);
			this->labelSM_SelectedDifficulty->TabIndex = 32;
			this->labelSM_SelectedDifficulty->Text = L"Selected Difficulty:";
			// 
			// controlSM_DifficultyExpert
			// 
			this->controlSM_DifficultyExpert->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_DifficultyExpert->Location = System::Drawing::Point(602, 145);
			this->controlSM_DifficultyExpert->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_DifficultyExpert->Name = L"controlSM_DifficultyExpert";
			this->controlSM_DifficultyExpert->Size = System::Drawing::Size(88, 32);
			this->controlSM_DifficultyExpert->TabIndex = 27;
			this->controlSM_DifficultyExpert->Text = L"Expert";
			this->controlSM_DifficultyExpert->UseVisualStyleBackColor = true;
			this->controlSM_DifficultyExpert->Click += gcnew System::EventHandler(this, &uiMain::controlSM_DifficultyExpert_Click);
			// 
			// controlSM_DifficultyHard
			// 
			this->controlSM_DifficultyHard->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_DifficultyHard->Location = System::Drawing::Point(503, 145);
			this->controlSM_DifficultyHard->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_DifficultyHard->Name = L"controlSM_DifficultyHard";
			this->controlSM_DifficultyHard->Size = System::Drawing::Size(88, 32);
			this->controlSM_DifficultyHard->TabIndex = 25;
			this->controlSM_DifficultyHard->Text = L"Hard";
			this->controlSM_DifficultyHard->UseVisualStyleBackColor = true;
			this->controlSM_DifficultyHard->Click += gcnew System::EventHandler(this, &uiMain::controlSM_DifficultyHard_Click);
			// 
			// controlSM_DifficultyNormal
			// 
			this->controlSM_DifficultyNormal->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_DifficultyNormal->Location = System::Drawing::Point(405, 145);
			this->controlSM_DifficultyNormal->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_DifficultyNormal->Name = L"controlSM_DifficultyNormal";
			this->controlSM_DifficultyNormal->Size = System::Drawing::Size(88, 32);
			this->controlSM_DifficultyNormal->TabIndex = 24;
			this->controlSM_DifficultyNormal->Text = L"Normal";
			this->controlSM_DifficultyNormal->UseVisualStyleBackColor = true;
			this->controlSM_DifficultyNormal->Click += gcnew System::EventHandler(this, &uiMain::controlSM_DifficultyNormal_Click);
			// 
			// controlSM_DifficultyEasy
			// 
			this->controlSM_DifficultyEasy->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_DifficultyEasy->Location = System::Drawing::Point(307, 145);
			this->controlSM_DifficultyEasy->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_DifficultyEasy->Name = L"controlSM_DifficultyEasy";
			this->controlSM_DifficultyEasy->Size = System::Drawing::Size(88, 32);
			this->controlSM_DifficultyEasy->TabIndex = 23;
			this->controlSM_DifficultyEasy->Text = L"Easy";
			this->controlSM_DifficultyEasy->UseVisualStyleBackColor = true;
			this->controlSM_DifficultyEasy->Click += gcnew System::EventHandler(this, &uiMain::controlSM_DifficultyEasy_Click);
			// 
			// labelSM_EstimatedLP
			// 
			this->labelSM_EstimatedLP->AutoSize = true;
			this->labelSM_EstimatedLP->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_EstimatedLP->Location = System::Drawing::Point(303, 212);
			this->labelSM_EstimatedLP->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_EstimatedLP->Name = L"labelSM_EstimatedLP";
			this->labelSM_EstimatedLP->Size = System::Drawing::Size(284, 23);
			this->labelSM_EstimatedLP->TabIndex = 31;
			this->labelSM_EstimatedLP->Text = L"Click Calculate to determine LP.";
			// 
			// labelSM_Result
			// 
			this->labelSM_Result->AutoSize = true;
			this->labelSM_Result->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_Result->Location = System::Drawing::Point(94, 212);
			this->labelSM_Result->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_Result->Name = L"labelSM_Result";
			this->labelSM_Result->Size = System::Drawing::Size(203, 23);
			this->labelSM_Result->TabIndex = 30;
			this->labelSM_Result->Text = L"Estimated LP Needed:";
			// 
			// controlSM_Calculate
			// 
			this->controlSM_Calculate->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->controlSM_Calculate->Location = System::Drawing::Point(157, 253);
			this->controlSM_Calculate->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_Calculate->Name = L"controlSM_Calculate";
			this->controlSM_Calculate->Size = System::Drawing::Size(140, 32);
			this->controlSM_Calculate->TabIndex = 28;
			this->controlSM_Calculate->Text = L"Calculate";
			this->controlSM_Calculate->UseVisualStyleBackColor = true;
			this->controlSM_Calculate->Click += gcnew System::EventHandler(this, &uiMain::controlSM_Calculate_Click);
			// 
			// labelSM_AveragePoints
			// 
			this->labelSM_AveragePoints->AutoSize = true;
			this->labelSM_AveragePoints->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_AveragePoints->Location = System::Drawing::Point(57, 107);
			this->labelSM_AveragePoints->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_AveragePoints->Name = L"labelSM_AveragePoints";
			this->labelSM_AveragePoints->Size = System::Drawing::Size(240, 23);
			this->labelSM_AveragePoints->TabIndex = 29;
			this->labelSM_AveragePoints->Text = L"Average Points Per Match:";
			// 
			// controlSM_AveragePoints
			// 
			this->controlSM_AveragePoints->Location = System::Drawing::Point(307, 109);
			this->controlSM_AveragePoints->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_AveragePoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlSM_AveragePoints->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->controlSM_AveragePoints->Name = L"controlSM_AveragePoints";
			this->controlSM_AveragePoints->Size = System::Drawing::Size(167, 30);
			this->controlSM_AveragePoints->TabIndex = 22;
			this->controlSM_AveragePoints->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelSM_DifficultySelection
			// 
			this->labelSM_DifficultySelection->AutoSize = true;
			this->labelSM_DifficultySelection->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_DifficultySelection->Location = System::Drawing::Point(202, 150);
			this->labelSM_DifficultySelection->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_DifficultySelection->Name = L"labelSM_DifficultySelection";
			this->labelSM_DifficultySelection->Size = System::Drawing::Size(95, 23);
			this->labelSM_DifficultySelection->TabIndex = 26;
			this->labelSM_DifficultySelection->Text = L"Difficulty:";
			// 
			// controlSM_PointGoal
			// 
			this->controlSM_PointGoal->Location = System::Drawing::Point(307, 73);
			this->controlSM_PointGoal->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_PointGoal->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlSM_PointGoal->Name = L"controlSM_PointGoal";
			this->controlSM_PointGoal->Size = System::Drawing::Size(167, 30);
			this->controlSM_PointGoal->TabIndex = 21;
			// 
			// controlSM_CurrentPoints
			// 
			this->controlSM_CurrentPoints->Location = System::Drawing::Point(307, 37);
			this->controlSM_CurrentPoints->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->controlSM_CurrentPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->controlSM_CurrentPoints->Name = L"controlSM_CurrentPoints";
			this->controlSM_CurrentPoints->Size = System::Drawing::Size(167, 30);
			this->controlSM_CurrentPoints->TabIndex = 19;
			// 
			// labelSM_PointGoal
			// 
			this->labelSM_PointGoal->AutoSize = true;
			this->labelSM_PointGoal->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_PointGoal->Location = System::Drawing::Point(189, 71);
			this->labelSM_PointGoal->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_PointGoal->Name = L"labelSM_PointGoal";
			this->labelSM_PointGoal->Size = System::Drawing::Size(108, 23);
			this->labelSM_PointGoal->TabIndex = 20;
			this->labelSM_PointGoal->Text = L"Point Goal:";
			// 
			// labelSM_CurrentPoints
			// 
			this->labelSM_CurrentPoints->AutoSize = true;
			this->labelSM_CurrentPoints->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelSM_CurrentPoints->Location = System::Drawing::Point(154, 35);
			this->labelSM_CurrentPoints->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelSM_CurrentPoints->Name = L"labelSM_CurrentPoints";
			this->labelSM_CurrentPoints->Size = System::Drawing::Size(143, 23);
			this->labelSM_CurrentPoints->TabIndex = 18;
			this->labelSM_CurrentPoints->Text = L"Current Points:";
			// 
			// tabRankUp
			// 
			this->tabRankUp->Location = System::Drawing::Point(4, 28);
			this->tabRankUp->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabRankUp->Name = L"tabRankUp";
			this->tabRankUp->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tabRankUp->Size = System::Drawing::Size(759, 349);
			this->tabRankUp->TabIndex = 2;
			this->tabRankUp->Text = L"XP to Rank Up";
			this->tabRankUp->UseVisualStyleBackColor = true;
			// 
			// statusStrip
			// 
			this->statusStrip->ImageScalingSize = System::Drawing::Size(24, 24);
			this->statusStrip->Location = System::Drawing::Point(0, 443);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Padding = System::Windows::Forms::Padding(2, 0, 23, 0);
			this->statusStrip->Size = System::Drawing::Size(807, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->menuStrip_File, this->menuStrip_Help });
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(10, 3, 0, 3);
			this->menuStrip->Size = System::Drawing::Size(807, 33);
			this->menuStrip->TabIndex = 2;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// menuStrip_File
			// 
			this->menuStrip_File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuStrip_File_Exit });
			this->menuStrip_File->Name = L"menuStrip_File";
			this->menuStrip_File->Size = System::Drawing::Size(52, 27);
			this->menuStrip_File->Text = L"File";
			// 
			// menuStrip_File_Exit
			// 
			this->menuStrip_File_Exit->Name = L"menuStrip_File_Exit";
			this->menuStrip_File_Exit->Size = System::Drawing::Size(113, 28);
			this->menuStrip_File_Exit->Text = L"Exit";
			this->menuStrip_File_Exit->Click += gcnew System::EventHandler(this, &uiMain::menuStrip_File_Exit_Click);
			// 
			// menuStrip_Help
			// 
			this->menuStrip_Help->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuStrip_Help_About });
			this->menuStrip_Help->Name = L"menuStrip_Help";
			this->menuStrip_Help->Size = System::Drawing::Size(61, 27);
			this->menuStrip_Help->Text = L"Help";
			// 
			// menuStrip_Help_About
			// 
			this->menuStrip_Help_About->Name = L"menuStrip_Help_About";
			this->menuStrip_Help_About->Size = System::Drawing::Size(132, 28);
			this->menuStrip_Help_About->Text = L"About";
			this->menuStrip_Help_About->Click += gcnew System::EventHandler(this, &uiMain::menuStrip_Help_About_Click);
			// 
			// uiMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 465);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"uiMain";
			this->Text = L"LLSIF Helper";
			this->tabControl1->ResumeLayout(false);
			this->tabTokenCollection->ResumeLayout(false);
			this->tabTokenCollection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_AveragePoints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentTokens))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlToken_CurrentPoints))->EndInit();
			this->tabScoreMatch->ResumeLayout(false);
			this->tabScoreMatch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_AveragePoints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_PointGoal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->controlSM_CurrentPoints))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void controlToken_Calculate_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tokenTracker.getDifficulty() == 0)
		{
			labelToken_EstimatedPoints->Text = "Please set difficulty!";
			return;
		}
		tokenTracker.setData(Convert::ToInt32(controlToken_CurrentPoints->Value), Convert::ToInt32(controlToken_CurrentTokens->Value), Convert::ToInt32(controlToken_AveragePoints->Value));
		tokenTracker.calculateEstimatedPoints();
		labelToken_EstimatedPoints->Text = Convert::ToString(tokenTracker.getEstimatedPoints());
	}
private: System::Void controlToken_DifficultyEasy_Click(System::Object^  sender, System::EventArgs^  e) {
	tokenTracker.setDifficulty(1);
	this->labelToken_Difficulty->Text = "Easy";
}
private: System::Void controlToken_DifficultyNormal_Click(System::Object^  sender, System::EventArgs^  e) {
	tokenTracker.setDifficulty(2);
	this->labelToken_Difficulty->Text = "Normal";
}
private: System::Void controlToken_DifficultyHard_Click(System::Object^  sender, System::EventArgs^  e) {
	tokenTracker.setDifficulty(3);
	this->labelToken_Difficulty->Text = "Hard";
}
private: System::Void controlToken_DifficultyExpert_Click(System::Object^  sender, System::EventArgs^  e) {
	tokenTracker.setDifficulty(4);
	this->labelToken_Difficulty->Text = "Expert";
}
private: System::Void menuStrip_File_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void menuStrip_Help_About_Click(System::Object^  sender, System::EventArgs^  e) {
	uiAbout FormAbout;
	FormAbout.Show();
}
private: System::Void controlSM_DifficultyEasy_Click(System::Object^  sender, System::EventArgs^  e) {
	scoreMatchTracker.setDifficulty(1);
	this->labelSM_Difficulty->Text = "Easy";
}
	private: System::Void controlSM_DifficultyNormal_Click(System::Object^  sender, System::EventArgs^  e) {
	scoreMatchTracker.setDifficulty(2);
	this->labelSM_Difficulty->Text = "Normal";
}
private: System::Void controlSM_DifficultyHard_Click(System::Object^  sender, System::EventArgs^  e) {
	scoreMatchTracker.setDifficulty(3);
	this->labelSM_Difficulty->Text = "Hard";
}
private: System::Void controlSM_DifficultyExpert_Click(System::Object^  sender, System::EventArgs^  e) {
	scoreMatchTracker.setDifficulty(4);
	this->labelSM_Difficulty->Text = "Expert";
}
private: System::Void controlSM_Calculate_Click(System::Object^  sender, System::EventArgs^  e) {
	if (scoreMatchTracker.setData(Convert::ToInt32(controlSM_CurrentPoints->Value), Convert::ToInt32(controlSM_PointGoal->Value), Convert::ToInt32(controlSM_AveragePoints->Value)) != 0)
	{
		labelSM_EstimatedLP->Text = "Error: Target score can't be less than current score!";
		return;
	}
	if (scoreMatchTracker.getDifficulty() == 0)
	{
		labelSM_EstimatedLP->Text = "Please set difficulty!";
		return;
	}
	labelSM_EstimatedLP->Text = Convert::ToString(scoreMatchTracker.calcLP());

}
private: System::Void controlToken_LoadData_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ifstream loadFile;
	int currentPoints;
	int currentTokens;
	int averagePoints;
	int difficulty;

	loadFile.open("saveFile_token.txt");
	if (loadFile.fail())
	{
		return;
	}
	loadFile >> currentPoints;
	loadFile >> currentTokens;
	loadFile >> averagePoints;
	loadFile >> difficulty;

	controlToken_CurrentPoints->Value = currentPoints;
	controlToken_CurrentTokens->Value = currentTokens;
	controlToken_AveragePoints->Value = averagePoints;
	tokenTracker.setDifficulty(difficulty);
	if (difficulty == 1)
		labelToken_Difficulty->Text = "Easy";
	else if (difficulty == 2)
		labelToken_Difficulty->Text = "Normal";
	else if (difficulty == 3)
		labelToken_Difficulty->Text = "Hard";
	else if (difficulty == 4)
		labelToken_Difficulty->Text = "Expert";
	else
		labelToken_Difficulty->Text = "Error loading difficulty from save file!";
	loadFile.close();
}
private: System::Void controlToken_SaveData_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream saveFile;
	saveFile.open("saveFile_token.txt");
	saveFile << Convert::ToInt32(controlToken_CurrentPoints->Value) << "\n";
	saveFile << Convert::ToInt32(controlToken_CurrentTokens->Value) << "\n";
	saveFile << Convert::ToInt32(controlToken_AveragePoints->Value) << "\n";
	saveFile << tokenTracker.getDifficulty();
	saveFile.close();
}
private: System::Void controlSM_LoadData_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ifstream loadFile;
	int currentPoints;
	int pointGoal;
	int averagePoints;
	int difficulty;

	loadFile.open("saveFile_scorematch.txt");
	if (loadFile.fail())
	{
		return;
	}
	loadFile >> currentPoints;
	loadFile >> pointGoal;
	loadFile >> averagePoints;
	loadFile >> difficulty;

	controlSM_CurrentPoints->Value = currentPoints;
	controlSM_PointGoal->Value = pointGoal;
	controlSM_AveragePoints->Value = averagePoints;
	scoreMatchTracker.setDifficulty(difficulty);
	if (difficulty == 1)
		labelSM_Difficulty->Text = "Easy";
	else if (difficulty == 2)
		labelSM_Difficulty->Text = "Normal";
	else if (difficulty == 3)
		labelSM_Difficulty->Text = "Hard";
	else if (difficulty == 4)
		labelSM_Difficulty->Text = "Expert";
	else
		labelSM_Difficulty->Text = "Error loading difficulty from save file!";
	loadFile.close();
}
private: System::Void controlSM_SaveData_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream saveFile;
	saveFile.open("saveFile_scorematch.txt");
	saveFile << Convert::ToInt32(controlSM_CurrentPoints->Value) << "\n";
	saveFile << Convert::ToInt32(controlSM_PointGoal->Value) << "\n";
	saveFile << Convert::ToInt32(controlSM_AveragePoints->Value) << "\n";
	saveFile << scoreMatchTracker.getDifficulty();
	saveFile.close();
}

}