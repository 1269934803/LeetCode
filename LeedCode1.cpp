/*************************************************************************
	> File Name: LeedCode1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月03日 星期二 21时18分57秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
	int *result = (int *)malloc(sizeof(int) * 2);
	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return result;
			}
		}
	}
	*returnSize = 0;
	return result;
}

