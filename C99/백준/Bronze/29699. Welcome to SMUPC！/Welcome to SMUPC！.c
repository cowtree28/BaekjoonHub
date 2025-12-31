#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char label[15] = "WelcomeToSMUPC";
	int n;
	scanf("%d", &n);
	printf("%c", label[(n - 1) % (sizeof(label) / sizeof(char) - 1)]);
}