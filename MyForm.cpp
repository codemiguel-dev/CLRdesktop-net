#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    // Configurar la compatibilidad con el renderizado de texto y habilitar los estilos visuales
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    // Crear una instancia de MyForm y ejecutarla
    CLRStuff::MyForm^ myFrm = gcnew CLRStuff::MyForm();
    Application::Run(myFrm);

    return 0; // Indicar que el programa terminó correctamente
}
