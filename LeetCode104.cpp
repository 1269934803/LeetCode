/*************************************************************************
	> File Name: LeetCode104.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 20时48分10秒
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

int maxDepth(struct TreeNode *root) {
	if (root == NULL) return 0;
	int left = maxDepth(root->left), right = maxDepth(root->right);
	return (left > right ? left : right) + 1;
}
