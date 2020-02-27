/*************************************************************************
	> File Name: leetcode206.1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 15时24分59秒
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

struct ListNode *revaerseList(struct ListNode *head) {
	if (head == NULL) return NULL;
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
