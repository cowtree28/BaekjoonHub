#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char grade[3];
	double avg;
	scanf("%s", grade);
	switch (grade[0]) {
	case 'A':
		avg = 4;
		break;
	case 'B':
		avg = 3;
		break;
	case 'C':
		avg = 2;
		break;
	case 'D':
		avg = 1;
		break;
	default:
		avg = 0.0;
	}
	switch (grade[1]) {
	case '+':
		avg += 0.3;
		break;
	case '-':
		avg -= 0.3;
		break;
	case '\0':
		break;
	}
	printf("%.1lf", avg);
}