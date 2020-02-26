/*************************************************************************
	> File Name: leetcode19.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 14时28分14秒
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
 * /
 
 
 struct ListNode *removeNthFromEnd (struct ListNode *head, int n) {
	struct ListNode *current_node, *next_node, ret;
	ret.next = head;
	current_node = next_node = &ret;
	while(n--) {
		current_node = current_node->next;
	}
	current_node = current_node->next;
	while (current_node) {
		current_node = current_node->next;
		next_node = next_node->next;
	}
	current_node = next_node->next;
	next_node->next = current_node->next;
	free(current_node);
	return ret.next;
  }

