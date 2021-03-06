#ifndef _BIGINT_H_
#define _BIGINT_H_

#include <cmath>
#include <string.h>
#include <iostream>

namespace Prog3c {
	class BigInt {
	public:
		// Constructors
		BigInt() :count(1) {
			num = new char[2];
			num[0] = '0', num[1] = '0';
		}
		BigInt(int k, int);
		BigInt(long& value);
		BigInt(const char*& string);
		BigInt(const BigInt& number, int m);
		BigInt(BigInt&& cur) : count(cur.count), num(cur.num) {
			cur.num = nullptr;
		}
		~BigInt(); // destructor
		//geters
		int getCount() const { return count; } // get count of digit in number
		char getSign() const { return num[count]; } // get sign
		char getDigit(int i) const { return num[i]; } // get one digit for the index

		//setters
		void setDigit(int index, char digit) { num[index] = digit; } //set one digit of number
		void setCount(int c) { count = c; } //set count of digit in number

		//other methods
		friend std::ostream& operator<<(std::ostream& stream, const BigInt& number);
		friend std::istream& operator>>(std::istream& stream, BigInt& number);
		const BigInt operator~() const;
		BigInt increase(); // * 10
		BigInt decrease(); // dim 10
		const BigInt operator+(const BigInt& number) const;
		const BigInt operator-(const BigInt& number) const;
		BigInt& operator=(const BigInt& number);
		BigInt& operator=(BigInt&&) noexcept;
	private:
		int count; // digit in number
		char* num; // number
	};
}
#endif