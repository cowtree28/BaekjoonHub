#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Dot {
	int index;
	int value;
	int compressions;
}Dot;

int compareValue(const void* a, const void* b) {
	return ((Dot*)a)->value - ((Dot*)b)->value;
}

int compareIndex(const void* a, const void* b) {
	return ((Dot*)a)->index - ((Dot*)b)->index;
}

int main() {
	int n;
	scanf("%d", &n);
	Dot* dots = (Dot*)malloc(sizeof(Dot) * n);
	for(int i = 0;i<n;i++){
		scanf("%d", &dots[i].value);
		dots[i].index = i;
	}
	qsort(dots, n, sizeof(Dot), compareValue);
	int num_com = 0, beforeValue;
	for (int i = 0; i < n; i++) {
		if (i != 0 && beforeValue != dots[i].value)
			num_com++;
		dots[i].compressions = num_com;
		beforeValue = dots[i].value;
	}
	qsort(dots, n, sizeof(Dot), compareIndex);
	for (int i = 0; i < n; i++)
		printf("%d ", dots[i].compressions);
}