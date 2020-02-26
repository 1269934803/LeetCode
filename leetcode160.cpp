/*************************************************************************
	> File Name: leetcode160.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 16时13分18秒
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
 * Definition for singly-linked list
 * struct ListNode{
 *	int val;
 *	struct ListNode *next;
 * };
 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB){
	ListNode *p = headA, *q = headB;
	while (p != q){
		p = p ? p->next:headB;
		q = q ? q->next:headA;
	}
	return p;
}
