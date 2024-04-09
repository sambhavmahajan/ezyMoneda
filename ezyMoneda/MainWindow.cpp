#include "MainWindow.h"
#include <array>
using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(cli::array<String^> ^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ezyMoneda::MainWindow form; Application::Run(% form);

}