#include "frmLogin.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SistemaSecurityManView;
[STAThread]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmLogin ventana;
	Application::Run(% ventana);
}