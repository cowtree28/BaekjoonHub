#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int paper[100][100] = {0}, n;
	scanf("%d", &n);
	int left, bottom;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &left, &bottom); // 29 90
		for (int j = 100 - bottom - 10; j < 100 - bottom; j++) {//100-90-10-1 < 9
			for (int k = left - 1; k < left + 10 - 1; k++) { // 90
				paper[j][k]++;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (paper[i][j])
				sum++;
	printf("%d", sum);
}