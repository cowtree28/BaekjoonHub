#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n,sum = 0;
	char number[100];
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
		scanf("%c", &number[i]);
	for (int i = 0; i < n; i++)
		sum += number[i] - '0';
	printf("%d", sum);
	return 0;
}