#pragma once

#include<FractionCalculator15aje.h>
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ComboBox^  fracOp;


	protected:






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  outNum;
	private: System::Windows::Forms::Label^  outDen;
	private: System::Windows::Forms::NumericUpDown^  num1;
	private: System::Windows::Forms::NumericUpDown^  den1;
	private: System::Windows::Forms::NumericUpDown^  num2;
	private: System::Windows::Forms::NumericUpDown^  den2;
	private: System::Windows::Forms::Label^  den1Label;
	private: System::Windows::Forms::Label^  den2Label;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fracOp = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->outNum = (gcnew System::Windows::Forms::Label());
			this->outDen = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->den1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->den2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->den1Label = (gcnew System::Windows::Forms::Label());
			this->den2Label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->den1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->den2))->BeginInit();
			this->SuspendLayout();
			// 
			// fracOp
			// 
			this->fracOp->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fracOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->fracOp->FormattingEnabled = true;
			this->fracOp->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->fracOp->Location = System::Drawing::Point(119, 90);
			this->fracOp->Name = L"fracOp";
			this->fracOp->Size = System::Drawing::Size(48, 37);
			this->fracOp->TabIndex = 2;
			this->fracOp->SelectedIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(283, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// outNum
			// 
			this->outNum->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->outNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->outNum->Location = System::Drawing::Point(342, 14);
			this->outNum->Name = L"outNum";
			this->outNum->Size = System::Drawing::Size(110, 74);
			this->outNum->TabIndex = 6;
			// 
			// outDen
			// 
			this->outDen->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->outDen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->outDen->Location = System::Drawing::Point(342, 133);
			this->outDen->Name = L"outDen";
			this->outDen->Size = System::Drawing::Size(110, 74);
			this->outDen->TabIndex = 7;
			// 
			// num1
			// 
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->num1->Location = System::Drawing::Point(16, 12);
			this->num1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->num1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(95, 71);
			this->num1->TabIndex = 0;
			this->num1->ValueChanged += gcnew System::EventHandler(this, &Form1::num1_ValueChanged);
			this->num1->Enter += gcnew System::EventHandler(this, &Form1::num1_Enter_1);
			// 
			// den1
			// 
			this->den1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->den1->Location = System::Drawing::Point(16, 133);
			this->den1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->den1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->den1->Name = L"den1";
			this->den1->Size = System::Drawing::Size(95, 71);
			this->den1->TabIndex = 1;
			this->den1->ValueChanged += gcnew System::EventHandler(this, &Form1::den1_ValueChanged);
			this->den1->Enter += gcnew System::EventHandler(this, &Form1::den1_Enter);
			// 
			// num2
			// 
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->num2->Location = System::Drawing::Point(175, 14);
			this->num2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->num2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(95, 71);
			this->num2->TabIndex = 3;
			this->num2->ValueChanged += gcnew System::EventHandler(this, &Form1::num2_ValueChanged);
			this->num2->Enter += gcnew System::EventHandler(this, &Form1::num2_Enter);
			// 
			// den2
			// 
			this->den2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->den2->Location = System::Drawing::Point(175, 133);
			this->den2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->den2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->den2->Name = L"den2";
			this->den2->Size = System::Drawing::Size(95, 71);
			this->den2->TabIndex = 4;
			this->den2->ValueChanged += gcnew System::EventHandler(this, &Form1::den2_ValueChanged);
			this->den2->Enter += gcnew System::EventHandler(this, &Form1::den2_Enter);
			// 
			// den1Label
			// 
			this->den1Label->Location = System::Drawing::Point(12, 226);
			this->den1Label->Name = L"den1Label";
			this->den1Label->Size = System::Drawing::Size(121, 50);
			this->den1Label->TabIndex = 8;
			// 
			// den2Label
			// 
			this->den2Label->Location = System::Drawing::Point(171, 226);
			this->den2Label->Name = L"den2Label";
			this->den2Label->Size = System::Drawing::Size(128, 50);
			this->den2Label->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(305, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Press Alt+c to close";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(173, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"-----------";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(10, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"-----------";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(348, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"-----------";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 285);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->den2Label);
			this->Controls->Add(this->den1Label);
			this->Controls->Add(this->den2);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->den1);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->outDen);
			this->Controls->Add(this->outNum);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->fracOp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Fraction Calculator by Alex Everitt";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->den1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->den2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (den1->Text == "" || den1->Text == "0" || den2->Text == "" || den2->Text == "0") {
			if (den1->Text == "" || den1->Text == "0")
			{
				den1Label->Text = "Invalid Denominator";
				outNum->Text = "";
				outDen->Text = "";
			}
			if (den2->Text == "" || den2->Text == "0")
			{
				den2Label->Text = "Invalid Denominator";
				outNum->Text = "";
				outDen->Text = "";
			}
		}
		else {
			den1Label->Text = "";
			den2Label->Text = "";
			int numer1 = Int32::Parse(num1->Text);
			int denom1 = Int32::Parse(den1->Text);
			int numer2 = Int32::Parse(num2->Text);
			int denom2 = Int32::Parse(den2->Text);

			String^ fracOperator = fracOp->Text;

			Fraction frac1 = Fraction(numer1, denom1);
			Fraction frac2 = Fraction(numer2, denom2);

			if (fracOperator == "+")
			{
				Fraction& frac3 = frac1 + frac2;
				if(frac3.denominator()==1)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "";
				}
				else if(frac3.numerator()==0)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "1";
				}
				else {
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = Convert::ToString(frac3.denominator());
				}
			}
			else if (fracOperator == "-")
			{
				Fraction& frac3 = frac1 - frac2;
				if (frac3.denominator() == 1)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "";
				}
				else if (frac3.numerator() == 0)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "1";
				}
				else {
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = Convert::ToString(frac3.denominator());
				}
			}
			else if (fracOperator == "*")
			{
				Fraction& frac3 = frac1 * frac2;
				if (frac3.denominator() == 1)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "";
				}
				else if (frac3.numerator() == 0)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "1";
				}
				else {
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = Convert::ToString(frac3.denominator());
				}
			}
			else if (fracOperator == "/")
			{
				Fraction& frac3 = frac1 / frac2;
				if (frac3.denominator() == 1)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "";
				}
				else if (frac3.numerator() == 0)
				{
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = "1";
				}
				else {
					outNum->Text = Convert::ToString(frac3.numerator());
					outDen->Text = Convert::ToString(frac3.denominator());
				}
			}
		}

	}




	private: System::Void num1_Enter_1(System::Object^  sender, System::EventArgs^  e) {
		num1->Select(0, num1->ToString()->Length);
	}
	private: System::Void den1_Enter(System::Object^  sender, System::EventArgs^  e) {
		den1->Select(0, den1->ToString()->Length);
	}
	private: System::Void num2_Enter(System::Object^  sender, System::EventArgs^  e) {
		num2->Select(0, num2->ToString()->Length);
	}
	private: System::Void den2_Enter(System::Object^  sender, System::EventArgs^  e) {
		den2->Select(0, den2->ToString()->Length);
	}

	private: System::Void den1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		outNum->Text = "";
		outDen->Text = "";
	}
	private: System::Void num2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		outNum->Text = "";
		outDen->Text = "";
	}
	private: System::Void den2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		outNum->Text = "";
		outDen->Text = "";
	}

	private: System::Void num1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		outNum->Text = "";
		outDen->Text = "";
	}
	
private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		button1_Click(sender, e);
	
}
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if(e->Alt && e->KeyCode == Keys::C)
	{
		this->~Form1();
	}
}

};
}
