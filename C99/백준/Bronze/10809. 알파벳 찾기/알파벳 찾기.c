#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char S[100];
	int n, alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	scanf("%s", S);
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(S); j++) {
			if (S[j] == 'a' + i) {
				alphabet[i] = j;
				break;
			}
			continue;

		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
}