/*************************************************************************
	> File Name: LeetCode349.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 15时31分25秒
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
	vector<int>intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int>ret;
		unordered_set<int>s;
		for (int i = 0; i < nums1.size(); i++) {
			if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()) {
				s.insert(nums1[i]);
			}
		}
		ret.assign(s.begin(), s.end());
		return ret;
	}
}
