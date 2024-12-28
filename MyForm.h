#pragma once

namespace CLRStuff {
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MyForm : public Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(106, 119);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(127, 23);
            this->button1->TabIndex = 1;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(99, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(586, 39);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Bienvenido curso de c++ de escritorio";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // MyForm
            // 
            this->ClientSize = System::Drawing::Size(824, 261);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;

    private:
        System::ComponentModel::Container^ components;
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
