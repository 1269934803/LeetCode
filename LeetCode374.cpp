/*************************************************************************
	> File Name: LeetCode374.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 20时17分31秒
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

int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		long long head = 0, tail = n - 1, mid;
		while (head <= tail) {
			mid = (head + tail) >> 1;
			if (guess(mid) == 0) return mid;
			if (guess(mid) == -1) tail = mid - 1;
			else head = mid + 1;
		}
		return head;
	}
}
