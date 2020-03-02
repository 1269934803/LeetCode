/*************************************************************************
	> File Name: LeetCode35.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 13时13分52秒
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

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int head = 0, tail = nums.size() - 1, mid;
		while (head <= tail) {
			mid = (head + tail) >> 1;
			if (nums[mid] == target) return mid;
			if (nums[mid] < target) head = mid + 1;
			else tail = mid - 1;
		}
		return head;
	}
}
