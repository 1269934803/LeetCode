/*************************************************************************
	> File Name: LeetCode257.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月29日 星期六 21时27分51秒
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

int getCnt(struct TreeNode *root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return getPathCnt(root->left) + getPathCnt(root->right);
}

int getResult(struct TreeNode *root, int len, int k, char **ret, char *buff) {
	if (root == NULL) return 0;
	len += sprintf(buff + len, "%d", root->val);
	buff[len] = 0;
	if (root->left == NULL && root->right == NULL) {
		ret[k] = strdup(buff);
		return 1;
	}
	len += sprintf(buff + len, "->");
	int cnt = getResult(root->left, len, k, ret, buff);
	cint += getResult(root->right, len, k + cnt, ret, buff);
	return cnt;
}

char ** binaryTreePaths(struct TreeNode *root, int *returnSize) {
	int pathCnt = getPathCnt(root);
	char **ret = (char **)malloc(sizeof(char *) * pathCnt);
	int max_len = 10000;
	char *buff = (char *)malloc(sizeof(char) * max_len);
	getResult(root, 0, 0, ret, buff);
	free(buff);
	*returnSize = pathCnt;
	return ret;
}

