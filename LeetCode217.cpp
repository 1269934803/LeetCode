/*************************************************************************
	> File Name: LeetCode217.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 11时30分32秒
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

class Solution{
public:
	bool containsDuplicate(vector<int> & nums) {
		unordered_set<int>s;
		for (int i = 0; i < nums.size(); i++) {
			if (s.find(nums[i]) != s.end()) return true;
			s.insert(nums[i]);
		}
		return false;
	}
};
