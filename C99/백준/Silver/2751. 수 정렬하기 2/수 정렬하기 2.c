#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n;
	scanf("%d", &n);
	int* numbers = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);
	qsort(numbers, n, sizeof(int),cmp);
	for (int i = 0; i < n; i++)
		printf("%d\n", numbers[i]);
}