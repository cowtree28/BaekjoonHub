#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int temp, sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d", sum);
}