#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char bowl[50];
	int height = 0;
	scanf("%s", bowl);
	for (int i = 0; i < strlen(bowl); i++) {
		height += 5;
		if (i == 0) {
			height += 5;
		}
		else
			if (bowl[i] != bowl[i - 1])
				height += 5;
	}
	printf("%d", height);
}