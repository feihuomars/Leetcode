// Leetcode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

int Fibonacci(int n) {
	if (n < 3) {
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	cout << Fibonacci(10);
	return 0;
}


