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
            // Código de inicialización de componentes aquí
        }

    private:
        System::ComponentModel::Container^ components;
    };
}
