#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int* dp = (int*)calloc(n + 1, sizeof(int));
	for (int i = 0; i < 5; i++)
		dp[i] = -1;
	dp[3] = 1, dp[5] = 1;
	for (int i = 6; i <= n; i++) {
		int three = dp[i - 3] + 1;
		int five = dp[i - 5] + 1;
		if (three && five)
			dp[i] = three > five ? five : three;
		else if (five)
			dp[i] = five;
		else if (three)
			dp[i] = three;
		else
			dp[i] = -1;
	}
	printf("%d", dp[n]);
}