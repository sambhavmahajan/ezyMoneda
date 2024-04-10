#pragma once
#include "backend.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "authenticator.h"
#include "Transaction.h"
using namespace msclr::interop;
server* sv;
namespace ezyMoneda {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			sv = new server();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
				delete sv;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ toField;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ amountTextField;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ TransactionLogList;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ BalanceLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toField = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->amountTextField = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TransactionLogList = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BalanceLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(791, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(93, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"To";
			// 
			// toField
			// 
			this->toField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toField->Location = System::Drawing::Point(110, 42);
			this->toField->Name = L"toField";
			this->toField->Size = System::Drawing::Size(564, 31);
			this->toField->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Amount";
			// 
			// amountTextField
			// 
			this->amountTextField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->amountTextField->Location = System::Drawing::Point(110, 93);
			this->amountTextField->Name = L"amountTextField";
			this->amountTextField->Size = System::Drawing::Size(458, 31);
			this->amountTextField->TabIndex = 4;
			this->amountTextField->TextChanged += gcnew System::EventHandler(this, &MainWindow::amountTextField_TextChanged);
			this->amountTextField->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::amountTextFieldChangedKeyPress);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(574, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// TransactionLogList
			// 
			this->TransactionLogList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TransactionLogList->FormattingEnabled = true;
			this->TransactionLogList->ItemHeight = 25;
			this->TransactionLogList->Location = System::Drawing::Point(18, 182);
			this->TransactionLogList->Name = L"TransactionLogList";
			this->TransactionLogList->Size = System::Drawing::Size(655, 179);
			this->TransactionLogList->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Transaction Log";
			// 
			// BalanceLabel
			// 
			this->BalanceLabel->AutoSize = true;
			this->BalanceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BalanceLabel->Location = System::Drawing::Point(20, 89);
			this->BalanceLabel->Name = L"BalanceLabel";
			this->BalanceLabel->Size = System::Drawing::Size(150, 25);
			this->BalanceLabel->TabIndex = 8;
			this->BalanceLabel->Text = L"Balance $0.00";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(35, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(735, 167);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Fetch account";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(129, 69);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(557, 31);
			this->textBox3->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"ID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(557, 31);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox2_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(586, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 42);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Fetch";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Name: null";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(35, 213);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(735, 211);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Reimburse";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 25);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Amount";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(108, 145);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(483, 31);
			this->textBox5->TabIndex = 7;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox5_KeyPress);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(598, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 42);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Reimburse";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 108);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(73, 31);
			this->textBox4->TabIndex = 5;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox4_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 116);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 25);
			this->label9->TabIndex = 4;
			this->label9->Text = L"CVV";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(108, 72);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(609, 31);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 25);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Expiry";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(489, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(208, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Visa Credit Card No.";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->toField);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->amountTextField);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->TransactionLogList);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(35, 563);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(729, 383);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Main Dashboard";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->BalanceLabel);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(35, 430);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(729, 127);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Current User Details";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(344, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 25);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Email: null";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(223, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 25);
			this->label11->TabIndex = 11;
			this->label11->Text = L"ID: null";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 950);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ezy Moneda - Money made simple";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void amountTextFieldChangedKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.')
		{
			e->Handled = true;
		}
		if (e->KeyChar == '.' && amountTextField->Text->Contains("."))
		{
			e->Handled = true;
		}
		if (amountTextField->Text->Contains("."))
		{
			int indexOfDecimal = amountTextField->Text->IndexOf('.');
			if (amountTextField->Text->Length - indexOfDecimal > 2 && !Char::IsControl(e->KeyChar))
			{
				e->Handled = true;
			}
		}
	}
	private: System::Void amountTextField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("This project is a prototype of a payment processing system\nMade and designed by:\nSambhav Mahajan: 23BCS11290\nMayank Dhatwalia : 23BCS12956\nAstha Raj : 23BCS10347\nGaurav Lamba : 23BCS12937\nVinesh Kumar Goswami : 23BCS10319\n\nStudents of Chandigarh University", "EzyMoneda", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: void updateBalDis() {
		BalanceLabel->Text = "Balance $" + sv->accounts[_id].getBalance();
		label11->Text = "ID: " + _id;
		label12->Text = marshal_as<String^>(sv->accounts[_id].getEmail());
	}
	private: int _id = -1;
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void refreshTransactions() {
		TransactionLogList->Items->Clear();
		for (int i = sv->transactions.size() - 1; i >=0; i--) {
			if (sv->transactions[i]._fromId == _id && sv->transactions[i]._toId == _id) {
				TransactionLogList->Items->Add("Reimbursed amount: $" + sv->transactions[i]._amount + " at time: " + sv->transactions[i]._time);
			}
			else if (sv->transactions[i]._fromId == _id) {
				TransactionLogList->Items->Add("Sent To: " + sv->transactions[i]._toId + "  amount: $" + sv->transactions[i]._amount + " at time: " + sv->transactions[i]._time);
			}
			else if (sv->transactions[i]._toId == _id) {
				TransactionLogList->Items->Add("Received From: " + sv->transactions[i]._fromId + "  amount: $" + sv->transactions[i]._amount + " at time: " + sv->transactions[i]._time);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text)) {
			MessageBox::Show("Error: Field(s) can't be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		string temp = marshal_as<string>(textBox2->Text);
		int id = stoi(temp);
		if (id >= sv->accounts.size()) {
			MessageBox::Show("Error: No such account", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (marshal_as<string>(textBox3->Text).compare(sv->accounts[id].getPassword()) != 0) {
			MessageBox::Show("Error: wrong password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		_id = id;
		string t = "Name: " + sv->accounts[id].getName();
		label6->Text = marshal_as<String^>(t);
		updateBalDis();
		refreshTransactions();

	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		{
			e->Handled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (_id == -1) {
			MessageBox::Show("Error: No account fetched", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		float tBal = stof(marshal_as<string>(amountTextField->Text));
		if (stoi(marshal_as<string>(toField->Text)) > 2) {
			MessageBox::Show("Error: No such account", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (tBal > sv->accounts[_id].getBalance()) {
			MessageBox::Show("Error: No sufficent balance", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			sv->accounts[_id].updateBal(-tBal);
			int i = stoi(marshal_as<string>(toField->Text));
			sv->accounts[i].updateBal(tBal);
			Transaction T(_id, i, tBal);
			sv->transactions.push_back(T);
			refreshTransactions();
			updateBalDis();
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		{
			e->Handled = true;
		}
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || (textBox4->Text->Length == 3 && e->KeyChar != '\b'))
		{
			e->Handled = true;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (_id == -1) {
			MessageBox::Show("Error: No account fetched", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (isValidCreditCard(marshal_as<string>(textBox1->Text)) == false) {
			MessageBox::Show("Error: Invalid card number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if(DateTime::Now > dateTimePicker1->Value){
			MessageBox::Show("Error: Invalid expiry", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBox4->Text->Length < 3) {
			MessageBox::Show("Error: Invalid CVV", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			float amt = stof(marshal_as<string>(textBox5->Text));
			sv->accounts[_id].updateBal(amt);
			Transaction T(_id, _id, amt);
			sv->transactions.push_back(T);
			updateBalDis();
			refreshTransactions();
		}
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.')
		{
			e->Handled = true;
		}
		if (e->KeyChar == '.' && amountTextField->Text->Contains("."))
		{
			e->Handled = true;
		}
		if (amountTextField->Text->Contains("."))
		{
			int indexOfDecimal = amountTextField->Text->IndexOf('.');
			if (amountTextField->Text->Length - indexOfDecimal > 2 && !Char::IsControl(e->KeyChar))
			{
				e->Handled = true;
			}
		}
	}
};
}
