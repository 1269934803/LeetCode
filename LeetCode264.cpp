/*************************************************************************
	> File Name: LeetCode264.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年03月01日 星期日 21时37分45秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define swap(a, b) {\
	__typeof(a) __temp = a;\
	a = b, b = __temp;\
}

typedef struct Heap{
	long long *data;
	int cnt, size;
} Heap;

Heap *init(int n) {
	Heap *h = (Heap *)malloc(sizeof(Heap));
	h->cnt = 0;
	h->size = n + 1;
	h->data = (long long *)malloc(sizeof(long long) * h->size);
	return h;
}

int empty(Heap *h) {
	return h->cnt == 0;
}

#define V(x) h->data[x]

long long top(Heap *h) {
	return V(1);
}

void push (Heap *h, long long val) {
	h->data[++h->cnt] = val;
	int ind = h->cnt;
	while (ind > 1 && V(ind) < V(ind >> 1)) {
		swap (V(ind) , V(ind >> 1));
		ind >>= 1;
	}
	return ;
}

void pop(Heap *h) {
	if (empty(h)) return ;
	V(1) = V(h->cnt);
	h->cnt --;
	int ind = 1;
	while ((ind << 1) <= h->cnt) {
		int temp = ind, l = ind << 1, r = ind << 1 | 1;
		if (V(l) < V(temp)) temp = l;
		if (r <= h->cnt && V(r) < V(temp)) temp = r;
		if (temp == ind) break;
		swap (V(temp), V(ind));
		ind = temp;
	}
	return ;
}

void clear(Heap *h) {
	if (h == NULL) return NULL;
	free(h->data);
	free(h);
	return ;
}

int nthUglyNumber(int n){
	Heap *h = init(3 * n);
	push(h, 1);
	long long ans = 0;
	while (n--) {
		ans = top(h);
		pop(h);
		if (ans % 5 == 0) {
			push(h, ans * 5);
		} else if (ans % 3 == 0) {
			push (h, ans * 3);
			push (h, ans * 5);
		} else {
			push (h, ans * 2);
			push (h, ans * 3);																															  push (h, ans * 5);
	    }
	}
	clear(h);
	return ans;
}
