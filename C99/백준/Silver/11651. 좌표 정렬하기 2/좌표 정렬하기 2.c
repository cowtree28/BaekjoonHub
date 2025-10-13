#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct dot {
	int x, y;
}dot;

int compare(const void* a, const void* b) {
	if ((((dot*)a)->y) == (((dot*)b)->y))
		return ((dot*)a)->x - ((dot*)b)->x;
	return ((dot*)a)->y - ((dot*)b)->y;
}

int main() {
	int n;
	scanf("%d", &n);
	dot* dots = (dot*)malloc(sizeof(dot) * n);
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		dots[i].x = x;
		dots[i].y = y;
	}
	qsort(dots, n, sizeof(dot), compare);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", dots[i].x, dots[i].y);
}