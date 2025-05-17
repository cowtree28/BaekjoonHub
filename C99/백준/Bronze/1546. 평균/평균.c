#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double subject[1000], average = 0;
	//입력
	for (int i = 0; i < n; i++)
		scanf("%lf", &subject[i]);
	//최댓값 구하기
	int max_index = 0;
	for (int i = 0; i < n; i++)
		if (subject[max_index] < subject[i])
			max_index = i;
	int max = subject[max_index];
	for (int i = 0; i < n; i++) {
		subject[i] = subject[i] / max * 100;
		average += subject[i];
	}
	average /= n;
	printf("%lf", average);

}