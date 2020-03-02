/*************************************************************************
	> File Name: LeetCode350.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 19时28分55秒
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
	vector<int>intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int>ret;
		unordered_map<int, int>s;
		for (int i = 0; i < nums1.size(); i++) {
			s[nums1[i]] += 1;
		}
		for (int i = 0; i < nums2.size(); i++) {
			if (s[nums2[i]] == 0) continue;
			ret.push_back(nums2[i]);
			s[nums2[i]] -= 1;
		}
		return ret;
	}
}
