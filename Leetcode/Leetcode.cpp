// Leetcode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

void replaceSpace(char *str, int length) {
	char *p = str;
	char *q = str + length;
	char *end = str + length;
	while (*p != '\0') {
		
		if ((int)*p == 32) {
			q = end;
			while (p != q) {
				*(q + 2) = *q;
				q--;
			}
			end += 2;
			*p = '%';
			*(p + 1) = '2';
			*(p + 2) = '0';
			p++;
		}
		p++;
	}
}

int main()
{
	char str[100] = "iii jjj kkk ";
	
	//char *p = str;
	//cout << (int)*(p + 11);

	replaceSpace(str, 12);
	char *p = str;
	while (*p != '\0') {
		cout << *p << endl;
		p++;
	}
	
	return 0;
}


