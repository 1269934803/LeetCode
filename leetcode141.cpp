/*************************************************************************
	> File Name: leetcode141.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 17时07分46秒
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
 *		int val;
 *		ListNode (int x):val(x),next(NULL){}
 * };
 */

bool hasCycle(ListCode *head) {
	struct ListCode *p, *q;
	p = q = head;
	if (p == NULL) return false;
	do {
		p = p->next;
		q = q->next;
		if (q == NULL || q->next == NULL) return false;
		q = q->next;
	}while(p != q);
	return true;
}
