#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char string[1001];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", string);
		int len = strlen(string);
		if (6 <= len && len <= 9)
			printf("yes\n");
		else
			printf("no\n");
	}
	
}