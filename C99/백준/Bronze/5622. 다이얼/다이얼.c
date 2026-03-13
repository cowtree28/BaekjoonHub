#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char dial[16];
	scanf("%s", dial);
	int len = strlen(dial);
	int time = 0;
	for (int i = 0; i < len; i++) {
		if ('A' <= dial[i] && dial[i] <= 'C')
			time += 3;
		else if ('D' <= dial[i] && dial[i] <= 'F')
			time += 4;
		else if ('G' <= dial[i] && dial[i] <= 'I')
			time += 5;
		else if ('J' <= dial[i] && dial[i] <= 'L')
			time += 6;
		else if ('M' <= dial[i] && dial[i] <= 'O')
			time += 7;
		else if ('P' <= dial[i] && dial[i] <= 'S')
			time += 8;
		else if ('T' <= dial[i] && dial[i] <= 'V')
			time += 9;
		else if ('W' <= dial[i] && dial[i] <= 'Z')
			time += 10;
	}
	printf("%d", time);
}