/**
 * C++ ����: ��̬����ģ��ʵ��
 *
 * @author chen_yz
 * @date 2021/07/27
 */

#ifndef _CYZ_VECTOR_HPP_
#define _CYZ_VECTOR_HPP_

#include <iomanip>
#include <iostream>
using namespace std;

class CyzVector
{
public:
	// ���캯��
	CyzVector();

	CyzVector(int capacity);

	// �ж��Ƿ�Ϊ��
	bool isEmpty();

	// ����
	bool insert(int idx, int num);

	// ɾ��
	bool remove(int idx);

	// ����
	int find(int idx);

	// ��д [] ��������ȡֵ
	int operator[](int idx);

private:
	int m_size;
	int m_capacity;
	int *m_arr;
};
#endif	//_CYZ_VECTOR_HPP_