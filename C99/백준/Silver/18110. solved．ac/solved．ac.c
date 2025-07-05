#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int Difficulty[30] = { 0 };
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		Difficulty[temp - 1]++;
	}
	int trim = (int)round((double)n / 100 * 15);
	double answer = 0;
	int count = 0;
	for (int i = 0; i < 30; i++) {
		while (1) {
			if (!Difficulty[i])
				break;
			if (count < trim || (n - 1) - trim < count) ;
			else {
				answer += (i + 1);
			}
			count++;
			Difficulty[i]--;
		}
	}
	if(answer != 0)
		answer /= (n - (trim*2));
	printf("%.0lf",round(answer));
}