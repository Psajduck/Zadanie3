//Jakub Maksajda 209976 "Rzut uko�ny"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^ >^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Zadanie3::MyForm forma;
	Application::Run(% forma);
	return 0;
}