#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int hanoi(int start, int mid, int end, int n) {
	if (n == 0) {
		return;
	}
	hanoi(start, end, mid, n - 1);
	printf("%d %d\n", start, end);
	hanoi(mid, start, end, n - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	long long int count = 1;
	for (int i = 1; i <= n; i++)
		count *= 2;
	count -= 1;
	printf("%lld\n", count);
	hanoi(1,2,3,n);
}