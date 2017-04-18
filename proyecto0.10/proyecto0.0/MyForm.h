#pragma once
#include "stdafx.h"
#include "Lista.h"
#include "Pais.h"
#include <stdio.h>
#using <System.dll>
#include <sstream>
#include <string.h>
#include <string>
#include <wchar.h>
#include <list>


namespace proyecto00 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Net::NetworkInformation;
	using namespace System::Text;
	using namespace System::Xml;
	using namespace System::Collections::Generic;
	using namespace std;
	using namespace System::Runtime::InteropServices;
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
		WebRequest^ solicitud;
		WebResponse^ respuesta;
		Stream^ stream1;
		StreamReader^ reader;
		String^ respuestaCadena;
		String^ url = "http://api.geonames.org/countryInfo?username=Ater97";

		XmlDocument^ xmlDoc = gcnew XmlDocument();
		bool estaConectado = false;

		Ping^ PingSender = gcnew Ping();
		PingReply^ pingReply = PingSender->Send("8.8.8.8");	 //<<<---VALIDAR
	public:
		XmlNodeList^nodos;
		bool sort = true;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label17;





	public:
		Lista *miLista = new Lista();
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label19;
	public:
	private: System::Windows::Forms::Button^  button13;
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  listBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		LinkedList<String^> ^ MyCodes = gcnew LinkedList<String^>;
		LinkedList<String^> ^stringList;
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(707, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 23);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(16, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(505, 289);
			this->listBox1->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(707, 119);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(159, 23);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(566, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Country Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(533, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Choose your searching:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(586, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Languages:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(589, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Continents:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(707, 75);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(159, 23);
			this->comboBox3->Sorted = true;
			this->comboBox3->TabIndex = 11;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(733, 469);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(228, 139);
			this->listBox2->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(558, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 15);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Population limits:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(706, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 15);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Above:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(828, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 15);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Below:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(944, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 27);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(525, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 15);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Territorial limits: (Sq Km)";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(944, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 27);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(828, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 15);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Below:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(706, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 15);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Above:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(614, 332);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 15);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Capital:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(572, 366);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 15);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Country Code:";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(709, 324);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(159, 23);
			this->comboBox4->TabIndex = 27;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(709, 357);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(159, 23);
			this->comboBox5->Sorted = true;
			this->comboBox5->TabIndex = 28;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(586, 447);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(141, 15);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Entry Country Code:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(733, 439);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(103, 23);
			this->textBox5->TabIndex = 30;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(846, 437);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 27);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(595, 469);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 27);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Show";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 15);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Data:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(915, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 24);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Show here:";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(707, 217);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(105, 23);
			this->numericUpDown1->TabIndex = 55;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(831, 218);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752192, 23, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(105, 23);
			this->numericUpDown2->TabIndex = 56;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 2;
			this->numericUpDown3->Location = System::Drawing::Point(707, 281);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752192, 23, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(105, 23);
			this->numericUpDown3->TabIndex = 57;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 2;
			this->numericUpDown4->Location = System::Drawing::Point(831, 281);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -727379968, 232, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(105, 23);
			this->numericUpDown4->TabIndex = 58;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(16, 384);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 27);
			this->button7->TabIndex = 59;
			this->button7->Text = L"Name";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(123, 384);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 27);
			this->button8->TabIndex = 60;
			this->button8->Text = L"Code";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(232, 384);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 27);
			this->button9->TabIndex = 61;
			this->button9->Text = L"Population";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(339, 384);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 27);
			this->button10->TabIndex = 62;
			this->button10->Text = L"Area";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(448, 384);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 27);
			this->button11->TabIndex = 63;
			this->button11->Text = L"Continent";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 364);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 15);
			this->label15->TabIndex = 64;
			this->label15->Text = L"Sort by:";
			// 
			// webBrowser1
			// 
			this->webBrowser1->AllowWebBrowserDrop = false;
			this->webBrowser1->Location = System::Drawing::Point(1023, 14);
			this->webBrowser1->MinimumSize = System::Drawing::Size(26, 23);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(544, 594);
			this->webBrowser1->TabIndex = 65;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(593, 419);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(104, 15);
			this->label16->TabIndex = 66;
			this->label16->Text = L"Code selection:";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(915, 75);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 43);
			this->button12->TabIndex = 67;
			this->button12->Text = L"Go to Browser";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(912, 20);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 15);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Map:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(707, 150);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 23);
			this->textBox1->TabIndex = 69;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(879, 146);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(71, 27);
			this->button13->TabIndex = 70;
			this->button13->Text = L"Search";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label18->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Location = System::Drawing::Point(207, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 18);
			this->label18->TabIndex = 71;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(16, 417);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 60);
			this->button14->TabIndex = 72;
			this->button14->Text = L"Ascending or Descending";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(133, 434);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(74, 15);
			this->label19->TabIndex = 73;
			this->label19->Text = L"Ascending";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1354, 622);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->Text = L"Proyect Geo-Información";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		label18->Text = "Loading...";
