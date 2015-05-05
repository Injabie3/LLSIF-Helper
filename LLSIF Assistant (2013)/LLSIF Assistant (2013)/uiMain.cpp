#include "scoreMatch.h"
#include "tokenCollection.h"
#include "uiMain.h"
#include "uiAbout.h"
#include <Windows.h>
using namespace LLSIFAssistant2013;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow)
{
	/* do your stuff here. If you return from this function the program ends */
	tokenCollection uiMainTokenCollection;
	uiMain FormMain;
	Application::Run(%FormMain);
	return 0;
}

//int main()
//{
//	tokenCollection uiMainTokenCollection;
//	uiMain FormMain;
//	Application::Run(%FormMain);
//	return 0;
//}