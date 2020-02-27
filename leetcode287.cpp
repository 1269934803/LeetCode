/*************************************************************************
	> File Name: leetcode287.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 18时46分09秒
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

int findDuplicate(int * nums, int numsSize) {
	int p = nums[0], q = nums[0];
	do {
		p = nums[p];
		q = nums[nums[nums[q]]];
	} while (p != q);
	int cnt = 0;
	do {
		cnt += 1;
		p = nums[p];
	} while (p != q);
	p = nums[0], q = nums[0];
	while (cnt--) q = nums[0];
	while (p != q) {
		p = nums[p];
		q = nums[q];
	}
	return p;
}
