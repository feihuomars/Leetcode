// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

bool Find(int target, vector<vector<int> > array) {

	int offsetX, offsetY;

	for (int i = 0; i < array.size(); i++) {
		for (int j = 0; j < array[i].size(); j++) {
			cout << array[i][j] << endl;
		}
	}
	return false;
}

int main()
{
	vector<vector<int>> array = { {1, 2, 3}, {4, 5, 6} };
	Find(2, array);
	return 0;
}


