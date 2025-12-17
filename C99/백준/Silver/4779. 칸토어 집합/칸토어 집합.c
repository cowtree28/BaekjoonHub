#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void cantor(int len) {
	if (len == 1) {
		printf("-");
		return;
	}
	cantor(len / 3);
	for (int i = 0; i < len / 3; i++)
		printf(" ");
	cantor(len / 3);
}

int main() {
	int n, len;
	while (scanf("%d", &n) != EOF) {
		len = 1;
		for (int i = 0; i < n; i++)
			len *= 3;
		cantor(len);
		putchar('\n');
	}
	
}