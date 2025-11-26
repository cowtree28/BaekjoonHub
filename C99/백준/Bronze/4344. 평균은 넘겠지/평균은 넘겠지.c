#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int n;
		scanf("%d", &n);
		double avg = 0;
		int s = 0;
		double* arr = (double*)malloc(sizeof(double) * n);
		for (int i = 0; i < n; i++) {
			scanf("%lf", &arr[i]);
			avg += arr[i];
		}
		avg /= (double)n;
		for (int i = 0; i < n; i++)
			if (arr[i] > avg) {
				s++;
			}
		printf("%.3lf%%\n", (double)s / (double)n * 100.0);
	}
}