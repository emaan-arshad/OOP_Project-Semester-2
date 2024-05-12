#pragma once

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ Picture;
	private: System::Windows::Forms::Button^ left;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Equals;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Button^ Right;
	private: System::Windows::Forms::Button^ Close;
	private: System::Windows::Forms::Button^ Open;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ OFD;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
			this->left = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Equals = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->Right = (gcnew System::Windows::Forms::Button());
			this->Close = (gcnew System::Windows::Forms::Button());
			this->Open = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->OFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->BeginInit();
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Picture);
			this->panel1->Location = System::Drawing::Point(12, 81);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(741, 310);
			this->panel1->TabIndex = 18;
			// 
			// Picture
			// 
			this->Picture->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Picture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Picture->Location = System::Drawing::Point(12, 12);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(718, 295);
			this->Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Picture->TabIndex = 0;
			this->Picture->TabStop = false;
			// 
			// left
			// 
			this->left->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->left->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->left->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->left->Location = System::Drawing::Point(225, 397);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(83, 35);
			this->left->TabIndex = 16;
			this->left->Text = L"<";
			this->left->UseVisualStyleBackColor = false;
			this->left->Click += gcnew System::EventHandler(this, &MyForm::left_Click);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel->Controls->Add(this->label3);
			this->panel->Controls->Add(this->Equals);
			this->panel->Controls->Add(this->minus);
			this->panel->Controls->Add(this->plus);
			this->panel->Controls->Add(this->Reset);
			this->panel->Location = System::Drawing::Point(128, 455);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(614, 73);
			this->panel->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(170, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ZOOM";
			// 
			// Equals
			// 
			this->Equals->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Equals->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Equals->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Equals->Location = System::Drawing::Point(530, 17);
			this->Equals->Name = L"Equals";
			this->Equals->Size = System::Drawing::Size(75, 49);
			this->Equals->TabIndex = 6;
			this->Equals->Text = L"=";
			this->Equals->UseVisualStyleBackColor = false;
			this->Equals->Click += gcnew System::EventHandler(this, &MyForm::Equals_Click);
			// 
			// minus
			// 
			this->minus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->minus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(422, 17);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 49);
			this->minus->TabIndex = 9;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// plus
			// 
			this->plus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->plus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(301, 15);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 49);
			this->plus->TabIndex = 8;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// Reset
			// 
			this->Reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Reset->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Reset->Location = System::Drawing::Point(15, 17);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(113, 49);
			this->Reset->TabIndex = 2;
			this->Reset->Text = L"Reset All";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// Right
			// 
			this->Right->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Right->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Right->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Right->Location = System::Drawing::Point(429, 397);
			this->Right->Name = L"Right";
			this->Right->Size = System::Drawing::Size(85, 35);
			this->Right->TabIndex = 15;
			this->Right->Text = L">";
			this->Right->UseVisualStyleBackColor = false;
			this->Right->Click += gcnew System::EventHandler(this, &MyForm::Right_Click);
			// 
			// Close
			// 
			this->Close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Close->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Close->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Close->Location = System::Drawing::Point(14, 472);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(75, 49);
			this->Close->TabIndex = 13;
			this->Close->Text = L"Close";
			this->Close->UseVisualStyleBackColor = false;
			this->Close->Click += gcnew System::EventHandler(this, &MyForm::Close_Click);
			// 
			// Open
			// 
			this->Open->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Open->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Open->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Open->Location = System::Drawing::Point(15, 406);
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(75, 50);
			this->Open->TabIndex = 4;
			this->Open->Text = L"Open";
			this->Open->UseVisualStyleBackColor = false;
			this->Open->Click += gcnew System::EventHandler(this, &MyForm::Open_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ravie", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(115, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(534, 52);
			this->label2->TabIndex = 12;
			this->label2->Text = L"IMAGE VIEWER APP";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OFD
			// 
			this->OFD->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(767, 540);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->left);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->Right);
			this->Controls->Add(this->Close);
			this->Controls->Add(this->Open);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(783, 579);
			this->MinimumSize = System::Drawing::Size(783, 579);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->EndInit();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		array<String^>^ files;//array to store files in the dirrctory
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;//to keep count
		int Zoom = 0;


	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Restart();
	}
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		Picture->ImageLocation = "";
	}
	private: System::Void Open_Click(System::Object^ sender, System::EventArgs^ e) {

		if (OFD->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Picture->ImageLocation = OFD->FileName;
			path = System::IO::Path::GetDirectoryName(OFD->FileName);
			files = System::IO::Directory::GetFiles(path);
			for (int i = 0; i < files->Length; i++) {
				if (files[i] == OFD->FileName) {
					currentIndex = i;
					break;
				}
			}
		}
	}
	private: System::Void Right_Click(System::Object^ sender, System::EventArgs^ e) {

		if (currentIndex != files->Length - 1) {
			currentIndex++;
		}
		Picture->ImageLocation = files[currentIndex];
	}
	private: System::Void left_Click(System::Object^ sender, System::EventArgs^ e) {

		if (currentIndex != 0) {
			currentIndex--;
		}
		Picture->ImageLocation = files[currentIndex];

	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {

		Picture->Top -= zoomLevel / 2;
		Picture->Left -= zoomLevel / 2;
		Picture->Height += zoomLevel;
		Picture->Width += zoomLevel;
		Zoom++;
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {


		Picture->Top += zoomLevel / 2;
		Picture->Left += zoomLevel / 2;
		Picture->Height -= zoomLevel;
		Picture->Width -= zoomLevel;
		Zoom--;

	}
	private: System::Void Equals_Click(System::Object^ sender, System::EventArgs^ e) {


		int newZoom = Zoom;
		if (Zoom > 0) {
			for (int i = 0; i < newZoom; i++) {
				minus->PerformClick();
			}
		}
		if (Zoom < 0) {
			for (int i = 0; i > newZoom; i--) {
				plus->PerformClick();
			}
		}
		Zoom = 0;
	}
	

};
}
