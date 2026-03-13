#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		long long int temp = a;
		a = b;
		b = temp;
	}
	int gap = b - a - 1; // 숫자 사이 길이
	if (gap < 0) gap = 0; // 길이가 -1이 되는경우 0으로 초기화
	printf("%d\n", gap);
	for (int i = 1; i <= gap; i++) {
		printf("%lld ", a + (long long int)i);
	}
}