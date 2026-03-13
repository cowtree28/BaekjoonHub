#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	long long int num1, num2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &num1, &num2);
		printf("%lld\n", num1 + num2);
	}
}