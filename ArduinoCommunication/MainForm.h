#pragma once

namespace ArduinoCommunication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ sp;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbPort;
	private: System::Windows::Forms::ComboBox^ cbBaud;
	private: System::Windows::Forms::Button^ btnConnect;


	private: System::Windows::Forms::TextBox^ tbSend;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::TextBox^ tbRead;
	private: System::Windows::Forms::Button^ button1;







	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->sp = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaud = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->tbSend = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->tbRead = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sp
			// 
			this->sp->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MainForm::sp_DataReceived);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Serial Port : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Baud rate :";
			// 
			// cbPort
			// 
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(82, 6);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(121, 21);
			this->cbPort->TabIndex = 2;
			// 
			// cbBaud
			// 
			this->cbBaud->FormattingEnabled = true;
			this->cbBaud->Location = System::Drawing::Point(82, 33);
			this->cbBaud->Name = L"cbBaud";
			this->cbBaud->Size = System::Drawing::Size(121, 21);
			this->cbBaud->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(82, 60);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(121, 23);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MainForm::btnConnect_Click);
			// 
			// tbSend
			// 
			this->tbSend->Location = System::Drawing::Point(235, 373);
			this->tbSend->Name = L"tbSend";
			this->tbSend->Size = System::Drawing::Size(218, 20);
			this->tbSend->TabIndex = 6;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(457, 373);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 7;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &MainForm::btnSend_Click);
			// 
			// tbRead
			// 
			this->tbRead->Location = System::Drawing::Point(235, 9);
			this->tbRead->Multiline = true;
			this->tbRead->Name = L"tbRead";
			this->tbRead->Size = System::Drawing::Size(297, 358);
			this->tbRead->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Glow Led";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 405);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbRead);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->tbSend);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaud);
			this->Controls->Add(this->cbPort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		array<Object^>^ comport = SerialPort::GetPortNames();
		cbPort->Items->AddRange(comport);
		cbPort->SelectedIndex = 0;

		array<Object^>^ baudrate = { 9600, 57600, 115200 };
		cbBaud->Items->AddRange(baudrate);
		cbBaud->SelectedIndex = 0;
	}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (btnConnect->Text == "Connect") {
				if (sp->IsOpen) {
					sp->Close();
				}
				sp->PortName = cbPort->Text;
				sp->BaudRate = Int32::Parse(cbBaud->Text);
				sp->Open();
				btnConnect->Text = "Disconnect";

			}
			else if (btnConnect->Text == "Disconnect") {
				sp->Close();
				btnConnect->Text = "Connect";
			}
		}
		catch (...) {
			MessageBox::Show("Something is error");
		}
	}
	private: System::Void sp_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		String^ data = sp->ReadLine() + "\n";

		// Vérifiez si l'invocation est nécessaire
		if (tbRead->InvokeRequired) {
			// Utilisez Invoke pour mettre à jour le contrôle TextBox sur le thread UI principal
			tbRead->Invoke(gcnew Action<String^>(this, &MainForm::AppendText), data);
		}
		else {
			// Appeler directement la fonction si le thread actuel est le thread UI principal
			AppendText(data);
		}
	}

		   // Méthode pour ajouter du texte au contrôle TextBox
		   delegate void AppendTextDelegate(String^ text);
		   void AppendText(String^ text) {
			   tbRead->AppendText(text);
		   }

	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		sp->WriteLine(tbSend->Text);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (button1->Text == "Glow Led") {
				button1->Text = "Turn Off Led";

			}
			else if (button1->Text == "Turn Off Led") {
				button1->Text = "Glow Led";
			};

			sp->Write("a");
		}
		catch (...) {
			MessageBox::Show("Something is error");
		}
	}
};
}
