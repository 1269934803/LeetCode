/*************************************************************************
	> File Name: leetcode27.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 21时13分35秒
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

int removeElement(int *nums, int numsSize, int val) {
	int k = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] == val) continue;
		nums[k++] = nums[i];
	}
	return k;
}
