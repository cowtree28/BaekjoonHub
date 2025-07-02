#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int N;
int stk[1000000];
int top = -1;


void push(int n) {
	stk[++top] = n;
}
int pop() {
	if (is_empty()) return -1;
	return stk[top--];
}
int size() {
	return top + 1;
}
int is_empty() {
	return top == -1;
}
int peak() {
	if (is_empty()) return -1;
	return stk[top];
}
int main() {
	scanf("%d", &N);
	int tmp;
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		if (tmp == 1) {
			int tmpN = 0;
			scanf("%d", &tmpN);
			push(tmpN);
		}
		else if (tmp == 2) {
			printf("%d\n", pop());
		}
		else if (tmp == 3) {
			printf("%d\n", size());
		}
		else if (tmp == 4) {
			printf("%d\n", is_empty());
		}
		else if (tmp == 5) {
			printf("%d\n", peak());
		}
	}
}
