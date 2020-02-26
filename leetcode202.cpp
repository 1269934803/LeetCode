/*************************************************************************
	> File Name: leetcode202.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 19时46分21秒
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

int get_next(int x) {
	int temp = 0;
	while (x) {
		temp += (x % 10) * (x % 10);
		x /= 10;
	}
	return temp;
}

bool isHappy(int n){
	int p = n, q = n;
	while (q != 1){
		p = get_next(p);
		q = get_next(get_next(q));
		if (p == q) break;
	}
	return (q == 1);
}
