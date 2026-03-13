#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	if(n1 < n2) return -1;
	if(n1 > n2) return 1;
	return 0;
}

int find(int* arr, int value, int left, int right) {
	int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		if(arr[mid] == value)
			return 1;
		else if(arr[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return 0;
}

int main()
{
	int n, m, tmp;
	scanf("%d", &n);
	int *arr = (int *)malloc(sizeof(int) * n);
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	scanf("%d", &m);
	for(int i = 0;i<m;i++) {
		scanf("%d", &tmp);
		printf("%d\n", find(arr, tmp, 0, n-1));	
	}

}