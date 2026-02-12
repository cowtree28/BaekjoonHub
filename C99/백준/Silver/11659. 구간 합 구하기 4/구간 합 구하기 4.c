#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, temp;
	scanf("%d %d", &n, &m);
	int* prefix_sum = (int*)malloc(sizeof(int) * (n + 1));
	prefix_sum[0] = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		prefix_sum[i + 1] = prefix_sum[i] + temp;
	}

	int s, e;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &e);
		printf("%d\n", prefix_sum[e] - prefix_sum[s - 1]);
	}
}