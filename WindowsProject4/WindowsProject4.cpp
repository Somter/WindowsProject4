// WindowsProject4.cpp : Defines the entry point for the application.
//
#include "Windows.h"
#include "windowsx.h"
#include "tchar.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nShowCmd)
{
	WCHAR className[] = L"FirstWindow";

	WNDCLASSEX wndClass;
	wndClass.cbSize = sizeof(WNDCLASSEX);
	wndClass.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
	wndClass.hInstance = hInstance;
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClass.hIconSm = NULL;
	wndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.lpszMenuName = NULL;
	wndClass.lpszClassName = className;


	wndClass.lpfnWndProc = WindowProc;

	if (!RegisterClassEx(&wndClass)) {
		return 0;
	}

	HWND hWnd = CreateWindowEx(
		0,
		className,
		L"My first window",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, //x,y
		CW_USEDEFAULT, CW_USEDEFAULT, //width, height
		NULL,
		NULL,
		hInstance,
		NULL
	);

	ShowWindow(hWnd, nShowCmd);
	UpdateWindow(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		DispatchMessage(&msg);
	}

	return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	//1
	// ◊“Œ¡€ ”¬»ƒ≈“‹ —“¿“»—“» ” Õ”∆ÕŒ Õ¿∆¿“‹ ENTER
	//static int leftCount = 0;	
	//static int rightCount = 0;	
	//static int middleCount = 0;
	//switch (uMsg)
	//{
	//case WM_KEYDOWN:
	//	if (wParam == VK_RETURN) {	
	//		WCHAR str[30];
	//		wsprintf(str, L"Left: %d, Right: %d, Middle: %d", leftCount, rightCount, middleCount);
	//		SetWindowText(hwnd, str);
	//	}
	//	break;
	//case WM_DESTROY:
	//	PostQuitMessage(0);
	//	break;
	//case WM_LBUTTONUP:	
	//	leftCount++;

	//	break;	
	//case WM_RBUTTONUP: 
	//	rightCount++;	

	//	break;	
	//case WM_MBUTTONUP:	
	//	middleCount++;

	//	break;
	//default:
	//	return DefWindowProc(hwnd, uMsg, wParam, lParam);	
	//}

	//2
	/*switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_LBUTTONUP:	
		WCHAR str[20];
		wsprintf(str, L" ‡Î¸ÍÛÎˇÚÓ");	
		SetWindowText(hwnd, str);

		break;	
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);	
	}*/

	//3
	/*switch (uMsg)
	{
	case WM_KEYDOWN:
		if (wParam == VK_RETURN) {	

			RECT rect;
			GetWindowRect(hwnd, &rect); 
			MoveWindow(hwnd, 0, 0, 300, 300, true);	
		}
		if (wParam == VK_DOWN) {
		 
			RECT rect;
			GetWindowRect(hwnd, &rect);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;
			MoveWindow(hwnd, rect.left, rect.top + 10, width, height, true);
		}
		if (wParam == VK_UP) {	
			RECT rect;
			GetWindowRect(hwnd, &rect);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;

			MoveWindow(hwnd, rect.left, rect.top - 10, width, height, true);
		}
		if (wParam == VK_LEFT) {
			RECT rect;
			GetWindowRect(hwnd, &rect);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;
			MoveWindow(hwnd, rect.left - 10, rect.top, width, height, true);
		}
		if (wParam == VK_RIGHT) {
			RECT rect;
			GetWindowRect(hwnd, &rect);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;
			MoveWindow(hwnd, rect.left + 10, rect.top, width, height, true);	
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_LBUTTONUP:
		
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}*/

	
	return 0;
}
