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
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->SuspendLayout();
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(424, 73);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(80, 17);
            this->checkBox1->TabIndex = 0;
            this->checkBox1->Text = L"checkBox1";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // MyForm
            // 
            this->ClientSize = System::Drawing::Size(824, 261);
            this->Controls->Add(this->checkBox1);
            this->Name = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    private: System::Windows::Forms::CheckBox^ checkBox1;

    private:
        System::ComponentModel::Container^ components;
    };
}
