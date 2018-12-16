// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

vector<int> PrintFromTopToBottom(TreeNode* root) {
	vector<int> answer;
	queue<TreeNode*> q;
	q.push(root);
	TreeNode* p;
	while (!q.empty()) {
		p = q.front();
		q.pop();
		answer.push_back(p->val);
		if (p->left != NULL) {
			q.push(p->left);
		}
		if (p->right != NULL) {
			q.push(p->right);
		}
		
		
	}
	return answer;
}

TreeNode *createTree(vector<int> num, int &n) {
	if (num[n] == 0)
		return NULL;
	TreeNode *root = new TreeNode(num[n]);
	n++;
	root->left = createTree(num, n);
	n++;
	root->right = createTree(num, n);
	return root;
}

int main()
{
	vector<int> num = { 1, 2, 0, 0, 3, 0, 4, 0, 0 };
	int n = 0;
	TreeNode *root = createTree(num, n);
	
	
	return 0;
}


