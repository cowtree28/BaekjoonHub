#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int time;
	char sentence[20];
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &time, sentence);
		for (int j = 0; j < strlen(sentence); j++) {
			for (int k = 0; k < time; k++) {
				printf("%c", sentence[j]);
			}
		}
		putchar('\n');
	}
	return 0;
}