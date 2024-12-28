#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    CLRStuff::MyForm^ myForm = gcnew CLRStuff::MyForm();
    Application::Run(myForm);

    return 0;
}
