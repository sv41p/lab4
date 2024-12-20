
#pragma once
#include "MainWindow.h"

namespace DBC {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace DBC;
	/// <summary>
	/// ������ ��� ConnectWindow
	/// </summary>


	public ref class ConnectWindow : public System::Windows::Forms::Form
	{
	public:
		String^ connectingstring;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;



	public:


	public:

	public:

	public:

	public:

	public:
		SqlConnection^ connection;
		ConnectWindow(void)
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
		~ConnectWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::TextBox^ txt_passwd;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnClick_Connect;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_server;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_passwd = (gcnew System::Windows::Forms::TextBox());
			this->btnClick_Connect = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_server = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// txt_login
			// 
			this->txt_login->Location = System::Drawing::Point(134, 100);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(239, 20);
			this->txt_login->TabIndex = 0;
			this->txt_login->TextChanged += gcnew System::EventHandler(this, &ConnectWindow::textBox1_TextChanged);
			// 
			// txt_passwd
			// 
			this->txt_passwd->Location = System::Drawing::Point(134, 129);
			this->txt_passwd->Name = L"txt_passwd";
			this->txt_passwd->PasswordChar = '*';
			this->txt_passwd->Size = System::Drawing::Size(239, 20);
			this->txt_passwd->TabIndex = 1;
			this->txt_passwd->UseSystemPasswordChar = true;
			// 
			// btnClick_Connect
			// 
			this->btnClick_Connect->Location = System::Drawing::Point(194, 170);
			this->btnClick_Connect->Name = L"btnClick_Connect";
			this->btnClick_Connect->Size = System::Drawing::Size(134, 23);
			this->btnClick_Connect->TabIndex = 2;
			this->btnClick_Connect->Text = L"Connect";
			this->btnClick_Connect->UseVisualStyleBackColor = true;
			this->btnClick_Connect->Click += gcnew System::EventHandler(this, &ConnectWindow::btnClick_Connect_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(379, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &ConnectWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(379, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &ConnectWindow::label2_Click);
			// 
			// txt_server
			// 
			this->txt_server->Location = System::Drawing::Point(134, 74);
			this->txt_server->Name = L"txt_server";
			this->txt_server->Size = System::Drawing::Size(238, 20);
			this->txt_server->TabIndex = 5;
			this->txt_server->TextChanged += gcnew System::EventHandler(this, &ConnectWindow::txt_server_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(379, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Server";
			this->label3->Click += gcnew System::EventHandler(this, &ConnectWindow::label3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &ConnectWindow::openFileDialog1_FileOk);
			// 
			// ConnectWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(493, 228);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_server);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClick_Connect);
			this->Controls->Add(this->txt_passwd);
			this->Controls->Add(this->txt_login);
			this->ForeColor = System::Drawing::Color::Coral;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ConnectWindow";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &ConnectWindow::ConnectWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClick_Connect_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Server = txt_server->Text;
		String^ login = txt_login->Text;
		String^ password = txt_passwd->Text;
		connectingstring = "Data Source=" + Server + ";User ID=" + login + ";Password=" + password + ";";
		try {
			// ��������� ����������
			connection = gcnew SqlConnection(connectingstring);
			connection->Open();
			this->Hide();
			MessageBox::Show("Connection successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			MainWindow^ window = gcnew MainWindow(connection);
			window->Show();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Connection error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_server_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ConnectWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
