#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			putchar(' ');
		if (i != 1)
			putchar('*');
		for (int j = 1; j <= (i - 1) * 2 - 1; j++)
			putchar(' ');
		putchar('*');
		putchar('\n');
	}
}