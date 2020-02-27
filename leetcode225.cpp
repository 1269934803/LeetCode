/*************************************************************************
	> File Name: leetcode225.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月27日 星期四 23时40分11秒
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

typedef struct MyQueue {
	int *data;
	int head, tail;
	int size, cnt;
} MyQueue;

MyQueue *MyQueueCreate(int size) {
	MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
	q->data = (int *)malloc(sizeof(int) * size);
	q->head = q->tail = 0;
	q->cnt = 0;
	q->size = size;
	return q;
}

void MyQueuePush(MyQueue *obj, int x) {
	if (obj == NULL) return ;
	if (obj->cnt == obj->size) return ;
	obj->data[obj->tail++] = x;
	if (obj->tail == obj->size) obj->tail -= obj->size;
	obj->cnt += 1;
	return ;
}

int MyQueuePop(MyQueue *obj) {
	if (obj == NULL) return 0;
	if (obj->cnt == 0) return 0;
	obj->head += 1;
	if (obj->head == obj->size) obj->head -= obj->size;
	obj->cnt -= 1;
	return 1;
}

int MyQueueFront(MyQueue *obj) {
	return obj->data[obj->head];
}

int MyQueueEmpty(MyQueue *obj) {
	return obj->cnt == 0;
}

void MyQueueFree(MyQueue *obj) {
	if (obj == NULL) return ;
	free(obj->data);
	free(obj);
	return ;
}

typedef struct {
	MyQueue *q1, *q2;
} MyStack;

MyStack *myStackCreate() {
	int size = 1024;
	MyStack *s = (MyStack *)malloc(sizeof(MyStack));
	s->q1 = MyQueueCreate(size);
	s->q2 = MyQueueCreate(size);
	return s;
}

void myStackPush(MyStack *obj, int x) {
	if (!MyQueueEmpty(obj->q1)) {
		MyQueuePush(obj->q1, x);
	} else {
		MyQueuePush(obj->q2, x);
	}
	return ;
}

int myStackPop(MyStack *obj) {
	MyQueue *p = MyQueueEmpty(obj->q1) ? obj->q2 : obj->q1;
	MyQueue *q = MyQueueEmpty(obj->q1) ? obj->q1 : obj->q2;
	int element = MyQueueFront(p);
	MyQueuePop(p);
	while (!MyQueueEmpty(p)) {
		MyQueuePush(q, element);
		element = MyQueueFront(p);
		MyQueuePop(p);
	}
	return element;
}

int myStackTop(MyStack *obj) {
	MyQueue *p = MyQueueEmpty(obj->q1) ? obj->q2 : obj->q1;
	MyQueue *p = MyQueueEmpty(obj->q1) ? obj->q1 : obj->q2;
	int element;
	while (!MyQueueEmpty(p)) {
		element = MyQueueFront(p);
		MyQueuePop(p);
		MyQueuePush(q, element);
	}
	return element;
}

bool myStackEmpty(MyStack* obj) {
	return MyQueueEmpty(obj->q1) && MyQueueEmpty(obj->q2);
}

void myStackFree(MyStack* obj) {
	if (obj == NULL) return ;
	MyQueueFree(obj->q1);
	MyQueueFree(obj->q2);
	free(obj);
	return;
}
