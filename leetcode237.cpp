/*************************************************************************
	> File Name: leetcode237.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 00时20分03秒
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
 * Definition for singly-linked list.
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

void deleteNode(struct ListNode *node){
	struct ListNode *p;
	p = node->next;
	node->val = p->val;
	node->next = p->next;
	free(p);
	return ;
}
