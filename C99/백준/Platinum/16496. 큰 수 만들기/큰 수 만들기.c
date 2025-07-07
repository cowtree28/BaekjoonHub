#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int len(int a) {
	int i = 1;
	while (1) {
		if (a < 10)
			break;
		a /= 10;
		i++;
	}
	return i;
}
int compare(const void* first, const void* second) {
	int first_len = len(*(int*)first);
	int second_len = len(*(int*)second);
	if (*(int*)first == *(int*)second)
		return 0;
	int temp_first_len = first_len, temp_second_len = second_len;
	int first_num, second_num;
	int count = 0;
	while (1) {
		if (count == first_len * second_len)
			return 0;
		count++;
		first_num = *(int*)first / (int)pow(10, temp_first_len - 1) % 10;
		second_num = *(int*)second / (int)pow(10, temp_second_len - 1) % 10;
		if (first_num > second_num)
			return -1;
		else if (first_num < second_num)
			return 1;
		temp_first_len--;
		if (!temp_first_len)
			temp_first_len = first_len;
		temp_second_len--;
		if (!temp_second_len)
			temp_second_len = second_len;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int zero = 0;
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (!arr[i])
			zero++;
	}
	qsort(arr, n, sizeof(int), compare);
	if (zero == n)
		printf("%d", 0);
	else {
		for (int i = 0; i < n; i++) {
			printf("%d", arr[i]);
		}
	}
}
