/*************************************************************************
	> File Name: leetcode24.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 14时54分26秒
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
 * Definition for singlylinked list.
 * struct ListNode {
 *	int val;
 *	ListNode *next;
 *	ListNode(int x):val(x),next(NULL) {}
 * };
 */

struct ListNode *swapParis(struct ListNode *head) {
	struct ListNode *p, *q, ret;
	ret.next = head;
	p = &ret;
	q = head;
	while (q && q->next) {
		p->next = q->next;
		q->next = p->next->next;
		p->next->next = q;
		p = q;
		q = q->next;
	}
	return ret.next;
}
