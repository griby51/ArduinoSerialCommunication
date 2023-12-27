#include "MainForm.h"

using namespace ArduinoCommunication;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	// Activation des effets visuels de Windows XP avant la création de tout contrôle
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Créer la fenêtre principale et l'exécuter
	Application::Run(gcnew MainForm());
	return 0;
}
