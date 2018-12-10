// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.size() == 0)
		return false;
	int size = pushV.size(), j = 0;
	for (int i = size - 1; i > 0; i--) {
		if (pushV[i] == popV[size - i - 1]) {
			j = i;
			break;
		}
	}
	if (j == 0)
		return true;
	for (j; j > 0; j--) {
		if (pushV[j] != popV[size - j - 1])
			return false;
	}
	return true;
}


int main()
{
	vector<int> pushV = { 1, 2, 3, 4, 5 }, popV = {4, 3, 5, 1, 2};
	bool i = IsPopOrder(pushV, popV);
	return 0;
}


