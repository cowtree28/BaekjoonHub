#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main() {
	char n[8];
	scanf("%s", n);
	int set[9] = {0};
	int set_num = 0;
	for (int i = 0; i < strlen(n); i++) {
		if (n[i] - '0' == 9) {
			n[i] -= 3;
		}
		if (set[n[i] - '0'] <= 0) {
			for (int i = 0; i < 9; i++)
				set[i]++;
			set[6]++;
			set_num++;
			set[n[i]-'0']--;
		}
		else
			set[n[i]-'0']--;
	}
	printf("%d", set_num);
}