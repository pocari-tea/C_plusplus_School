#include"Core.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	//�ʱ�ȭ�� ���� ��� �޸� ����

	if (!Core::GetInst()->Init(hInstance)) {
		Core::DestroyInst();
		return 0;
	}

	// ����� ������ ��쿡�� �ھ� �޸� ���� ���� �����Ѵ�.
	int iRev = Core::GetInst()->Run();

	Core::DestroyInst();
	return iRev;
}