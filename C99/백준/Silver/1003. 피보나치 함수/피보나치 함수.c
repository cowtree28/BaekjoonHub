#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int t;
	int n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int dp[40];
		dp[0] = 1; dp[1] = 0;
		scanf("%d", &n);
		for (int i = 2; i <= n+1; i++)
			dp[i] = dp[i - 1] + dp[i - 2];
		printf("%d %d\n", dp[n], dp[n+1]);
	}
}