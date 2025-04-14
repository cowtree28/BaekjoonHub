#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int N;
int stk[10001];
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
	char tmp[10];
	for (int i = 0; i < N; i++) {
		scanf("%s", tmp);
		if (!(strcmp(tmp, "push"))) {
			int tmpN = 0;
			scanf("%d", &tmpN);
			push(tmpN);
		}
		else if (!(strcmp(tmp, "pop"))) {
			printf("%d\n", pop());
		}
		else if (!(strcmp(tmp, "size"))) {
			printf("%d\n", size());
		}
		else if (!(strcmp(tmp, "empty"))) {
			printf("%d\n",is_empty());
		}
		else if (!(strcmp(tmp, "top"))) {
			printf("%d\n", peak());
		}
	}
}
