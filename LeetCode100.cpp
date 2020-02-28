/*************************************************************************
	> File Name: LeetCode100.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 16时37分09秒
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
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	} else {
		return false;
	}
}
