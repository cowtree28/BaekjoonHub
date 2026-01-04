#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
* 혹시 모르니 길이는 long long int
* low는 0으로, high를 20억으로 지정
* 나무들의 남는 길이 구하는 함수 제작
* 시작시 mid = (low + high) / 2
* mid로 길이 구함
*	적으면 mid = mid / 2
*	많으면 mid = mid + mid / 2
*/

long long int get_length(int* trees, int trees_len, int h) {
	long long int sum = 0;
	for (int i = 0; i < trees_len; i++)
		if(trees[i] - h > 0)
			sum += trees[i] - h;
	return sum;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int* trees = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &trees[i]);
	long long int low = 0, high = 2000000000, mid;
	long long int sum, ans;
	while (low <= high) {
		mid = (low + high) / 2;
		sum = get_length(trees, n, mid);
		if (sum < m)
			high = mid - 1;
		else {
			ans = mid;
			low = mid + 1;
		}
	}
	printf("%lld", ans);
}