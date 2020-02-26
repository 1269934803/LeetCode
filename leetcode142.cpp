/*************************************************************************
	> File Name: leetcode142.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 15时42分11秒
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
 *	ListNode *next;
 *	ListNode(int x):val(x),next(NULL) {}
 * };
 */

struct ListNode *detectCycle(ListNode *head){
	struct ListNode *p = *q = head;
	if (p == NULL) return NULL;
	do {
		p = p->next;
		q = q->next;
		if (q == NULL || q->next == NULL)return NULL;
		q = q->next;
	} while (p != q);
	int cnt = 0;
	do {
		cnt++;
		q = q->next;
	} while (p != q);
	p = head,q = head;
	while (cnt--)q = q->next;
	while (p != q)p = p->next, q = q->next;
	return p;
}
