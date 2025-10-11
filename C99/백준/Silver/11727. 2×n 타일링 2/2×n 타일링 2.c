#define _CRT_SECURE_NO_WARNINGS
#define M 10007
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int* dp = (int*)malloc(sizeof(int) * n);
	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2; i < n; i++)
		dp[i] = (((dp[i - 2] * 2) % M) + (dp[i - 1] % M)) % M;
	printf("%d", dp[n-1]);
}