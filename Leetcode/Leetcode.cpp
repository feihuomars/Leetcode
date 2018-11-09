// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

//bool Find(int target, vector<vector<int> > array) {
//
//	int start = 0, end = 0;
//	int size = array.size();
//
//	if ( array.size() == 0 || target > array[size - 1][size - 1] || target < array[0][0]) {
//		return false;
//	}
//
//	for (int i = 0; i < size; i++) {
//		if (target <= array[i][i]) {
//			start = i - 1;
//			end = i;
//			break;
//		}
//	}
//
//	for (int i = start; i < size; i++) {
//		if (target == array[i][start])
//			return true;
//	}
//
//	for (int i = 0; i <= end; i++) {
//		if (target == array[i][end])
//			return true;
//	}
//	return false;
//}

bool Find(int target, vector<vector<int>> array) {
	int size = array.size();
	int i = size - 1, j = 0;
	int pointer = array[size - 1][0];
	while (i > 0 && j < size) {
		if (target > pointer) {
			j++;
			pointer = array[i][j];
		} else if (target < pointer) {
			i--;
			pointer = array[i][j];
		}
		
		if (target == pointer)
			return true;
	}
	return false;
}

int main()
{
	vector<vector<int>> array = { {1, 17, 29, 57}, {6, 19, 33, 62}, {33, 37, 39, 67}, {48, 52, 58, 69}};
	//vector<vector<int>> array = { {1} };
	cout << Find(58, array) << endl;
	return 0;
}


