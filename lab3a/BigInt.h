#ifndef _BIGINT_H_
#define _BIGINT_H_

#include <cmath>
#include <string.h>
#include <iostream>

namespace Prog3a {
	class BigInt {
	public:
		// ������������
		BigInt() :count(0) {
			for (int i = 0; i < _MAX_COUNT; ++i)
				num[i] = '0';
		}
		BigInt(long& value);
		BigInt(const char*& string);

		std::ostream& print(std::ostream& s) const; // ����� �����

		//geters
		int getCount() const { return count; } // �������� ���������� ���� � �����
		int getMaxCount() const { return _MAX_COUNT; } // �������� ������������ ����� ���� � �����
		char getSign() const { return num[count]; } // �������� ���� �����
		
		//setters
		//void setNewNum(int newCount, long newNum);
		void increase(); // * 10 
		void decrease(); // dim 10 
	private:
		static const int _MAX_COUNT = 47; // ������������ ������ ���� � �����	 
		int count; // ���������� ���� � �����
		char num[_MAX_COUNT]; // �����
	};
}
#endif