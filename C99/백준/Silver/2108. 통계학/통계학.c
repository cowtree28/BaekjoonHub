#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *((int*)a) - *((int*)b);
}

int main() {
	//선언, 입력
	int n, sum = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), compare); // 정렬(중앙값, 범위)
	int* counter = (int*)calloc(8001,sizeof(int)); // 인덱스 -4000~4000을 위해 8000
	for (int i = 0; i < n; i++) {
		sum += arr[i]; // 산술평균 구하기 위한 합
		counter[arr[i] + 4000]++;
	}
	if (((double)sum / n) - (sum / n) >= 0.5)
		printf("%d\n", sum / n + 1);
	else if (((double)sum / n) - (sum / n) > -0.5)
		printf("%d\n", sum / n);
	else
		printf("%d\n", sum / n - 1);
	printf("%d\n", arr[(n) / 2]);
	int is_mode_one = 0, max_counter = 0, mode;
	for (int i = 0; i < 8001; i++)
		if (max_counter < counter[i])
			max_counter = counter[i];
	for (int i = 0; i < 8001; i++) {
		if (max_counter == counter[i]) {
			mode = i - 4000;
			if (!is_mode_one) 
				is_mode_one = 1;
			else
				break;
		}
	}
	printf("%d\n", mode);
	printf("%d\n", arr[n - 1] - arr[0]);
}