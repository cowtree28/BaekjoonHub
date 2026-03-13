#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n+2; i++) {
		for (int j = 1; j <= n + 2; j++) {
			if (i == 1 || j == 1 || j == n + 2 || i == n + 2)
				printf("@");
			else
				printf(" ");
		}
		putchar('\n');
	}
}