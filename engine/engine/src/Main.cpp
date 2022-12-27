#include "StdAfx.h"
#include <Windows.h>
#include "window/WindowWindows.h"
#if !WITH_EDITOR
//int main(int argc, char** argv)
//{
//	std::unique_ptr<engine::GameModule> game = engine::CreateGame();
//	return game->Run();
//}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	//1. Create Window
	engine::WindowWindows window(hInstance, nCmdShow);
	return window.Run();
}
#endif