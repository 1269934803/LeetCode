/*************************************************************************
	> File Name: LeetCode102.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 19时32分13秒
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
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  struct TreeNode *left;
 *  struct TreeNode *right;
 *};
 */

int getDepth(struct TreeNode *root) {
	if (root == NULL) return 0;
	int left = getDepth(root->left), right = getDepth(root->right);
	return (left > right ? left : right) + 1;
}

void getCnt(struct TreeNode *root, int k, int *cnt) {
	if (root == NULL) return ;
	cnt[k] += 1;
	getCnt(root->left, k + 1, cnt);
	getCnt(root->right, k + 1, cnt);
	return ;
}

void getResult(struct TreeNode *root, int k, int *cnt, int **ret) {
	if (root == NULL) return ;
	ret[k][cnt[k]++] = root->val;
	getResult(root->left, k + 1, cnt, ret);
	getResult(root->right, k + 1, cnt, ret);
	return ;
}

int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes){
	int depth = getDepth(root);
	int *cnt = (int *)calloc(sizeof(int), depth);
	int **ret = (int **)malloc(sizeof(int *) * depth);
	getCnt(root, 0, cnt);
	for (int i = 0; i < depth; i++) {
		ret[i] = (int *)malloc(sizeof(int) * cnt[i]);
		cnt[i] = 0;
	}
	getResult(root, 0, cnt, ret);
	*returnSize = depth;
	*returnColumnSizes = cnt;
	return ret;
}
