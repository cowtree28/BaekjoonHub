#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int value, int much) {
	if (much == -1) return 0;
	int time = 1;
	for (int i = 1; i <= much; i++)
		time *= value;
	return time;
}

int main() {
	int n;
	scanf("%d", &n);
	int sum = 2;
	for (int i = 0; i < n; i++)
		sum += pow(2, i);
	printf("%d", pow(sum, 2));
}