#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char n[1000000], t = 0;
	while (1) {
		gets(n);
		if (n[0] == '0')
			break;
		printf("Case %d: Sorting... done!\n", ++t);
	}
}