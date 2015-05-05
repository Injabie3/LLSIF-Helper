#include "scoreMatch.h"
#include "tokenCollection.h"
#include "uiMain.h"
#include "uiAbout.h"
using namespace LLSIFAssistant2013;

int main()
{
	tokenCollection uiMainTokenCollection;
	uiMain FormMain;
	Application::Run(%FormMain);
	return 0;
}