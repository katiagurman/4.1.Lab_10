#pragma once
#using <Microsoft.VisualBasic.dll>
using namespace System::Collections::Generic;
namespace My41Lab10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(456, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������� ����� ����� �����. ������ ���� �������� �������� �����.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������ ����� �����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"������ �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(41, 136);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 164);
			this->listBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 47);
			this->button2->TabIndex = 5;
			this->button2->Text = L"�������� �������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(240, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(366, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 169);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 419);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; // ���������� �����
		int lastAddedValue;
		bool isQueueInitialized = false; // ����������� �����
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized)
		{
			isQueueInitialized = true;
		}
		// �������� ����� ����� � textBox1
		int size = Convert::ToInt32(textBox1->Text);
		if (myQueue1.Count < size)
		{

		    String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("������ ������� �����:", "��������� ��������", "0");
					if (valueInput == "")
					{
						return;
					}
			int inputValue = Convert::ToInt32(valueInput);
			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString());
			lastAddedValue = inputValue;
		}
		else
		{
			listBox1->Items->Add("��������� ��� �����");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("����� �������");
		}
	}
	else
	{
		listBox1->Items->Add("����� �� �� ���� ������������");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	for each (int value in myQueue1) {
		if (value > 0) {
			sum += value;
		}
	}
	MessageBox::Show("���� �������� ��������: " + sum.ToString());
}
};
}
