#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char a[6] = "aeiou";
	int ans = 0;
	char temp[100];
	scanf("%s", temp);
	for (int i = 0; i < strlen(temp); i++) {
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] == temp[i])
				ans++;
		}
	}
	printf("%d", ans);
}