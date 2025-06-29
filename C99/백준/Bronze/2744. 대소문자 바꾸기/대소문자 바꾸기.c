#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		if ('a' <= word[i] && word[i] <= 'z')
			word[i] += ('A' - 'a');
		else
			word[i] += ('a' - 'A');
	}
	printf("%s", word);
}