#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char string[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", string);
		printf("%c%c\n", string[0], string[strlen(string) - 1]);
	}
	return 0;
}