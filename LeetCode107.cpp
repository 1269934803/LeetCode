/*************************************************************************
	> File Name: LeetCode107.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月29日 星期六 21时44分32秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int getDepth(struct TreeNode *root) {
	if (root == NULL) return 0;
	int left = getDepth(root->left), right = getDepth(root->right);
	return (left > right ? left : right) + 1;
}

void getCnt(struct TreeNode *root, int k, int *cnt) {
	if (root == NULL) return ;
	cnt[k] += 1;
	getCnt(root->left, k - 1, cnt);
	getCnt(root->right, k - 1, cnt);
	return ;
}

void getResult(struct TreeNode *root, int k, int *cnt, int **ret) {
	if (root == NULL) return ;
	ret[k][cnt[k]++] = root->val;
	getResult(root->left, k - 1, cnt, ret);
	getResult(root->right, k - 1, cnt, ret);
	return ;
}

int ** levelOrderBottom(struct TreeNode *root, int *returnSize, int ** returnColumnSizes) {
	int depth = getDepth(root);
	int *cnt = (int *)calloc(sizeof(int), depth);
	int **ret = (int **)malloc(sizeof(int *) * depth);
	getCnt(root, depth - 1, cnt);
	for (int i = 0; i < depth; i++) {
		ret[i] = (int *)malloc(sizeof(int) * cnt[i]);
		cnt[i] = 0;
	}
	getResult(root, depth - 1, cnt, ret);
	*returnSize = depth;
	*returnColumnSizes = cnt;
	return ret;
}
