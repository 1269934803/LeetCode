/*************************************************************************
	> File Name: LeetCode226.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 22时13分47秒
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

struct TreeNode *invertTree(struct TreeNode *root) {
	if (root == NULL) return NULL;
	struct TreeNode *temp = root->left;
	root->left = root->right;
	root->right = temp;
	invertTree(root->left);
	invertTree(root->right);
	return root;
}
