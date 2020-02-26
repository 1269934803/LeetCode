/*************************************************************************
	> File Name: leetcode83.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 15时23分55秒
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
 * struct ListNode {
 *	int val;
 *	ListNode *next;
 *	ListNode(int x):val(x),next(NULL){}
 * };
 */

struct ListNode *deleteDuplicates(ListNode *head){
	struct ListNode *p = head;
	while (p && p->next) {
		if (p->val == p->next->val) {
			p->next = p->next->next;
		} else {
			p = p->next;
		}
	}
	return head;
}
