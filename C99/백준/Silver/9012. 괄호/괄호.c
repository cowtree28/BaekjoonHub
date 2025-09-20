#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_empty(int* top) {
	return *top == -1;
}

char peek(char* stack, int* top) {
	if (!is_empty)
		return NULL;
	return stack[*top];
}

void push(char* stack, int* top, int value) {
	stack[++(*top)] = value;
}

char pop(char* stack, int* top) {
	return stack[(*top)--];
}

int main() {
	int n;
	scanf("%d", &n);
	char parenthesis[50];
	for (int i = 0; i < n; i++) {
		scanf("%s", parenthesis);
		int len = strlen(parenthesis);
		char stack[50];
		int top = -1;
		int is_vps = 1;
		for (int j = 0; j < len; j++) {
			if (parenthesis[j] == '(')
				push(stack, &top, '(');
			else if (parenthesis[j] == ')') {
				if (peek(stack, &top) == '(')
					pop(stack, &top);
				else {
					is_vps = 0;
					break;
				}
			}
		}
		if (is_vps && !is_empty(&top))
			is_vps = 0;
		printf("%s\n", is_vps ? "YES" : "NO");
	}
}