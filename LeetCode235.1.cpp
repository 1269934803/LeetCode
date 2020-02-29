/*************************************************************************
	> File Name: LeetCode235.1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月29日 星期六 19时52分49秒
 ************************************************************************/

#include <stdio.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };/
 */

struct TreeNode *lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
	if (p->val > root->val && q->val > root->val) {
		return lowestCommonAncestor(root->right, p ,q);
	} else if (p->val < root->val && q->val < root->val) {
		return lowestCommonAncestor(root->left, p ,q);
	} else {
		return root;
	}
}
