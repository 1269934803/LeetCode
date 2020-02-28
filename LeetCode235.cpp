/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月29日 星期六 00时13分32秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct TreeNode *lower(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
	if (p->val == root->val) return p;
	if (q->val == root->val) return q;
	if (p->val < root->val && q->val > root->val) return root;
	if (p->val > root->val) return lower(root->right, p, q);
	return lower(root->left, p, q);
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
	if (root == NULL) return NULL;
	if (p->val == q->val) return p;
	if (p->val > q->val) {
		struct TreeNode *temp = p;
		p = q;
		q = temp;
	}
	return lower(root, p, q);
}
