// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};



vector<int> printListFromTailToHead(ListNode* head) {
	vector<int> answerList;
	ListNode *p = head, *q = p->next;
	while (p != NULL) {
		
	}
	return answerList;
}

int main()
{
	vector<int> list = { 1, 2, 3, 4, 5 };
	ListNode *head = new ListNode(1);
	ListNode *p = head;
	for (int i = 1; i < list.size(); i ++) {
		ListNode *node = new ListNode(list[i]);
		node->next = p->next;
		p->next = node;
		p = node;
	}
	for (p = head; p != NULL; p = p->next) {
		cout << p->val << " -> ";
	}
	return 0;
}


