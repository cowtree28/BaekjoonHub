#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int f_count1 = 1;
int f_count2 = 0;
int f1(int n) {
	if (n < 3)
		return 1;
	f_count1++;
	return f1(n - 1) + f1(n - 2);
}
int f2(int n) {
	int arr[41] = { 1,1 };
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		f_count2++;
	}
	return arr[n];

}
int main() {
	int n;
	scanf("%d", &n);
	f1(n);
	f2(n);
	printf("%d %d", f_count1, f_count2);
}