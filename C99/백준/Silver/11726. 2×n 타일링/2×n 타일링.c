#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int square(int n) {
	long long int arr[1001] = { 0 };
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	return arr[n];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", square(n));
}