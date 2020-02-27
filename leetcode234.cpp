/*************************************************************************
	> File Name: leetcode234.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 13时22分13秒
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

int get_length(struct ListNode *head) {
	int cnt = 0;
	while (head) {
		cnt += 1;
		head = head->next;
	}
	return cnt;
}

struct ListNode *get_node(struct ListNode *head, int index) {
	while (index--) head = head->next;
	return head;
}

struct ListNode *reverse(struct ListNode *head) {
	struct ListNode *p, *q, ret;
	ret.next = NULL;
	p = head;
	while (p) {
		q = p->next;
		p->next = ret.next;
		ret.next = p;
		p = q;
	}
	return ret.next;
}

bool isPalindrome(struct ListNode *head) {
	int len = get_length(head);
	struct ListNode *p = head, *q = reverse(get_node(head,(len + 1) / 2));
	while (q) {
		if (q->val != p->val) return false;
		q = q->next;
		p = p->next;
	}
	return true;
}
