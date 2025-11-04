#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* answer = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++) {
		int count = 0, j = 0;
		while (count <= arr[i]) {
			if (answer[j] == 0)
				count++;
			j++;
		}
		answer[j - 1] = i+1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", answer[i]);
	}
}