#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, n, a, b;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		x -= a * b;
	}
	printf("%s",x == 0 ? "Yes" : "No");
	return 0;
}