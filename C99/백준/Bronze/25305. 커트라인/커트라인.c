#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *((int*)b) - *((int*)a);
}

int main() {
	int n,k;
	scanf("%d %d", &n, &k);
	int *students = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &students[i]);
	qsort(students, n, sizeof(int), compare);
	printf("%d", students[k - 1]);
}