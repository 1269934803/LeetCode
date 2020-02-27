/*************************************************************************
	> File Name: leetcode20.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 21时21分18秒
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

bool isValid(char *s) {
	int len = strlen(s);
	char *stack = (char *)malloc(sizeof(char) * len);
	int top = -1, flag = 1;
	while (s[0]) {
		switch(s[0]) {
			case '(':
			case '{':
			case '[': stack[++top] = s[0]; break;
			case ')': flag = (top != -1 && stack[top--] == '('); break;
			case '}': flag = (top != -1 && stack[top--] == '{'); break;
			case ']': flag = (top != -1 && stack[top--] == '['); break;
		}
		if (!falg) break;
		s++;
	}
	free(stack);
	return (flag && top == -1);
}
