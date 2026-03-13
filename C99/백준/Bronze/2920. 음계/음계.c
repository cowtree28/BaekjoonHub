#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sound[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &sound[i]);
	}
	int i;
	for (i = 0; i < 8; i++) {
		if (sound[i] - 1 == i)
			continue;
		else
			break;
	}
	if (i == 8) {
		printf("ascending");
		return 0;
	}
	for (i = 0; i < 8; i++) {
		if (sound[i] == 8-i)
			continue;
		else
			break;
	}
	if (i == 8) {
		printf("descending");
		return 0;
	}
	printf("mixed");
}