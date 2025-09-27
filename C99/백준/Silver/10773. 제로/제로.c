#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void push(int* stack,int* top, int value) {
	stack[++(*top)] = value;
}

int pop(int* stack, int* top) {
	return stack[(*top)--];
}

int is_empty(int* top) {
	return (*top) < 0;
}

int main() {
	int k, number;
	scanf("%d", &k);
	int* stack = (int*)malloc(sizeof(int) * k);
	int top = -1;
	
	for (int i = 0; i < k; i++) {
		scanf("%d", &number);
		if (!number) {
			pop(stack, &top);
		}
		else {
			push(stack, &top, number);
		}
	}
	long long int sum = 0;
	while (!is_empty(&top)) {
		sum += pop(stack, &top);
	}

	printf("%lld", sum);
}