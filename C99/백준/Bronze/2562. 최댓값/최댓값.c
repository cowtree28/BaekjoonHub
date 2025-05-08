#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[9];
	int max_index = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i < 9; i++)
		if (arr[max_index] < arr[i])
			max_index = i;
	printf("%d\n%d", arr[max_index], max_index + 1);
}