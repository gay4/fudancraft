#include "main.h"
#include "AppDelegate.h"
#include "cocos2d.h"
#include <iostream>

USING_NS_CC;

int WINAPI _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
	// just test

    // create the application instance
    AppDelegate app;
    return Application::getInstance()->run();
}
