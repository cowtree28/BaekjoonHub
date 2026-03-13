#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,number;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &number);
		if (i != number)
			sum++;
	}
	printf("%d", sum);
}