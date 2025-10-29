#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(char* stack, int* top, char value) {
	stack[++(*top)] = value;
}

char peek(char* stack, int* top) {
	return stack[*top];
}

char pop(char* stack, int* top) {
	return stack[(*top)--];
}

int main() {
	char string[101];
	char stack[100];
	while (1) {
		int top = -1;
		gets(string);
		if (!strcmp(string, "."))
			break;
		int s_len = strlen(string), isYes = 1;
		for (int i = 0; i < s_len; i++) {
			if (string[i] == '(' || string[i] == '[') {
				push(stack, &top, string[i]);
			}
			else if (string[i] == ')' || string[i] == ']') {
				if (peek(stack, &top) == '(' && ')' == string[i] || peek(stack, &top) == '[' && ']' == string[i])
					pop(stack, &top);
				else {
					isYes = 0;
					break;
				}
			}
		}
		if (isYes && top == -1)
			printf("yes\n");
		else
			printf("no\n");
	}
}