#include "stdafx.h"
#include <iostream>
using namespace std;

class CNode
{
	friend class CMyList;

public:
	explicit CNode(const char *pszName)
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}

private:
	char m_szName[32];
	CNode *pNext = nullptr;
};

class CMyList
{
public:
	CMyList() : m_HeadNode("Dummy Head") {
		cout << "CMyList()" << endl;
	}
	~CMyList()
	{
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

		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}

private:
	CNode m_HeadNode;
};


int _tmain(int argc, _TCHAR* argv[])
{
	CMyList list;
	list.AddNewNode("±æµ¿");
	list.AddNewNode("Ã¶¼ö");
	list.AddNewNode("¿µÈñ");
	return 0;
}
