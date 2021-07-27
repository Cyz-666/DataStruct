/**
 * C++ 语言: 动态数组模拟实现
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
	// 构造函数
	CyzVector();

	CyzVector(int capacity);

	// 判断是否为空
	bool isEmpty();

	// 插入
	bool insert(int idx, int num);

	// 删除
	bool remove(int idx);

	// 查找
	int find(int idx);

	// 重写 [] 用作数组取值
	int operator[](int idx);

private:
	int m_size;
	int m_capacity;
	int *m_arr;
};
#endif	//_CYZ_VECTOR_HPP_