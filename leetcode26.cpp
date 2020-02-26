/*************************************************************************
	> File Name: leetcode26.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月26日 星期三 22时27分28秒
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

int removeDuplicates(int *nums, int numsSize) {
	if (numsSize == 0 || numsSize == 1) {
		return numsSize;
	}
	int i = 0;
	for (int j = 1; j < numsSize; j++) {
		if (nums[i] == nums[j]) {
			continue;
		} else {
			i++;
			nums[i] = nums[j];
		}
	}
	return i + 1;
}
