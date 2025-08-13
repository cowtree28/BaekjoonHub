#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int* number = (int*)calloc((n + 1), sizeof(int));
	number[1] = 1;
	for (int i = 2; i <= n; i++) {
		int idx = i;
		if (number[i] == 1)
			continue;
		while (1) {
			idx += i;
			if (idx > n)
				break;
			number[idx] = 1;
		}
	}
	int sum = 0,min = 10001;
	for (int i = m; i <= n; i++) {
		if (number[i] == 0) {
			sum += i;
			if (min > i)
				min = i;
		}

	}
	if (sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, min);
}