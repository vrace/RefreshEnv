#include <Windows.h>

void WINAPI RefreshEnv(void)
{
	SendMessage(HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM)"Environment");
}
