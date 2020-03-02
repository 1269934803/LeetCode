/*************************************************************************
	> File Name: LeetCode88.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 21时40分36秒
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
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int k = m + n - 1, l = m - 1, r = n - 1;
		while (l >= 0 || r >= 0) {
			if (r < 0 || (l >= 0 && nums1[l] >= nums2[r])) {
				nums1[k--] = nums1[l--];
			} else {
				nums1[k--] = nums2[r--];
			}
		}
		return ;
	}
};
