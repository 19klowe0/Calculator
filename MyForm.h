#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Button^ btnBackspace;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ numberDisplay;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnPlusMinus;



	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;
	private: System::Windows::Forms::Button^ btnPlus;







	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit6;
	private: System::Windows::Forms::Button^ btnMinus;




	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;
	private: System::Windows::Forms::Button^ btnMultiply;




	private: System::Windows::Forms::Button^ btnDigit0;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnEqual;
	private: System::Windows::Forms::Button^ btnDivide;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->numberDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnBackspace
			// 
			this->btnBackspace->BackColor = System::Drawing::Color::IndianRed;
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackspace->Location = System::Drawing::Point(12, 94);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(82, 79);
			this->btnBackspace->TabIndex = 0;
			this->btnBackspace->Text = L"⌫";
			this->btnBackspace->UseVisualStyleBackColor = false;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &MyForm::btnBackspace_Click);
			// 
			// numberDisplay
			// 
			this->numberDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numberDisplay->Location = System::Drawing::Point(12, 12);
			this->numberDisplay->Multiline = true;
			this->numberDisplay->Name = L"numberDisplay";
			this->numberDisplay->Size = System::Drawing::Size(346, 76);
			this->numberDisplay->TabIndex = 1;
			this->numberDisplay->Text = L"0";
			this->numberDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numberDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::IndianRed;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(100, 94);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(82, 79);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::IndianRed;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(188, 94);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(82, 79);
			this->btnCE->TabIndex = 3;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->BackColor = System::Drawing::Color::IndianRed;
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMinus->Location = System::Drawing::Point(276, 94);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(82, 79);
			this->btnPlusMinus->TabIndex = 4;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = false;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->Location = System::Drawing::Point(12, 179);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(82, 79);
			this->btnDigit7->TabIndex = 0;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->Location = System::Drawing::Point(100, 179);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(82, 79);
			this->btnDigit8->TabIndex = 2;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->Location = System::Drawing::Point(188, 179);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(82, 79);
			this->btnDigit9->TabIndex = 3;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::IndianRed;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(276, 179);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(82, 79);
			this->btnPlus->TabIndex = 4;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->Location = System::Drawing::Point(12, 264);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(82, 79);
			this->btnDigit4->TabIndex = 0;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->Location = System::Drawing::Point(100, 264);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(82, 79);
			this->btnDigit5->TabIndex = 2;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->Location = System::Drawing::Point(188, 264);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(82, 79);
			this->btnDigit6->TabIndex = 3;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::Color::IndianRed;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(276, 264);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(82, 79);
			this->btnMinus->TabIndex = 4;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->Location = System::Drawing::Point(12, 349);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(82, 79);
			this->btnDigit1->TabIndex = 0;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->Location = System::Drawing::Point(100, 349);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(82, 79);
			this->btnDigit2->TabIndex = 2;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->Location = System::Drawing::Point(188, 349);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(82, 79);
			this->btnDigit3->TabIndex = 3;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::IndianRed;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(276, 349);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(82, 79);
			this->btnMultiply->TabIndex = 4;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit0
			// 
			this->btnDigit0->BackColor = System::Drawing::Color::IndianRed;
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit0->Location = System::Drawing::Point(12, 434);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(82, 79);
			this->btnDigit0->TabIndex = 0;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = false;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::IndianRed;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(100, 434);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(82, 79);
			this->btnDot->TabIndex = 2;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::IndianRed;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(188, 434);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(82, 79);
			this->btnEqual->TabIndex = 3;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::IndianRed;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(276, 434);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(82, 79);
			this->btnDivide->TabIndex = 4;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(369, 532);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->numberDisplay);
			this->Controls->Add(this->btnBackspace);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (numberDisplay->Text == "0") {
			numberDisplay->Text = Numbers->Text;
		}
		else {
			numberDisplay->Text = numberDisplay->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

		Button^ NumberOP = safe_cast<Button^>(sender);
		firstDigit = Double::Parse(numberDisplay->Text);

		numberDisplay->Text = "";
		operators = NumberOP->Text;
	}
	private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (!numberDisplay->Text->Contains(".")) {
			numberDisplay->Text = numberDisplay->Text + ".";
		}
	}
	private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {

		secondDigit = Double::Parse(numberDisplay->Text);

		if (operators == "+") {
			result = firstDigit + secondDigit;
			numberDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = firstDigit - secondDigit;
			numberDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "*") {
			result = firstDigit * secondDigit;
			numberDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "/") {
			result = firstDigit / secondDigit;
			numberDisplay->Text = System::Convert::ToString(result);
		}


	}
	private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		numberDisplay->Text = "0";
	}
	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		numberDisplay->Text = "0";
	}
	private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {

		if (numberDisplay->Text->Contains("-")) {
			numberDisplay->Text = numberDisplay->Text->Remove(0, 1);
		}
		else {
			numberDisplay->Text = "-" + numberDisplay->Text;
		}
	
	}
	private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {

		if (numberDisplay->Text->Length > 0) {
			numberDisplay->Text = numberDisplay->Text->Remove(numberDisplay->Text->Length - 1, 1);
		}
		if (numberDisplay->Text == "") {
			numberDisplay->Text = "0";
		}
		
	}
};
}