#pragma region
		comboBox3->Items->Clear();
		comboBox3->Items->Add("Africa");
		comboBox3->Items->Add("Asia");
		comboBox3->Items->Add("Antarctica");
		comboBox3->Items->Add("Europe");
		comboBox3->Items->Add("North America");
		comboBox3->Items->Add("South America");
		comboBox3->Items->Add("Oceania");
#pragma endregion
		estaConectado = (pingReply->Status == IPStatus::Success); //Verificar conexión
		if (estaConectado) {
			
			solicitud = WebRequest::Create(url); //Solicitud
			solicitud->Credentials = CredentialCache::DefaultCredentials;
			respuesta = dynamic_cast<HttpWebResponse^>(solicitud->GetResponse()); //Respuesta
			stream1 = respuesta->GetResponseStream();
			reader = gcnew StreamReader(stream1); //Leo la respuesta
			respuestaCadena = reader->ReadToEnd(); //Almacenar en la cadena
			reader->Close(); //Cerrar la conexion
			stream1->Close();
			respuesta->Close();
			xmlDoc->LoadXml(respuestaCadena);
			XmlNodeList^ nodos = xmlDoc->GetElementsByTagName("country");
#pragma region
			for (int i = 0; i < nodos->Count; i++) { //Cargar copciones de busqueda
				comboBox1->Items->Add(nodos->Item(i)->SelectSingleNode("countryName")->InnerXml);
				comboBox4->Items->Add(nodos->Item(i)->SelectSingleNode("capital")->InnerXml);
				comboBox5->Items->Add(nodos->Item(i)->SelectSingleNode("countryCode")->InnerXml);

#pragma region
				stringList = gcnew LinkedList<String^>((nodos->Item(i)->SelectSingleNode("languages")->InnerXml)->Split(','));
				for (int j = 0; j < stringList->Count; j++)
				{
					if (comboBox2->Items->Contains((stringList->First)->Value)){ 
					}
					else
					{
						comboBox2->Items->Add((stringList->First)->Value->ToUpper());
					}
					if (stringList->Count > 0)
						break;
					stringList->RemoveFirst();
				}
#pragma endregion 
#pragma endregion
				Console::WriteLine(" Pais No." + (i + 1) + "  " + nodos->Item(i)->SelectSingleNode("countryName")->InnerXml);//verificacion Interna

				char *name = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("countryName")->InnerXml);
				char *code = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("countryCode")->InnerXml);
				int population = Convert::ToInt32(nodos->Item(i)->SelectSingleNode("population")->InnerXml);
				char *isoAlpha3 = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("isoAlpha3")->InnerXml);
				char *fipsCode = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("fipsCode")->InnerXml);
				char *continent = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("continent")->InnerXml);
				char *continentName = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("continentName")->InnerXml);
				char *capital = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("capital")->InnerXml);
				char *currencyCode = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("currencyCode")->InnerXml);
				char *languages = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("languages")->InnerXml);
				char *postalCodeFormat = (char*)(void*)Marshal::StringToHGlobalAnsi(nodos->Item(i)->SelectSingleNode("postalCodeFormat")->InnerXml);
				double isoNumeric = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("isoNumeric")->InnerXml);
				double areaInSqKm = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("areaInSqKm")->InnerXml);
				double geonameId = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("geonameId")->InnerXml);
				double west = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("west")->InnerXml);
				double north = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("north")->InnerXml);
				double east = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("east")->InnerXml);
				double south = Convert::ToDouble(nodos->Item(i)->SelectSingleNode("south")->InnerXml);
				//Constructor...
				Pais *nuevoPais = new Pais(name, code, population, isoNumeric, isoAlpha3, fipsCode, continent, continentName,
					capital, areaInSqKm, currencyCode, languages, geonameId, west, north, east, south, postalCodeFormat, i);

				miLista->Insertar(nuevoPais); //Agregar a la lista
			}
			MessageBox::Show("Ready to go!");//ready
			label18->Text = "";
		}
		else //Fail
		{
			Console::WriteLine("Error 101 no ethernet connection enabled");
			MessageBox::Show("Error 101 no ethernet connection enabled");
			label18->Text = "Failed to load";
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Search by name
		Nodo *nodoActual = miLista->inicio;
		listBox1->Items->Clear(); //clean list
		char *comb = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text);

		while (nodoActual != NULL)
		{
			String ^strNombre = gcnew String(nodoActual->miPais->nombre);
			String ^strCode = gcnew String(nodoActual->miPais->codigo);
			String ^strIso = gcnew String(nodoActual->miPais->isoAlpha3);
			String ^strFips = gcnew String(nodoActual->miPais->fipsCode);
			String ^strConti = gcnew String(nodoActual->miPais->continent);
			String ^strcontiName = gcnew String(nodoActual->miPais->continentName);
			String ^strCap = gcnew String(nodoActual->miPais->capital);
			String ^strCurr = gcnew String(nodoActual->miPais->currencyCode);
			String ^strLang = gcnew String(nodoActual->miPais->languages);
			String ^strPostal = gcnew String(nodoActual->miPais->postalCodeFormat);

			if (strcmp(comb, (nodoActual->miPais->nombre)) == 0) //Comparar comb txt in the list
			{   //Mostrar
				listBox1->Items->Add("Code: " + strCode);
				listBox1->Items->Add("Country Name: " + strNombre);
				listBox1->Items->Add("isoNumeric: " + nodoActual->miPais->isoNumeric);
				listBox1->Items->Add("isoAlpha3: " + strIso);
				listBox1->Items->Add("Fips code: " + strFips);
				listBox1->Items->Add("Continent: " + strConti);
				listBox1->Items->Add("Continent Name: " + strcontiName);
				listBox1->Items->Add("Capital: " + strCap);
				listBox1->Items->Add("Area Sq Km: " + nodoActual->miPais->areaInSqKm);
				listBox1->Items->Add("Population: " + nodoActual->miPais->poblacion);
				listBox1->Items->Add("Currency Code: " + strCurr);
				listBox1->Items->Add("Languages: " + strLang);
				listBox1->Items->Add("Geoname ID: " + nodoActual->miPais->geonameId);
				listBox1->Items->Add("West: " + nodoActual->miPais->west);
				listBox1->Items->Add("North: " + nodoActual->miPais->north);
				listBox1->Items->Add("East: " + nodoActual->miPais->east);
				listBox1->Items->Add("South: " + nodoActual->miPais->south);
				listBox1->Items->Add("Postal Code Format: " + strPostal);
			}
			nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
		}
		
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Search by continent

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";
		Nodo *nodoActual = miLista->inicio;
		listBox1->Items->Clear(); //limpiar lista
		char *comb = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox3->Text);
		while (nodoActual != NULL)
		{
			String ^strNombre = gcnew String(nodoActual->miPais->nombre);
			string str(nodoActual->miPais->continent);
			if (strcmp(comb, (nodoActual->miPais->continentName)) == 0) //comparar
			{   //Print
				listBox1->Items->Add(strNombre);
			}
			nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
		}
		comboBox3->Text = "";
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Search by population
		listBox1->Items->Clear();//clean list
		double mayorA = Convert::ToInt64(numericUpDown1->Value); //get limits
		double menorA = Convert::ToInt64(numericUpDown2->Value);
		bool n = true;

		if ((mayorA < 0) || (mayorA > menorA))//Check limits logic
		{
			MessageBox::Show("Error:\nValue range has no sense");
		}
		else
		{
			Nodo *nodoActual = miLista->inicio;
			while (nodoActual != NULL)
			{
				String ^strNombre = gcnew String(nodoActual->miPais->nombre);
				if ((mayorA <= (nodoActual->miPais->poblacion)) && ((nodoActual->miPais->poblacion) <= menorA)) //Search
				{   //Print
					listBox1->Items->Add(strNombre);
					n = false;
				}
				nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
			}
		}
		if (n)
			listBox1->Items->Add("Error 404 not found");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		
		double mayorA = Convert::ToDouble(numericUpDown3->Value); //Get limits
		double menorA = Convert::ToDouble(numericUpDown4->Value);
		bool n = true;
		if ((mayorA < 0) || (mayorA > menorA))//Check limits logic
		{
			MessageBox::Show("Error:\nValue range has no sense");
		}
		else
		{
			Nodo *nodoActual = miLista->inicio;
			while (nodoActual != NULL)
			{
				String ^strNombre = gcnew String(nodoActual->miPais->nombre);
				if ((mayorA <= (nodoActual->miPais->areaInSqKm)) && ((nodoActual->miPais->areaInSqKm) <= menorA)) //search
				{   //Print
					listBox1->Items->Add(strNombre);
					n = false;
				}
				nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
			}
		}
		if (n)
			listBox1->Items->Add("Error 404 not found");
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Search by capital

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoActual = miLista->inicio;
		listBox1->Items->Clear(); // clean list
		char *comb = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox4->Text);
		while (nodoActual != NULL)
		{
			String ^strNombre = gcnew String(nodoActual->miPais->nombre);
			String ^strCode = gcnew String(nodoActual->miPais->codigo);
			String ^strIso = gcnew String(nodoActual->miPais->isoAlpha3);
			String ^strFips = gcnew String(nodoActual->miPais->fipsCode);
			String ^strConti = gcnew String(nodoActual->miPais->continent);
			String ^strcontiName = gcnew String(nodoActual->miPais->continentName);
			String ^strCap = gcnew String(nodoActual->miPais->capital);
			String ^strCurr = gcnew String(nodoActual->miPais->currencyCode);
			String ^strLang = gcnew String(nodoActual->miPais->languages);
			String ^strPostal = gcnew String(nodoActual->miPais->postalCodeFormat);
			string str(nodoActual->miPais->capital);
			if (strcmp(comb, (nodoActual->miPais->capital)) == 0)//search comb txt in the list 
			{   //Print
				listBox1->Items->Add("Code: " + strCode);
				listBox1->Items->Add("Country Name: " + strNombre);
				listBox1->Items->Add("isoNumeric: " + nodoActual->miPais->isoNumeric);
				listBox1->Items->Add("isoAlpha3: " + strIso);
				listBox1->Items->Add("Fips code: " + strFips);
				listBox1->Items->Add("Continent: " + strConti);
				listBox1->Items->Add("Continent Name: " + strcontiName);
				listBox1->Items->Add("Capital: " + strCap);
				listBox1->Items->Add("Area Sq Km: " + nodoActual->miPais->areaInSqKm);
				listBox1->Items->Add("Population: " + nodoActual->miPais->poblacion);
				listBox1->Items->Add("Currency Code: " + strCurr);
				listBox1->Items->Add("Languages: " + strLang);
				listBox1->Items->Add("Geoname ID: " + nodoActual->miPais->geonameId);
				listBox1->Items->Add("West: " + nodoActual->miPais->west);
				listBox1->Items->Add("North: " + nodoActual->miPais->north);
				listBox1->Items->Add("East: " + nodoActual->miPais->east);
				listBox1->Items->Add("South: " + nodoActual->miPais->south);
				listBox1->Items->Add("Postal Code Format: " + strPostal);
			}
			nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
		}
	}
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Search by code

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		textBox1->Text = "";

		Nodo *nodoActual = miLista->inicio;
		listBox1->Items->Clear(); //Clean list

		char *comb = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox5->Text);
		while (nodoActual != NULL)
		{
			String ^strNombre = gcnew String(nodoActual->miPais->nombre);
			String ^strCode = gcnew String(nodoActual->miPais->codigo);
			String ^strIso = gcnew String(nodoActual->miPais->isoAlpha3);
			String ^strFips = gcnew String(nodoActual->miPais->fipsCode);
			String ^strConti = gcnew String(nodoActual->miPais->continent);
			String ^strcontiName = gcnew String(nodoActual->miPais->continentName);
			String ^strCap = gcnew String(nodoActual->miPais->capital);
			String ^strCurr = gcnew String(nodoActual->miPais->currencyCode);
			String ^strLang = gcnew String(nodoActual->miPais->languages);
			String ^strPostal = gcnew String(nodoActual->miPais->postalCodeFormat);
			string str(nodoActual->miPais->codigo);
			if (strcmp(comb, (nodoActual->miPais->codigo)) == 0) //search comb txt in the list
			{   //Print
				listBox1->Items->Add("Code: " + strCode);
				listBox1->Items->Add("Country Name: " + strNombre);
				listBox1->Items->Add("isoNumeric: " + nodoActual->miPais->isoNumeric);
				listBox1->Items->Add("isoAlpha3: " + strIso);
				listBox1->Items->Add("Fips code: " + strFips);
				listBox1->Items->Add("Continent: " + strConti);
				listBox1->Items->Add("Continent Name: " + strcontiName);
				listBox1->Items->Add("Capital: " + strCap);
				listBox1->Items->Add("Area Sq Km: " + nodoActual->miPais->areaInSqKm);
				listBox1->Items->Add("Population: " + nodoActual->miPais->poblacion);
				listBox1->Items->Add("Currency Code: " + strCurr);
				listBox1->Items->Add("Languages: " + strLang);
				listBox1->Items->Add("Geoname ID: " + nodoActual->miPais->geonameId);
				listBox1->Items->Add("West: " + nodoActual->miPais->west);
				listBox1->Items->Add("North: " + nodoActual->miPais->north);
				listBox1->Items->Add("East: " + nodoActual->miPais->east);
				listBox1->Items->Add("South: " + nodoActual->miPais->south);
				listBox1->Items->Add("Postal Code Format: " + strPostal);
			}
			nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
		}
	}
			 
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {//Serie 3 busqueda multiple por codigo
		Nodo *nodoActual = miLista->inicio;
		String ^strCodeText = gcnew String((textBox5->Text)->ToUpper());
		if (MyCodes->Contains(strCodeText))//check repetitions
		{
			MessageBox::Show("That code is already in the list");
		}
		else
		{
			while (nodoActual != NULL)
			{
				String ^strCode = gcnew String(nodoActual->miPais->codigo);
				String ^strNombre = gcnew String(nodoActual->miPais->nombre);
				if ((strCodeText) == strCode)
				{//Print
					listBox2->Items->Add(strNombre);
					MyCodes->AddFirst(strCode);
				}
				nodoActual = nodoActual->siguiente;
			}
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {//Serie 3 busqueda multiple por codigo

																						 //Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoActual = miLista->inicio;
		listBox1->Items->Clear(); // clean list
		double promPopulation = 0;
		double popuMax = 0;
		double popuMin = 9000000000000; //set initial values.
		double areaMax = 0;
		double areaMin = 9000000000000;
		double areaTot = 0;
		int n = 0;
		while (nodoActual != NULL)
		{
			String ^strCode = gcnew String(nodoActual->miPais->codigo);
			if (MyCodes->Contains(strCode))
			{
				n++; //get number of countries
				promPopulation += nodoActual->miPais->poblacion;
				if (nodoActual->miPais->poblacion > popuMax) //population max
				{
					popuMax = nodoActual->miPais->poblacion;
				}
				areaTot += nodoActual->miPais->areaInSqKm;  //get area
				if (popuMin > nodoActual->miPais->poblacion)//Poblacion minima
				{
					popuMin = nodoActual->miPais->poblacion;
				}
				if (nodoActual->miPais->areaInSqKm > areaMax) // Area max
				{
					areaMax = nodoActual->miPais->areaInSqKm;
				}
				if (areaMin > nodoActual->miPais->areaInSqKm)//Area minima
				{
					areaMin = nodoActual->miPais->areaInSqKm;
				}
			}
			nodoActual = nodoActual->siguiente;	//Avanzo al siguiente nodo.
		}
		if (MyCodes->Count > 0)
		{//Print results
			listBox1->Items->Add("Average population: " + Math::Truncate((promPopulation / n))); //Prom population 
			listBox1->Items->Add("Max Population: " + popuMax);
			listBox1->Items->Add("Min Population: " + popuMin);
			listBox1->Items->Add("Max Area: " + areaMax);
			listBox1->Items->Add("Min Area: " + areaMin);
			listBox1->Items->Add("Population by Sq km: " + Math::Round((promPopulation / areaTot))); //Population density
		}
		else
		{
			listBox1->Items->Add("Enter codes to display...");
		}
		//reset all
		listBox2->Items->Clear();
		MyCodes->Clear();
		n = 0;
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//Map

		//Set link
		String^ urlMaps = "https://www.google.com/maps/search/" + comboBox1->Text + "/@15.7663621,-92.4759414,7z/data=!3m1!4b1!5m1!1e4?hl=es";
		webBrowser1->Navigate(urlMaps);
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//Lenguajes

																										  //Clean other options
		comboBox1->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodo= miLista->inicio;
		listBox1->Items->Clear(); //Clean list
		String ^ comb = (comboBox2->Text->ToUpper()); 

		while (nodo != NULL)
		{
			String ^strNombre = gcnew String(nodo->miPais->nombre);
			String ^strLan = gcnew String(nodo->miPais->languages);
			//Search
			if (strLan->ToUpper()->Contains(comb) && comb != "" && strLan != "") //check if does have a language
			{//Print
				listBox1->Items->Add("Country Name: " + strNombre);
			}
		    if(strLan == "" && comb =="")//if dont have a language
			{//Print
				listBox1->Items->Add("Country Name: " + strNombre);
			}
			nodo = nodo->siguiente; //Avanzo al siguinete nodo
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {// Sort by Name
		listBox1->Items->Clear(); //clean list

								  //Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoA = miLista->inicio;
		if (sort)
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->N > nodoA->siguiente->miPais->N) //conpare country number
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
			}
		}
		else
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->N < nodoA->siguiente->miPais->N) //conpare country number
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
			}
		}
		nodoA = miLista->inicio;
		while (nodoA != NULL)
		{//Print
			String ^strNombre = gcnew String(nodoA->miPais->nombre);
			listBox1->Items->Add(strNombre );
			nodoA = nodoA->siguiente; //avanzo al siguinte nodo;
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) { //Sort by Population 
		listBox1->Items->Clear();

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoA = miLista->inicio;
		Nodo *nodoB = miLista->inicio;

		//while (nodoB)
		if (sort)
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->poblacion > nodoA->siguiente->miPais->poblacion) //Compare population between nodes
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
				//nodoB = nodoB->siguiente; //avanzo al siguinte nodo;
			}
		}
		else
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->poblacion < nodoA->siguiente->miPais->poblacion) //Compare population between nodes
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
				//nodoB = nodoB->siguiente; //avanzo al siguinte nodo;
			}
		}
		nodoA = miLista->inicio;
		while (nodoA != NULL)
		{//Print
			String ^strNombre = gcnew String(nodoA->miPais->nombre);
			listBox1->Items->Add(strNombre + "  Population: " + nodoA->miPais->poblacion);
			nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
		}
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {//Area
		listBox1->Items->Clear();

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoA = miLista->inicio;
		if (sort)
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->areaInSqKm > nodoA->siguiente->miPais->areaInSqKm)
					{

						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente; //avanzo al siguinte nodo;
				}
			}
		}
		else
		{
			for (int i = 0; i < 500; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					if (nodoA->miPais->areaInSqKm < nodoA->siguiente->miPais->areaInSqKm)
					{

						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente; //avanzo al siguinte nodo;
				}
			}

		}
		nodoA = miLista->inicio;
		while (nodoA != NULL)
		{//Print
			String ^strNombre = gcnew String(nodoA->miPais->nombre);
			listBox1->Items->Add(strNombre + "  Area: " + nodoA->miPais->areaInSqKm);
			nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
		}
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		//Map
		//Set link
		String^ urlMaps = "https://www.google.com/maps/search/" + comboBox1->Text + "/@15.7663621,-92.4759414,7z/data=!3m1!4b1!5m1!1e4?hl=es";
		//open browser
		System::Diagnostics::Process::Start(urlMaps);
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {//Contint
		listBox1->Items->Clear();

		//Clean other options
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox5->Text = "";
		textBox1->Text = "";

		Nodo *nodoA = miLista->inicio;
		if (sort)
		{
			for (int i = 0; i < 250; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					String ^strCodeA = gcnew String(nodoA->miPais->continent);
					String ^strCodeB = gcnew String(nodoA->siguiente->miPais->continent);
					if (String::Compare(strCodeA, strCodeB) > 0)
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
			}
		}
		else
		{
			for (int i = 0; i < 250; i++)
			{
				nodoA = miLista->inicio;
				while (nodoA && nodoA->siguiente) {
					String ^strCodeA = gcnew String(nodoA->miPais->continent);
					String ^strCodeB = gcnew String(nodoA->siguiente->miPais->continent);
					if (String::Compare(strCodeA, strCodeB)<0)
					{
						//swap
						if (nodoA->anterior == NULL) //if is the first in the list
						{
							nodoA->siguiente->siguiente->anterior = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = nodoA->anterior->siguiente;
							nodoA->anterior->siguiente = nodoA;
							nodoA->anterior->anterior = NULL;
							miLista->inicio = nodoA->anterior;

						}
						else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
						{
							nodoA->anterior->siguiente = nodoA->siguiente;
							nodoA->siguiente->anterior = nodoA->anterior;
							nodoA->siguiente->siguiente = nodoA;
							nodoA->anterior = nodoA->siguiente;
							nodoA->siguiente = NULL;
							miLista->fin = nodoA;
						}
						else // if the swap is between 4 nodes
						{
							nodoA->siguiente = nodoA->siguiente->siguiente;
							nodoA->anterior->siguiente = nodoA->siguiente->anterior;
							nodoA->siguiente->anterior->siguiente = nodoA;
							nodoA->siguiente->anterior = nodoA;
							nodoA->anterior->siguiente->anterior = nodoA->anterior;
							nodoA->anterior = nodoA->anterior->siguiente;
						}
					}
					nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
				}
			}

		}
		nodoA = miLista->inicio;
		while (nodoA != NULL)
		{//Print
			String ^strNombre = gcnew String(nodoA->miPais->nombre);
			String ^strContinent = gcnew String(nodoA->miPais->continentName);
			listBox1->Items->Add("Continent: " + strContinent + "    Country: " + strNombre);
			nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
		}
	}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {//Sort by Code
	listBox1->Items->Clear();

	//Clean other options
	comboBox1->Text = "";
	comboBox2->Text = "";
	comboBox3->Text = "";
	comboBox4->Text = "";
	comboBox5->Text = "";
	textBox1->Text = "";

	Nodo *nodoA = miLista->inicio;

	if (sort)
	{
		for (int i = 0; i < 500; i++)
		{
			nodoA = miLista->inicio;
			while (nodoA && nodoA->siguiente) {

				String ^strCodeA = gcnew String(nodoA->miPais->codigo);
				String ^strCodeB = gcnew String(nodoA->siguiente->miPais->codigo);
				if (String::Compare(strCodeA, strCodeB) > 0) //compare Code
				{
					//Swap
					if (nodoA->anterior == NULL) //if is the first in the list
					{
						nodoA->siguiente->siguiente->anterior = nodoA;
						nodoA->anterior = nodoA->siguiente;
						nodoA->siguiente = nodoA->anterior->siguiente;
						nodoA->anterior->siguiente = nodoA;
						nodoA->anterior->anterior = NULL;
						miLista->inicio = nodoA->anterior;

					}
					else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
					{
						nodoA->anterior->siguiente = nodoA->siguiente;
						nodoA->siguiente->anterior = nodoA->anterior;
						nodoA->siguiente->siguiente = nodoA;
						nodoA->anterior = nodoA->siguiente;
						nodoA->siguiente = NULL;
						miLista->fin = nodoA;
					}
					else // if the swap is between 4 nodes
					{
						nodoA->siguiente = nodoA->siguiente->siguiente;
						nodoA->anterior->siguiente = nodoA->siguiente->anterior;
						nodoA->siguiente->anterior->siguiente = nodoA;
						nodoA->siguiente->anterior = nodoA;
						nodoA->anterior->siguiente->anterior = nodoA->anterior;
						nodoA->anterior = nodoA->anterior->siguiente;
					}
				}
				nodoA = nodoA->siguiente; //avanzo al siguinte nodo;
			}
		}
	}
	else
	{
		for (int i = 0; i < 500; i++)
		{
			nodoA = miLista->inicio;
			while (nodoA && nodoA->siguiente) {

				String ^strCodeA = gcnew String(nodoA->miPais->codigo);
				String ^strCodeB = gcnew String(nodoA->siguiente->miPais->codigo);
				if (String::Compare(strCodeA, strCodeB)<0) //compare Code
				{
					//Swap
					if (nodoA->anterior == NULL) //if is the first in the list
					{
						nodoA->siguiente->siguiente->anterior = nodoA;
						nodoA->anterior = nodoA->siguiente;
						nodoA->siguiente = nodoA->anterior->siguiente;
						nodoA->anterior->siguiente = nodoA;
						nodoA->anterior->anterior = NULL;
						miLista->inicio = nodoA->anterior;

					}
					else if (nodoA->siguiente == NULL || nodoA->siguiente->siguiente == NULL) // is the last
					{
						nodoA->anterior->siguiente = nodoA->siguiente;
						nodoA->siguiente->anterior = nodoA->anterior;
						nodoA->siguiente->siguiente = nodoA;
						nodoA->anterior = nodoA->siguiente;
						nodoA->siguiente = NULL;
						miLista->fin = nodoA;
					}
					else // if the swap is between 4 nodes
					{
						nodoA->siguiente = nodoA->siguiente->siguiente;
						nodoA->anterior->siguiente = nodoA->siguiente->anterior;
						nodoA->siguiente->anterior->siguiente = nodoA;
						nodoA->siguiente->anterior = nodoA;
						nodoA->anterior->siguiente->anterior = nodoA->anterior;
						nodoA->anterior = nodoA->anterior->siguiente;
					}
				}
				nodoA = nodoA->siguiente; //avanzo al siguinte nodo;
			}
		}
	}
	nodoA = miLista->inicio;
	while (nodoA != NULL)
	{//Print
		String ^strNombre = gcnew String(nodoA->miPais->nombre);
		String ^strCode = gcnew String(nodoA->miPais->codigo);
		listBox1->Items->Add(strNombre + "  Code: " + strCode);
		nodoA = nodoA->siguiente;//avanzo al siguinte nodo;
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	//Sepecific search by languages

	//Clean other options
	comboBox1->Text = "";
	comboBox3->Text = "";
	comboBox4->Text = "";
	comboBox5->Text = "";

	String ^txtBox = textBox1->Text->ToUpper();
	Nodo *nodo = miLista->inicio;
	listBox1->Items->Clear(); 
	bool n = true;
	while (nodo)
	{
		String ^strLan = gcnew String(nodo->miPais->languages);
		String ^strName = gcnew String(nodo->miPais->nombre);
		if (strLan->ToUpper()->Contains(txtBox) && txtBox != "")
		{//Print
			listBox1->Items->Add("Country Name: " + strName);
			n = false;
		}
		nodo = nodo->siguiente; //avanzo al siguinte nodo;
		
	}
	if (n) { //if nothing displayed
		listBox1->Items->Add("Please write the correct code language...");
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {//Sort
    
	if (sort)
	{
		label19->Text = "Descending";
		sort = false;
	}
	else
	{
		label19->Text = "Ascending";
		sort = true;
	}
}
};
}




/*
				if (nodoA->anterior == NULL)
				{
					nodoA->siguiente = nodoA->siguiente->siguiente;
					nodoA->siguiente->anterior->anterior->anterior = nodoA->siguiente->anterior;
					nodoA->siguiente->anterior->anterior = NULL;
					nodoA->siguiente->anterior->siguiente = nodoA;
					nodoA->siguiente->anterior = nodoA;
				}
				else if(nodoA->siguiente == NULL)
				{
					nodoA->anterior->siguiente = nodoA->siguiente;
					nodoA->siguiente->anterior = nodoA->anterior;
					nodoA->siguiente->siguiente = nodoA;
					nodoA->siguiente = NULL;
					nodoA->anterior = nodoA->anterior->siguiente;
				}
				else
				{
					nodoA->siguiente = nodoA->siguiente;
					nodoA->siguiente->anterior = nodoA->anterior;
					nodoA->siguiente->siguiente->anterior = nodoA;
					nodoA->siguiente->anterior->siguiente = nodoA->siguiente;
					nodoA->siguiente = nodoA->siguiente->siguiente;
					nodoA->siguiente->anterior->anterior->siguiente = nodoA;
				}*/

				/*
				if (nodoA->anterior == NULL)
				{
				nodoA->siguiente = nodoA->siguiente->siguiente;
				nodoA->siguiente->anterior->anterior->anterior = nodoA->siguiente->anterior;
				nodoA->siguiente->anterior->anterior = NULL;
				nodoA->siguiente->anterior->siguiente = nodoA;
				nodoA->siguiente->anterior = nodoA;
				}
				else if(nodoA->siguiente == NULL)
				{
				nodoA->anterior->siguiente = nodoA->siguiente;
				nodoA->siguiente->anterior = nodoA->anterior;
				nodoA->siguiente->siguiente = nodoA;
				nodoA->siguiente = NULL;
				nodoA->anterior = nodoA->anterior->siguiente;
				}
				else
				{
				nodoA->siguiente = nodoA->siguiente;
				nodoA->siguiente->anterior = nodoA->anterior;
				nodoA->siguiente->siguiente->anterior = nodoA;
				nodoA->siguiente->anterior->siguiente = nodoA->siguiente;
				nodoA->siguiente = nodoA->siguiente->siguiente;
				nodoA->siguiente->anterior->anterior->siguiente = nodoA;
				}*/

				/*while (nodoA != NULL && nodoA->siguiente != NULL)
				{
				while (nodoB != NULL && nodoB->siguiente != NULL)
				{
				if (nodoB->miPais->areaInSqKm > nodoB->siguiente->miPais->areaInSqKm)
				{

				if (nodoA->anterior == NULL)
				{
				nodoA->siguiente = nodoA->siguiente->siguiente;
				nodoA->siguiente->anterior->anterior = NULL;
				nodoA->anterior = nodoA->siguiente->anterior;
				nodoA->anterior->siguiente = nodoA;
				nodoA->siguiente->anterior = nodoA;
				}
				else if (nodoA->siguiente == NULL)
				{
				nodoA->siguiente = nodoA->siguiente->siguiente;
				nodoA->anterior->siguiente = nodoA->siguiente->anterior;
				nodoA->siguiente->anterior = nodoA;

				}
				else
				{

				}
				}
				nodoB = nodoB->siguiente;
				}
				nodoA = nodoA->siguiente;
				}*/