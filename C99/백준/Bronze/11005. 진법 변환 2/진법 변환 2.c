#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int pow(long long int value, long long int much) {
	long long int time = 1;
	for (long long int i = 1; i <= much; i++)
		time *= value;
	return time;
}

int main() {
	int n, b,max_len = 0;
	scanf("%d %d", &n, &b);
	for (int i = 0; i < 50; i++) {
		if (pow((long long int)b, (long long int)i) > 1000000000) {
			max_len = i;
			break;
		}
	}
	int is_printed = 0;
	for (int i = max_len; i >= 0; i--) {
		int time = 0;
		while (n >= pow((long long int)b, (long long int)i)) {
			time++;
			n -= (int)(pow((long long int)b, (long long int)i));
		}
		if (is_printed || time != 0) {
			printf("%c", time < 10 ? '0' + time : 'A' + (time - 10));
			is_printed = 1;
		}
	}
	if (is_printed == 0)
		printf("0");
}