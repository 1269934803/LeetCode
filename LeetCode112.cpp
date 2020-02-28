/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 23时39分19秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode *root, int sum) {
	if (root == NULL) return false;
	if (root->left == NULL && root->right == NULL) return root->val == sum;
	return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
