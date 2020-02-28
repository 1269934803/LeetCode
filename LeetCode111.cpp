/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 21时25分13秒
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

int minDepth(struct TreeNode *root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	int left = minDepth(root->left), right = minDepth(root->right);
	if (left == NULL || right == NULL) {
		return (left ? left : right) + 1;
	} else {
		return (left > right ? right : left) + 1;
	}
}
