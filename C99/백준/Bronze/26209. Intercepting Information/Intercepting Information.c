#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int temp;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &temp);
		if (temp == 9) {
			printf("F");
			return 0;
		}
	}
	printf("S");
}