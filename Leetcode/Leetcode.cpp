// Leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
	vector<int> leftTree, rightTree;
	if (pre.size() == 0 || vin.size() == 0)
		return NULL;
	TreeNode *treeNode = new TreeNode(pre[0]);
	
	for (vector<int>::iterator p = vin.begin(); p != vin.end(); p++) {
		if (*p == pre.at(0)) {

			leftTree.assign(vin.begin(), p);
			rightTree.assign(p + 1, vin.end());
			pre.erase(pre.begin());
		}
	}
	
	treeNode->left = reConstructBinaryTree(pre, leftTree);
	if (treeNode->left != NULL)
		pre.erase(pre.begin());
	treeNode->right = reConstructBinaryTree(pre, rightTree);
	return treeNode;
}

int main()
{
	TreeNode *bTree;
	
	
	//vector<int> pre = { 1, 2, 4, 5, 3, 6, 7 };
	//vector<int> vin = { 4, 2, 5, 1, 3, 7, 6 };
	vector<int> pre = { 1, 2, 3, 4};
	vector<int> vin = { 2, 1, 3, 4 };
	bTree = reConstructBinaryTree(pre, vin);
	return 0;
}


