#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	//풀이 1
	int n, k,coin = 0;
	scanf("%d %d", &n, &k);
	int* A = (int*)malloc(sizeof(int) * n);
	for (int i = n - 1; i >= 0; i--) {
		scanf("%d", &A[i]);
	}
	while (k >= A[n - 1]) {
		for (int i = 0; i < n; i++) {
			if (A[i] <= k) {
				k -= A[i];
				coin++;
				break;
			}
		}
	}
	printf("%d", coin);
	return 0;
}