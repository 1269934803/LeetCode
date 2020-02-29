/*************************************************************************
	> File Name: LeetCode110.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月29日 星期六 18时51分00秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

int Depth(struct TreeNode *root) {
	if (root == NULL) return 0;
	int l = Depth(root->left), r = Depth(root->right);
	if (l == -2 || r == -2 || abs(l - r) > 1) return -2;
	return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode *root) {
	return Depth(root) >= 0;
}
