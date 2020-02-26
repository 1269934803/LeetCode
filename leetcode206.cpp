/*************************************************************************
	> File Name: leetcode206.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 23时08分09秒
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

struct ListNode *reverseList(struct ListNode *head) {
	if (head == NULL) return NULL;
	struct ListNode *p, *q;
	p = head;
	head = NULL;
	while (p != NULL) {
		q = p->next;
		p->next = head;
		head = p;
		p = q;
	}
	return head;
}
