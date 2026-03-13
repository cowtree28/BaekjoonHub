#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,numbers[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);
	int max = numbers[0], min = numbers[0];
	for (int i = 1; i < n; i++) {
		if (numbers[i] < min)
			min = numbers[i];
		if (numbers[i] > max)
			max = numbers[i];
	}
	printf("%d %d", min, max);
}