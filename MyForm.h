#pragma once

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>







namespace Zadanie3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ wysokosc;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ predkosc;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ kat;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ czas;
	private: System::Windows::Forms::TextBox^ v_x;





	private: System::Windows::Forms::TextBox^ v_y;
	private: System::Windows::Forms::TextBox^ wysokosc_max;
	private: System::Windows::Forms::TextBox^ zasieg;
	private: System::Windows::Forms::Button^ Oblicz;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ skok_czasu;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ nazwa_pliku;

	private: System::Windows::Forms::Button^ Generuj_plik;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ przyspieszenie_grawitacyjne;
	private: System::Windows::Forms::Label^ label22;








	protected:



	protected:

































	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wysokosc = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->predkosc = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->kat = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->czas = (gcnew System::Windows::Forms::TextBox());
			this->v_x = (gcnew System::Windows::Forms::TextBox());
			this->v_y = (gcnew System::Windows::Forms::TextBox());
			this->wysokosc_max = (gcnew System::Windows::Forms::TextBox());
			this->zasieg = (gcnew System::Windows::Forms::TextBox());
			this->Oblicz = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->skok_czasu = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->nazwa_pliku = (gcnew System::Windows::Forms::TextBox());
			this->Generuj_plik = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->przyspieszenie_grawitacyjne = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oProgramieToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(619, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oProgramieToolStripMenuItem_Click);
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->informacjeToolStripMenuItem->Text = L"Informacje";
			this->informacjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informacjeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Początkowa wysokość ciała:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// wysokosc
			// 
			this->wysokosc->Location = System::Drawing::Point(164, 25);
			this->wysokosc->Name = L"wysokosc";
			this->wysokosc->Size = System::Drawing::Size(100, 20);
			this->wysokosc->TabIndex = 2;
			this->wysokosc->Text = L"0";
			this->wysokosc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->wysokosc->TextChanged += gcnew System::EventHandler(this, &MyForm::wysokosc_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(266, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"m";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Prędkość początkowa:*";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// predkosc
			// 
			this->predkosc->Location = System::Drawing::Point(164, 51);
			this->predkosc->Name = L"predkosc";
			this->predkosc->Size = System::Drawing::Size(100, 20);
			this->predkosc->TabIndex = 3;
			this->predkosc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->predkosc->TextChanged += gcnew System::EventHandler(this, &MyForm::predkosc_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(266, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"m/s";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Kąt:*";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// kat
			// 
			this->kat->Location = System::Drawing::Point(164, 77);
			this->kat->Name = L"kat";
			this->kat->Size = System::Drawing::Size(100, 20);
			this->kat->TabIndex = 4;
			this->kat->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->kat->TextChanged += gcnew System::EventHandler(this, &MyForm::kat_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(266, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(11, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"°";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(334, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Czas lotu:";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(334, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Prędkość początkowa (X):";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(334, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Prędkość początkowa (Y):";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(334, 106);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Wysokość maksymalna:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(334, 132);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Zasięg rzutu:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// czas
			// 
			this->czas->Location = System::Drawing::Point(488, 25);
			this->czas->Name = L"czas";
			this->czas->ReadOnly = true;
			this->czas->Size = System::Drawing::Size(100, 20);
			this->czas->TabIndex = 0;
			this->czas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->czas->TextChanged += gcnew System::EventHandler(this, &MyForm::czas_TextChanged);
			// 
			// v_x
			// 
			this->v_x->Location = System::Drawing::Point(488, 51);
			this->v_x->Name = L"v_x";
			this->v_x->ReadOnly = true;
			this->v_x->Size = System::Drawing::Size(100, 20);
			this->v_x->TabIndex = 0;
			this->v_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->v_x->TextChanged += gcnew System::EventHandler(this, &MyForm::v_x_TextChanged);
			// 
			// v_y
			// 
			this->v_y->Location = System::Drawing::Point(488, 77);
			this->v_y->Name = L"v_y";
			this->v_y->ReadOnly = true;
			this->v_y->Size = System::Drawing::Size(100, 20);
			this->v_y->TabIndex = 0;
			this->v_y->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->v_y->TextChanged += gcnew System::EventHandler(this, &MyForm::v_y_TextChanged);
			// 
			// wysokosc_max
			// 
			this->wysokosc_max->Location = System::Drawing::Point(488, 103);
			this->wysokosc_max->Name = L"wysokosc_max";
			this->wysokosc_max->ReadOnly = true;
			this->wysokosc_max->Size = System::Drawing::Size(100, 20);
			this->wysokosc_max->TabIndex = 0;
			this->wysokosc_max->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->wysokosc_max->TextChanged += gcnew System::EventHandler(this, &MyForm::wysokosc_max_TextChanged);
			// 
			// zasieg
			// 
			this->zasieg->Location = System::Drawing::Point(488, 129);
			this->zasieg->Name = L"zasieg";
			this->zasieg->ReadOnly = true;
			this->zasieg->Size = System::Drawing::Size(100, 20);
			this->zasieg->TabIndex = 0;
			this->zasieg->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->zasieg->TextChanged += gcnew System::EventHandler(this, &MyForm::zasieg_TextChanged);
			// 
			// Oblicz
			// 
			this->Oblicz->Location = System::Drawing::Point(269, 161);
			this->Oblicz->Name = L"Oblicz";
			this->Oblicz->Size = System::Drawing::Size(75, 23);
			this->Oblicz->TabIndex = 5;
			this->Oblicz->Text = L"Oblicz";
			this->Oblicz->UseVisualStyleBackColor = true;
			this->Oblicz->Click += gcnew System::EventHandler(this, &MyForm::Oblicz_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(588, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"s";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(588, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"m/s";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(588, 84);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"m/s";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(588, 110);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"m";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(588, 136);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"m";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(16, 279);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(94, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"* - pole wymagane";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(16, 198);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(70, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Skok czasu:*";
			this->label18->Visible = false;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// skok_czasu
			// 
			this->skok_czasu->Location = System::Drawing::Point(92, 195);
			this->skok_czasu->Name = L"skok_czasu";
			this->skok_czasu->Size = System::Drawing::Size(100, 20);
			this->skok_czasu->TabIndex = 7;
			this->skok_czasu->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->skok_czasu->Visible = false;
			this->skok_czasu->TextChanged += gcnew System::EventHandler(this, &MyForm::skok_czasu_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(194, 202);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(12, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"s";
			this->label19->Visible = false;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(240, 198);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(149, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Nazwa pliku z rozszerzeniem:*";
			this->label20->Visible = false;
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// nazwa_pliku
			// 
			this->nazwa_pliku->Location = System::Drawing::Point(391, 195);
			this->nazwa_pliku->Name = L"nazwa_pliku";
			this->nazwa_pliku->Size = System::Drawing::Size(197, 20);
			this->nazwa_pliku->TabIndex = 10;
			this->nazwa_pliku->Text = L"dane.txt";
			this->nazwa_pliku->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->nazwa_pliku->Visible = false;
			this->nazwa_pliku->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Generuj_plik
			// 
			this->Generuj_plik->Location = System::Drawing::Point(269, 232);
			this->Generuj_plik->Name = L"Generuj_plik";
			this->Generuj_plik->Size = System::Drawing::Size(75, 23);
			this->Generuj_plik->TabIndex = 11;
			this->Generuj_plik->Text = L"Generuj plik";
			this->Generuj_plik->UseVisualStyleBackColor = true;
			this->Generuj_plik->Visible = false;
			this->Generuj_plik->Click += gcnew System::EventHandler(this, &MyForm::Generuj_plik_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(13, 106);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(141, 13);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Przyśpieszenie grawitacyjne:";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// przyspieszenie_grawitacyjne
			// 
			this->przyspieszenie_grawitacyjne->Location = System::Drawing::Point(164, 103);
			this->przyspieszenie_grawitacyjne->Name = L"przyspieszenie_grawitacyjne";
			this->przyspieszenie_grawitacyjne->Size = System::Drawing::Size(100, 20);
			this->przyspieszenie_grawitacyjne->TabIndex = 13;
			this->przyspieszenie_grawitacyjne->Text = L"9,81";
			this->przyspieszenie_grawitacyjne->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->przyspieszenie_grawitacyjne->TextChanged += gcnew System::EventHandler(this, &MyForm::przyspieszenie_grawitacyjne_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(266, 106);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 13);
			this->label22->TabIndex = 14;
			this->label22->Text = L"m/s²";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 301);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->przyspieszenie_grawitacyjne);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->Generuj_plik);
			this->Controls->Add(this->nazwa_pliku);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->skok_czasu);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Oblicz);
			this->Controls->Add(this->zasieg);
			this->Controls->Add(this->wysokosc_max);
			this->Controls->Add(this->v_y);
			this->Controls->Add(this->v_x);
			this->Controls->Add(this->czas);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->kat);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->predkosc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->wysokosc);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Rzut ukośny";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void wysokosc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void predkosc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void kat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void czas_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void v_x_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void v_y_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void wysokosc_max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zasieg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Oblicz_Click(System::Object^ sender, System::EventArgs^ e) {
	
	double h = Double::Parse(wysokosc->Text);
	double v = Double::Parse(predkosc->Text);
	double alfa = Double::Parse(kat->Text);
	double g = Double::Parse(przyspieszenie_grawitacyjne->Text);
	alfa = (alfa * M_PI) / 180.0;
	double t_spadania, t_wzoszenia, vx, vy, h_max, t_lotu, z;
	vx = v * cos(alfa);
	vy = v * sin(alfa);
	h_max = h + ((vy * vy) / (2 * g));
	t_wzoszenia = vy / g;
	t_spadania = sqrt(2 * h_max / g);
	t_lotu = t_wzoszenia + t_spadania;
	z = vx * t_lotu;
	czas->Text = t_lotu.ToString();
	v_x->Text = vx.ToString();
	v_y->Text = vy.ToString();
	wysokosc_max->Text = h_max.ToString();
	zasieg->Text = z.ToString();
	label18->Visible = true;
	skok_czasu->Visible = true;
	label19->Visible = true;
	label20->Visible = true;
	nazwa_pliku->Visible = true;
	Generuj_plik->Visible = true;

	MessageBox::Show("Policzone", "Dane", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void skok_czasu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Generuj_plik_Click(System::Object^ sender, System::EventArgs^ e) {

	double sk = Double::Parse(skok_czasu->Text);
	double t = Double::Parse(czas->Text);
	double vx = Double::Parse(v_x->Text);
	double vy = Double::Parse(v_y->Text);
	double h = Double::Parse(wysokosc->Text);
	double g1 = Double::Parse(przyspieszenie_grawitacyjne->Text);
	System::String^ nazwaPliku = nazwa_pliku->Text;
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(nazwaPliku);
	sw->WriteLine("t\tx\ty\tVx\tVy");
	sw->WriteLine("s\tm\tm\tm/s\tm/s");

	for (double i = 0; i <= t; i = i + sk)
	{
		sw->WriteLine("{0:F}\t{1:F}\t{2:F}\t{3:F}\t{4:F}",i,(vx*i),(vy * i - (g1 * i*i / 2) + h),vx,(vy - g1 * i));
	}
	sw->Close();
	MessageBox::Show("Dane zostały zapiasane do pliku", "Dane", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void przyspieszenie_grawitacyjne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void informacjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Program przeprowadza podstawowe obliczenia odnośnie rzutu ukośnego.\r Program umożliwia także wygenerowanie pliku o dowolnym rozszerzeniu.\r\r\r Twórca: Jakub Maksajda", "Podstawowe informacje", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void oProgramieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
