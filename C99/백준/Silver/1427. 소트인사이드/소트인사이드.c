#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
	return *((char*)b) - *((char*)a);
}

int main() {
	char n[11];
	scanf("%s", n);
	qsort(n, strlen(n), sizeof(char), compare);
	printf("%s", n);
}