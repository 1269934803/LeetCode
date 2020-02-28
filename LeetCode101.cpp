/*************************************************************************
	> File Name: LeetCode101.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 17时49分09秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<stack>
#include<vector>
#include<map>
#include<queue>
#include<cmath>
#include<cstring>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
	if (p == NULL && q == NULL) return true;
	if (p == NULL || q == NULL) return false;
	if (p->val == q->val) {
		return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
	} else {
		return false;
	}
}

bool isSymmetric(Struct TreeNode *root) {
	if (root == NULL) return true;
	return isSameTree(root->left, root->right);
}
