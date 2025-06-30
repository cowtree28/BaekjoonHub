#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n,sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		char answer[81];
		scanf("%s", answer);
		int sequence = 0;
		for (int i = 0; i < strlen(answer); i++) {
			if (answer[i] == 'O') {
				sequence++;
				sum += sequence;
			}
			else
				sequence = 0;
		}
		printf("%d\n", sum);
	}
}