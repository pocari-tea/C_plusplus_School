#include<iostream>
using namespace std;

//���: Ŭ������ ���ΰ��� �θ��� �ڽİ��踦 ������ �� �ִ�.
//�ڽ� Ŭ������ �θ�Ŭ������ ������� ����� �� �ִ�

//�θ�Ŭ�������� public�̳� protected�� �Ǿ��ִ� ������� ��� ����������,
//private���� �Ǿ��ִ� ����� �ڽĿ����� ����� �Ұ����ϴ�.

//����� ����: public, private ����� �ִ�.

class CParent
{
public:
	CParent()
	{
		cout << "CParent ������" << endl;
	}

	~CParent()
	{
		cout << "CParent �Ҹ���" << endl;
	}

public:
	int m_iA;
protected:
	int m_iB;
private:
	int m_iC;

public:
	void Output()
	{
		cout << "A: " << m_iA << endl;
		cout << "B: " << m_iB << endl;
		cout << "C: " << m_iC << endl;
	}

};

class CChild : public CParent
{
public:
	CChild()
	{
		m_iB = 200;
		// m_iC�� private�̱� ������ �ڽĳ��ο����� ������ �Ұ����ϴ�.
		// m_iC = 300;
		cout << "CChild ������" << endl;
	}

	~CChild()
	{
		cout << "CChild �Ҹ���" << endl;
	}

protected:
	int m_iD;
};

class CChild1 : private CParent
{
public:
	CChild1()
	{
		m_iA = 100;
		cout << "CChild1 ������" << endl;
	}

	~CChild1()
	{
		cout << "CChild1 �Ҹ���" << endl;
	}

private:
	int m_iD;
};

class CChildChild : public CChild
{
public:
	CChildChild()
	{
		m_iD = 500;
		cout << "CChildChild ������" << endl;
	}

	~CChildChild()
	{
		cout << "CChildChild �Ҹ���" << endl;
	}

private:
	int m_iE;
};


int main()
{
	//��Ӱ��迡���� ������ ȣ�� ����: �θ� -> �ڽ� ������ ȣ��ȴ�.
	//��Ӱ��迡���� �Ҹ��� ȣ�� ����: �ڽ� -> �θ� ������ ȣ��ȴ�.

	CParent parent;
	CChild child;
	CChild1 child1;
	CChildChild childchild;

	parent.m_iA = 100;

	child.m_iA = 200;

	//CChild1 Ŭ������ CParent�� private ����� �ϰ� �����Ƿ� CParent�� public���� �����Ǿ��ִ� ����鵵 �ܺο����� ������ �Ұ����ϴ�.
	//child1.m_iA = 300;
	//child1.Output();

	return 0;
}