#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		unsigned int x, y,dis;
		scanf("%u %u", &x, &y);
		dis = y - x;
		unsigned int count = 0, now_dis = 0;
		while (dis > now_dis) {
			count++;
			now_dis += (count + 1) / 2;
		}
		printf("%u\n", count);
	}
}