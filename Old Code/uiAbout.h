#pragma once

namespace LLSIFAssistant2013 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for uiAbout
	/// </summary>
	public ref class uiAbout : public System::Windows::Forms::Form
	{
	public:
		uiAbout(void)
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
		~uiAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelTitle;
	protected:
	private: System::Windows::Forms::Label^  labelInfo;
	private: System::Windows::Forms::Label^  labelInfo2;
	private: System::Windows::Forms::Button^  buttonClose;

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
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->labelInfo2 = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->Location = System::Drawing::Point(48, 9);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(202, 25);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"LLSIF Helper beta";
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Location = System::Drawing::Point(12, 50);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(266, 13);
			this->labelInfo->TabIndex = 1;
			this->labelInfo->Text = L"A helper application for Love Live! School Idol Festival.";
			// 
			// labelInfo2
			// 
			this->labelInfo2->AutoSize = true;
			this->labelInfo2->Location = System::Drawing::Point(65, 77);
			this->labelInfo2->Name = L"labelInfo2";
			this->labelInfo2->Size = System::Drawing::Size(163, 13);
			this->labelInfo2->TabIndex = 2;
			this->labelInfo2->Text = L"Created by Injabie3 and Tetimaru";
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(108, 115);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &uiAbout::buttonClose_Click);
			// 
			// uiAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 150);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelInfo2);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"uiAbout";
			this->Text = L"About LLSIF Helper";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
