#pragma once
#include "Header.h"
namespace TICTACTO {

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

	protected:

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 447);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		array<Button^, 2> ^button1 = gcnew array<Button^, 2>(3, 3);
		int turn = 0;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		

		for (int i = 0; i < 3; i++)
		{
			for (int h = 0; h < 3; h++)
			{
				button1[i, h] = gcnew Button;
				button1[i, h]->Parent = this; // 'this' is pointing to our form (the parent)
				button1[i, h]->Location = Point(i * 60, h * 60);
				button1[i, h]->Size = (Drawing::Size(50, 50));
				
				
			}
		}
		button1[0,0]->Click += gcnew System::EventHandler(this, &MyForm::Clicked1);
		button1[0, 1]->Click += gcnew System::EventHandler(this, &MyForm::Clicked2);
		button1[0, 2]->Click += gcnew System::EventHandler(this, &MyForm::Clicked3);
		button1[1, 1]->Click += gcnew System::EventHandler(this, &MyForm::Clicked4);
		button1[1, 2]->Click += gcnew System::EventHandler(this, &MyForm::Clicked5);
		button1[1, 0]->Click += gcnew System::EventHandler(this, &MyForm::Clicked6);
		button1[2, 0]->Click += gcnew System::EventHandler(this, &MyForm::Clicked7);
		button1[2, 1]->Click += gcnew System::EventHandler(this, &MyForm::Clicked8);
		button1[2, 2]->Click += gcnew System::EventHandler(this, &MyForm::Clicked9);

		
	}
			 
			
	private:
		
		System::Void Clicked1(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (button1[0, 0]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[0, 0]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[0, 0]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked2(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[0, 1]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[0, 1]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[0, 1]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked3(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[0, 2]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[0, 2]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[0, 2]->Text = "O";

				}
			}
			turn++;
			Checked();

		}
		System::Void Clicked4(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[1, 1]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[1, 1]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[1, 1]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked5(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[1, 2]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[1, 2]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[1, 2]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked6(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[1, 0]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[1, 0]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[1, 0]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked7(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[2, 0]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[2, 0]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[2, 0]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked8(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[2, 1]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[2, 1]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[2, 1]->Text = "O";

				}
			}
			turn++;
			Checked();
		}
		System::Void Clicked9(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (button1[2, 2]->Text == "")
			{
				if (x.lo == true)
				{
					x.lo = !x.lo;
					button1[2, 2]->Text = "X";

				}
				else
				{
					x.lo = !x.lo;
					button1[2, 2]->Text = "O";

				}
			}
			turn++;
			Checked();
		}

		void Checked()
	{
		if (button1[0, 0]->Text == "X" && button1[0, 1]->Text == "X" && button1[0, 2]->Text == "X" || 
			button1[1, 0]->Text == "X" && button1[1, 1]->Text == "X" && button1[1, 2]->Text == "X" ||
			button1[2, 0]->Text == "X" && button1[2, 1]->Text == "X" && button1[2, 2]->Text == "X"||
			button1[0, 0]->Text == "X" && button1[1, 0]->Text == "X" && button1[2, 0]->Text == "X"||
			button1[0, 1]->Text == "X" && button1[1, 1]->Text == "X" && button1[2, 1]->Text == "X"||
			button1[0, 2]->Text == "X" && button1[1, 2]->Text == "X" && button1[2, 2]->Text == "X"||
			button1[0, 0]->Text == "X" && button1[1, 1]->Text == "X" && button1[2, 2]->Text == "X"||
			button1[0, 2]->Text == "X" && button1[1, 1]->Text == "X" && button1[2, 0]->Text == "X")
		{

			MessageBox::Show("X Wins");
			Application::Restart();
		}
		else if(button1[0, 0]->Text == "O" && button1[0, 1]->Text == "O" && button1[0, 2]->Text == "O" ||
			button1[1, 0]->Text == "O" && button1[1, 1]->Text == "O" && button1[1, 2]->Text == "O" ||
			button1[2, 0]->Text == "O" && button1[2, 1]->Text == "O" && button1[2, 2]->Text == "O" ||
			button1[0, 0]->Text == "O" && button1[1, 0]->Text == "O" && button1[2, 0]->Text == "O" ||
			button1[0, 1]->Text == "O" && button1[1, 1]->Text == "O" && button1[2, 1]->Text == "O" ||
			button1[0, 2]->Text == "O" && button1[1, 2]->Text == "O" && button1[2, 2]->Text == "O" ||
			button1[0, 0]->Text == "O" && button1[1, 1]->Text == "O" && button1[2, 2]->Text == "O" ||
			button1[0, 2]->Text == "O" && button1[1, 1]->Text == "O" && button1[2, 0]->Text == "O")
		{
			MessageBox::Show("O Wins");
			Application::Restart();
		}
		else if (turn >= 9)
		{
			MessageBox::Show("Draw");
			Application::Restart();
		}
	}
	};




}
