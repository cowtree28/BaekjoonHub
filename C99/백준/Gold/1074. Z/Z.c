#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int i = 0;

int z(int r, int c, int size) {
	if (size < 1)
		return 0;
	//printf("i = %d, x = %d, y = %d\n", i, x, y);
	int half = 1 << (size - 1);
	int area = half * half;
	if(r < half && c < half)
		z(r, c, size - 1);
	else if (r < half) {
		i += area;
		z(r, c - half, size - 1);
	}
	else if (c < half) {
		i += area * 2;
		z(r - half, c, size - 1);
	}
	else {
		i += area * 3;
		z(r - half, c - half, size - 1);
	}
}

int main() {
	int n, r, c;
	scanf("%d %d %d", &n, &r, &c);
	z(r, c, n);
	printf("%d", i);
}