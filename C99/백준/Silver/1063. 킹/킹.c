#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_in(char locate[]) {
	return 1 <= (locate[0] - '@') && (locate[0] - '@') <= 8 && 1 <= (locate[1] - '0') && (locate[1] - '0') <= 8;
}
char* calculate_to_string(int x, int y) {
	char temp[3];
	temp[0] = '@' + x;
	temp[1] = '0' + y;
	temp[2] = '\0';
	return temp;
}
int main() {
	char king[3], stone[3];
	int n;
	scanf("%s %s %d", king, stone, &n);
	char act[3];
	for (int i = 0; i < n; i++) {
		scanf("%s", act);
		if (!strcmp(act, "R")) {
			king[0]++;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[0]++;
					if (!is_in(stone)) {
						king[0]--;
						stone[0]--;
					}
				}
			}
			else
				king[0]--;
		}
		else if (!strcmp(act, "L")) {
			king[0]--;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[0]--;
					if (!is_in(stone)) {
						king[0]++;
						stone[0]++;
					}
				}
			}
			else
				king[0]++;
		}
		else if (!strcmp(act, "B")) {
			king[1]--;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]--;
					if (!is_in(stone)) {
						king[1]++;
						stone[1]++;
					}
				}
			}
			else
				king[1]++;
		}
		else if (!strcmp(act, "T")) {
			king[1]++;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]++;
					if (!is_in(stone)) {
						king[1]--;
						stone[1]--;
					}
				}
			}
			else
				king[1]--;
		}
		else if (!strcmp(act, "RT")) {
			king[0]++;
			king[1]++;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]++;
					stone[0]++;
					if (!is_in(stone)) {
						king[0]--;
						king[1]--;
						stone[0]--;
						stone[1]--;
					}
				}
			}
			else {
				king[0]--;
				king[1]--;
			}
		}
		else if (!strcmp(act, "LT")) {
			king[0]--;
			king[1]++;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]++;
					stone[0]--;
					if (!is_in(stone)) {
						king[0]++;
						king[1]--;
						stone[0]++;
						stone[1]--;
					}
				}
			}
			else {
				king[0]++;
				king[1]--;
			}
		}
		else if (!strcmp(act, "RB")) {
			king[0]++;
			king[1]--;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]--;
					stone[0]++;
					if (!is_in(stone)) {
						king[0]--;
						king[1]++;
						stone[0]--;
						stone[1]++;
					}
				}
			}
			else {
				king[0]--;
				king[1]++;
			}
		}
		else if (!strcmp(act, "LB")) {
			king[0]--;
			king[1]--;
			if (is_in(king)) {
				if (!strcmp(king, stone)) {
					stone[1]--;
					stone[0]--;
					if (!is_in(stone)) {
						king[0]++;
						king[1]++;
						stone[0]++;
						stone[1]++;
					}
				}
			}
			else {
				king[0]++;
				king[1]++;
			}
		}
	}
	printf("%s\n%s", king, stone);
}