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
		ChoseExitOrSave = MessageBox(hWnd, TEXT("�Էµ� ������ ���� �� ���� �Ͻðڽ��ϱ�?"), TEXT("����"), MB_OKCANCEL);
		if (ChoseExitOrSave == IDCANCEL)
			break;
		PostQuitMessage(0);
		return;
	case ID_INF:
		break;
	}
}