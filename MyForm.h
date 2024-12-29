#pragma once

namespace CLRStuff {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Collections::Generic;

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
            this->btn_message = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->btn_status = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboboxjeson = (gcnew System::Windows::Forms::ComboBox());
            this->btn_get_json = (gcnew System::Windows::Forms::Button());
            this->web_browser = (gcnew System::Windows::Forms::WebBrowser());
            this->web_brow = (gcnew System::Windows::Forms::WebBrowser());
            this->SuspendLayout();
            // 
            // btn_message
            // 
            this->btn_message->Location = System::Drawing::Point(106, 119);
            this->btn_message->Name = L"btn_message";
            this->btn_message->Size = System::Drawing::Size(127, 23);
            this->btn_message->TabIndex = 1;
            this->btn_message->Text = L"Mostrar Mensaje";
            this->btn_message->UseVisualStyleBackColor = true;
            this->btn_message->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(99, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(594, 39);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Bienvenido curso de C++ de escritorio";
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(286, 124);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(104, 17);
            this->checkBox1->TabIndex = 3;
            this->checkBox1->Text = L"Mostrar Mensaje";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // btn_status
            // 
            this->btn_status->Location = System::Drawing::Point(106, 166);
            this->btn_status->Name = L"btn_status";
            this->btn_status->Size = System::Drawing::Size(127, 23);
            this->btn_status->TabIndex = 4;
            this->btn_status->Text = L"Cambiar estado";
            this->btn_status->UseVisualStyleBackColor = true;
            this->btn_status->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(286, 166);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(63, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"label_status";
            // 
            // comboboxjeson
            // 
            this->comboboxjeson->FormattingEnabled = true;
            this->comboboxjeson->Location = System::Drawing::Point(286, 210);
            this->comboboxjeson->Name = L"comboboxjeson";
            this->comboboxjeson->Size = System::Drawing::Size(104, 21);
            this->comboboxjeson->TabIndex = 6;
            // 
            // btn_get_json
            // 
            this->btn_get_json->Location = System::Drawing::Point(106, 207);
            this->btn_get_json->Name = L"btn_get_json";
            this->btn_get_json->Size = System::Drawing::Size(127, 23);
            this->btn_get_json->TabIndex = 7;
            this->btn_get_json->Text = L"Obtener JSON";
            this->btn_get_json->UseVisualStyleBackColor = true;
            this->btn_get_json->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
     
            // 
            // web_brow
            // 
            this->web_brow->Location = System::Drawing::Point(430, 88);
            this->web_brow->MinimumSize = System::Drawing::Size(20, 20);
            this->web_brow->Name = L"web_brow";
            this->web_brow->Size = System::Drawing::Size(551, 417);
            this->web_brow->TabIndex = 8;
            this->web_brow->Navigate("https://www.google.cl/");  // Asegúrate de tener una URL válida

            // 
            // MyForm
            // 
            this->ClientSize = System::Drawing::Size(1038, 446);
            this->Controls->Add(this->web_brow);
            this->Controls->Add(this->btn_get_json);
            this->Controls->Add(this->comboboxjeson);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->btn_status);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btn_message);
            this->Name = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Windows::Forms::Button^ btn_message;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::Button^ btn_status;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboboxjeson;
    private: System::Windows::Forms::Button^ btn_get_json;
private: System::Windows::Forms::WebBrowser^ web_browser;
private: System::Windows::Forms::WebBrowser^ web_brow;



    private:
        System::ComponentModel::Container^ components;

        // Método para mostrar un mensaje con el CheckBox
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (checkBox1->Checked)
            {
                MessageBox::Show("El CheckBox está marcado.", "Estado del CheckBox", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else
            {
                MessageBox::Show("El CheckBox está desmarcado.", "Estado del CheckBox", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        // Método para cambiar el estado del Label
        System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
        {
            label2->Text = "Estado cambiado";
        }

        // Método para cargar datos JSON al ComboBox
        System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e)
        {
            // Simulación de datos JSON
            array<String^>^ jsonItems = { "Item1", "Item2", "Item3", "Item4" };

            // Limpiar ComboBox y agregar datos
            comboboxjeson->Items->Clear();
            for each (String ^ item in jsonItems)
            {
                comboboxjeson->Items->Add(item);
            }

            MessageBox::Show("Datos cargados correctamente en el ComboBox.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

};
}
