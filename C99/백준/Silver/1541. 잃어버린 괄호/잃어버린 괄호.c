#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int pow(int value, int time) {
	int pow_number = 1;
	for (int i = 1; i <= time; i++) {
		pow_number *= value;
	}
	return pow_number;
}

int main() {
	char equation[51];
	scanf("%s", equation);
	int number = 0, is_reverse = 0, answer = 0;
	int len = strlen(equation);
	for (int i = 0; i < len; i++) {
		if (equation[i] == '-') {
			if (is_reverse)
				answer -= number;
			else
				answer += number;
			number = 0;
			is_reverse = 1;
		}
		else if (equation[i] == '+') {
			if (is_reverse)
				answer -= number;
			else
				answer += number;
			number = 0;
		}
		else {
			number = (number * 10) + (equation[i] - '0');
		}
	}
	if (is_reverse)
		answer -= number;
	else
		answer += number;
	printf("%d", answer);
}