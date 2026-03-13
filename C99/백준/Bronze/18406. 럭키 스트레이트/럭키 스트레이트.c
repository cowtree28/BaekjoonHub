#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char score[10];
	scanf("%s", score);
	int size = strlen(score);
	int left = 0, right = 0;
	for (int i = 0; i < size / 2; i++) {
		left += score[i];
		right += score[size - i - 1];
	}
	if (left == right)
		printf("LUCKY");
	else
		printf("READY");

	return 0;
}