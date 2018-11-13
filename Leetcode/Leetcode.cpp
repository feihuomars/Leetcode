// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

void replaceSpace(char *str, int length) {
	char *p = str;
	char *q = str + length;
	while (*p != '\0') {
		if ((int)*p == 32) {
			*p = '%';
		}
		p++;
	}
}

int main()
{
	char str[100] = "iii jjj kkk ";
	
	char *p = str;
	cout << (int)*(p + 12);

	/*replaceSpace(str, 12);
	char *p = str;
	while (*p != '\0') {
		cout << *p << endl;
		p++;
	}*/
	
	return 0;
}


