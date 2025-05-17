#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m,basket[100],I,J;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		basket[i] = i + 1;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &I, &J);
		for (int j = 0; j < (J-I + 1)/2; j++) {
			int temp = basket[I + j - 1];
			basket[I + j - 1] = basket[J - j - 1];
			basket[J - j - 1] = temp;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", basket[i]);
}