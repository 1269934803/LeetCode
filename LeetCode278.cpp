/*************************************************************************
	> File Name: LeetCode278.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月02日 星期一 12时47分44秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		long long head = 1, tail = n, mid;
		while (head < tail) {
			mid = (head + tail) >> 1;
			if (isBadVersion(mid)) tail = mid;
			else head = mid + 1;
		}
		return head;
	}
}

