#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	scanf("%d", &x);
	int* dp = (int*)malloc(sizeof(int) * (x + 1));
	dp[1] = 0;
	for (int i = 2; i <= x; i++) {
		if (i % 3 == 0)
			dp[i] = dp[i / 3] + 1;
		if (i % 2 == 0) {
			if (i % 3 != 0)
				dp[i] = dp[i / 2] + 1;
			else if (dp[i] > dp[i / 2] + 1)
				dp[i] = dp[i / 2] + 1;
		}
		if (i % 3 != 0 && i % 2 != 0)
			dp[i] = dp[i - 1] + 1;
		else if (dp[i - 1] + 1 < dp[i])
			dp[i] = dp[i - 1] + 1;
	}
	printf("%d", dp[x]);
}