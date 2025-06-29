#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char sentence[101];
	while (scanf("%[^\n]%*c", sentence) != EOF) {
		printf("%s\n", sentence);
	}
}