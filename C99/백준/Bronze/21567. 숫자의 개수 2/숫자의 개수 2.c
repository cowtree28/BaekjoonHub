#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int num[10] = {0};

int main() {
	long long int n, a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	n = a * b * c;
	while (n > 0) {
		num[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
}