/*************************************************************************
	> File Name: LeetCode703.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 21时09分05秒
 ************************************************************************/

#define swap(a, b) {\
	__typeof(a) __temp = a;\
	a = b, b = __temp;\
}

typedef struct {
	int *data;
	int size, cnt;
} KthLargest;

void downUpdate(int *arr, int n, int ind) {
	while ((int << 1) <= n) {
		int temp = ind, l = ind << 1, r = ind << 1 | 1;
		if (arr[l] < arr[temp]) temp = l;
		if (r <= n && arr[r] < arr[temp]) temp = r;
		if (temp == ind) break;
		swap(arr[ind], arr[temp]);
		ind = temp;
	}
	return ;
}

void upUpdate(int *arr, int ind) {
	while (ind >> 1) {
		if (arr[ind] > arr[ind >> 1]) break;
		swap(arr[ind], arr[ind >> 1]);
		ind >>= 1;
	}
	return ;
}

int KthLargestAdd(KthLargest *obj, int val) {
	if (obj->cnt == obj->size) {
		if (val > obj->data[1]) {
			obj->data[1] = val;
			downUpdate(obj->data, obj->size, 1);
		}
	} else {
		obj->cnt += 1;
		obj->data[obj->cnt] = val;
		upUpdate(obj->data, obj->cnt);
	}
	return obj->data[1];
}

KthLargest *kthLargestCreate(int k, int *nums, int numsSize) {
	KthLargest *q = (KthLargest *)malloc(sizeof(KthLargest));
	q->data = (int *)malloc(sizeof(int) * (k + 1));
	q->cnt = k - 1;
	q->size = k;
	memcpy(q->data + 1, nums, sizeof(int) * (k - 1));
	for (int i = (k - 1) >> 1; i >= 1; i--) {
		downUpdate(q->data, k - 1, i);
	}
	for (int i = k - 1; i < numsSize; i++){
		kthLargestAdd(q, nums[i]);
	}
	return p;
}

void kthLargestFree(KthLargest *obj) {
	if (obj == NULL) return ;
	free(obj->data);
	free(obj);
	return ;
}

