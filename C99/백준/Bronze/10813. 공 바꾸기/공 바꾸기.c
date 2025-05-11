#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, I, J,ball[100],temp;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		ball[i] = i + 1;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &I, &J);
		temp = ball[I-1];
		ball[I-1] = ball[J-1];
		ball[J-1] = temp;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", ball[i]);
	return 0;
}