/*************************************************************************
	> File Name: leetcode203.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 20时51分01秒
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
 * Definition for singly-linked list;
 * struct ListNode {
 *		int val;
 *		struct ListNode *next;
 * };
 */

struct ListNode *removeElements(struct ListNode *head, int val) {
	struct ListNode ret, *p, *q;
	p = &ret;
	ret.next = head;
	while (p && p->next) {
		if (p->next->val == val) {
			q = p->next;
			p->next = q->next;
			free(q);
		} else {
			p = p->next;
		}
	}
	return ret.next;
}
