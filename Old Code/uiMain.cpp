#include "scoreMatchG.h"
#include "tokenCollection.h"
#include "uiMain.h"
#include "uiAbout.h"
#include <Windows.h>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace LLSIFAssistant2013;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int cmdShow)
{
	/* do your stuff here. If you return from this function the program ends */
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