/*************************************************************************
	> File Name: leetcode268.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 12时01分02秒
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

int missingNumber(int *nums, int numsSize) {
	int k, temp;
	for (int i = 0; i < numsSize; i++) {
		k = i;
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[k] > nums[j]) k = j;
		}
		if (k != i) {
			temp = nums[k];
			nums[k] = nums[i];
			nums[i] = temp;
		}
	}
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] == i) continue;
		return i;
	}
	return numsSize;
}
