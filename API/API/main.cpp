#include"Core.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	//초기화의 실패 경우 메모리 해제

	if (!Core::GetInst()->Init(hInstance)) {
		Core::DestroyInst();
		return 0;
	}

	// 제대로 들어왔을 경우에는 코어 메모리 해제 이후 리턴한다.
	int iRev = Core::GetInst()->Run();

	Core::DestroyInst();
	return iRev;
}