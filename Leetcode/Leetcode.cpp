// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

int jumpFloorII(int number) {
	if (number <= 0)
		return 0;
	if (number == 1)
		return 1;
	if (number == 2)
		return 2;
	vector<int> num;
	num.push_back(1);
	num.push_back(1);
	int sum = 0;
	for (int i = 2; i <= number; i++) {
		for (int j = 0; j < i; j++) {
			sum = sum + num.at(j);
		}
		num.push_back(sum);
	}
	return num[number];
}

int main()
{
	jumpFloorII(4);
	return 0;
}


