#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n * 5; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (i <= n || j <= n)
				printf("@");
		}
		putchar('\n');
	}
}