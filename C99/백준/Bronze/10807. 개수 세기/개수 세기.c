#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,
		numbers[100],
		v,
		count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);
	scanf("%d", &v);
	
	for (int i = 0; i < n; i++)
		if (numbers[i] == v)
			count++;
	printf("%d", count);
	return 0;
}