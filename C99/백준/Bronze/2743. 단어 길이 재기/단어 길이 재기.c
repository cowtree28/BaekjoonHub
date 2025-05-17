#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char sentence[100],len = 0;
	scanf("%s", sentence);
	while (sentence[len] != '\0')
		len++;
	printf("%d", len);
}