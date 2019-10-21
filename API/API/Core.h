#pragma once
#include <windows.h>
#include <vector>
#include <list>
#include <concurrent_unordered_map.h>

using namespace std;

#include "Macro.h"


class Core
{
public:
	Core();
	~Core();

private:
	static bool m_bLoop;

private:
	HINSTANCE m_hInst;
	HWND m_hWnd;
	RESOLUTION m_tRS;
	HDC m_hDC;

public:
	bool Init(HINSTANCE hInst);
	int Run();

private:
	static Core* m_Plnst;//�������� ó�� ���

public:// ��ü�� �ϳ��� �����.
	static Core* GetInst()
	{
		if (!m_Plnst)
		{
			m_Plnst = new Core;
			return m_Plnst;
		}
	}
	static void DestroyInst()
	{
		SAFE_DELETE(m_Plnst);
	}
};
