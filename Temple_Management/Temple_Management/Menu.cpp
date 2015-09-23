#include "common.h"

void MenuF(HWND hWnd, WPARAM wParam)
{
	int ChoseExitOrSave = 0;
		
	switch (LOWORD(wParam)){
	case ID_Believer:
		break;
	case ID_Event:
		break;
	case ID_Print:
		break;
	case ID_Exit:
		ChoseExitOrSave = MessageBox(hWnd, TEXT("입력된 정보를 저장 후 종료 하시겠습니까?"), TEXT("종료"), MB_OKCANCEL);
		if (ChoseExitOrSave == IDCANCEL)
			break;
		PostQuitMessage(0);
		return;
	case ID_INF:
		break;
	}
}