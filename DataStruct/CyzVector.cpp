#include "CyzVector.h"

CyzVector::CyzVector()
	:m_size(0),
	m_capacity(10),
	m_arr(new int[10])
{

}

CyzVector::CyzVector(int capacity)
	:m_size(0),
	m_capacity(capacity)
{
	if (capacity < 0)
	{
		m_capacity = 0;
		m_arr = nullptr;
	}
	else
	{
		m_arr = new int[capacity];
	}
}

bool CyzVector::isEmpty()
{
	if (m_size == 0)
		return true;

	return false;
}

bool CyzVector::insert(int idx, int num)
{
	if (idx < 0)
		return false;

	if (idx >= m_capacity || m_size == m_capacity)
	{
		// À©³äÈÝÆ÷
	}
	for (int i = m_size; i > idx; i--)
	{
		m_arr[i] = m_arr[i - 1];
	}
	m_arr[idx] = num;
	m_size++;
	return true;
}


bool CyzVector::remove(int idx)
{
	if (idx >= m_size || idx < 0)
		return false;

	for (int i = idx; i < m_size - 1; i++)
	{
		m_arr[i] = m_arr[i + 1];
	}
	m_size--;
	return true;
}

int CyzVector::find(int idx)
{
	if (idx >= m_size || idx < 0)
		return INT_MIN;

	return m_arr[idx];
}

int CyzVector::operator[](int idx)
{
	if (idx >= m_size || idx < 0)
		return INT_MIN;
	return m_arr[idx];
}