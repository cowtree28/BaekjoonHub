#define _CRT_SECURE_NO_WARNINGS
#define M 1000000007
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, h;
	scanf("%d %d", &n, &h);
	int* cup = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &cup[i]);
	int* dp = (int*)calloc(h + 1, sizeof(int));
	dp[0] = 1;
	for (int i = 1; i <= h; i++) {
		for (int j = 0; j < n; j++) {
			if (i - cup[j] >= 0)
				dp[i] = (dp[i] + dp[i - cup[j]]) % M;
		}
	}
	printf("%d", dp[h] % M);
}