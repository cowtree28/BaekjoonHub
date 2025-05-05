#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ex1() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
}

void ex2() {
	int n;
	scanf("%d", &n);
	int sum = (n + 1) * n * 0.5;
	printf("%d", sum);
}
int main() {
//	ex1(); // 시간복잡도 O(n)
	ex2(); // 시간복잡도 O(1)
	return 0;
}