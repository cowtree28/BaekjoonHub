#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compareA(const void* a, const void* b) {
	return *((int*)a) - *((int*)b);
}

int compareB(const void* a, const void* b) {
	return *((int*)b) - *((int*)a);
}

int main() {
	int n;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int* b = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	qsort(a, n, sizeof(int), compareA);
	qsort(b, n, sizeof(int), compareB);
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] * b[i];
	printf("%d", sum);
}