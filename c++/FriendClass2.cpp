#include <iostream>
using namespace std;

class CNode
{
	// friend Ŭ���� ����
	friend class CMyList;

public:
	explicit CNode(const char *pszName)
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}

private:
	// ���� ���� ����Ʈ�� ������ ������
	char m_szName[32];
	CNode *pNext = nullptr;
};

class CMyList
{
public:
	CMyList() : m_HeadNode("Dummy Head") { }
	~CMyList()
	{
		// ����Ʈ�� ��� �����͵��� ��� ����ϰ� ����
		CNode *pNode = m_HeadNode.pNext;
		CNode *pDelete = nullptr;

		while (pNode)
		{
			pDelete = pNode;
			pNode = pNode->pNext;

			cout << pDelete->m_szName << endl;
			delete pDelete;
		}

		m_HeadNode.pNext = nullptr;
	}

	void AddNewNode(const char *pszName)
	{
		CNode *pNode = new CNode(pszName);

		// ����Ʈ�� ���ο� ��带 �߰�
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}

private:
	CNode m_HeadNode;
};

// ����� �ڵ�
int main()
{
	// �޸� �߰�/���� �ڵ尡 �������� �ʴ´�.
	CMyList list;
	list.AddNewNode("�浿");
	list.AddNewNode("ö��");
	list.AddNewNode("����");

	return 0;
}