#include "stdafx.h"
#include "MyString.h"


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	Release();

	if (pszParam == NULL)
		return 0;

	int nLength = strlen(pszParam);
	
	if (nLength == 0)
		return 0;

	m_pszData = new char[nLength + 1];

	strcpy_s(m_pszData, sizeof(char)* (nLength + 1), pszParam);
	m_nLength = nLength;

	return nLength;

	return 0;
}


const char* CMyString::GetString()
{
	return m_pszData;
}


void CMyString::Release()
{
	if (m_pszData != NULL)
		delete[] m_pszData;

	m_pszData = NULL;
	m_nLength = 0;

}
