#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int student[30] = {0}, tmp;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &tmp);
		student[tmp - 1]++;
	}
	for (int i = 0; i < 30; i++) {
		if (student[i] != 1)
			printf("%d\n", i + 1);
	}
		
	return 0;
		
}