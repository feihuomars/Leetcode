// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

class Solution {
private:
	stack<int> stack1;
	stack<int> stack2;

public:
	void push(int value) {
		stack1.push(value);
		if (stack2.size() == 0) {
			stack2.push(value);
		}
		else if (value < stack2.top()) {
			stack2.push(value);
		}
	}
	void pop() {
		stack1.pop();
	}
	int top() {
		return stack1.top();
	}
	int min() {
		return stack2.top();
	}
};


int main()
{
	Solution solution;
	for (int i = 0; i < 10; i++) {
		solution.push(rand() % 100);
	}
	
	int a = solution.min();
	return 0;
}


