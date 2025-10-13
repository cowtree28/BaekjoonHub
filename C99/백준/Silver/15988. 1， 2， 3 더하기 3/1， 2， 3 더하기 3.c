#define _CRT_SECURE_NO_WARNINGS
#define M 1000000009
#include <stdio.h>

int main() {
	int T, n, start = 3;
	long long int dp[1000000];
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &n);
		if (start != n) {
			for (int i = start; i < n; i++)
				dp[i] = ((dp[i - 3] % M) + (dp[i - 2] % M) + (dp[i - 1] % M)) % M;
		}
		printf("%d\n", dp[n - 1]);
	}
}