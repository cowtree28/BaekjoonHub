#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int max = 0,temp,row,col;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &temp);
			if (temp >= max) {
				row = i;
				col = j;
				max = temp;
			}
		}
	}
	printf("%d\n%d %d", max, row, col);
}