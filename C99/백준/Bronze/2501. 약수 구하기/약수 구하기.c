#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, now = 0;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			now++;
			if (now == k) {
				printf("%d", i);
				return 0;
			}
		}
	}
	printf("%d", 0);
}
