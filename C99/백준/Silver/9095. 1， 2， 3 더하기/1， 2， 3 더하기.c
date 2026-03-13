#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, n, start = 3;
	int dp[11] = {0};
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &n);
		if (start != n) {
			for (int i = start; i < n; i++)
				dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}
		printf("%d\n", dp[n - 1]);
	}
}