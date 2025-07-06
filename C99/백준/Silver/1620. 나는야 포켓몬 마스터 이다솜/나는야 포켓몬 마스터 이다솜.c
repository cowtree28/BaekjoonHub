#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char** dex = (char**)malloc(sizeof(char*) * n);
	dex[0] = (int*)malloc(sizeof(char) * 21 * n);
	for (int i = 1; i < n; i++) {
		dex[i] = dex[i - 1] + 21;
	}
	long long int* hash = (long long int*)calloc(sizeof(long long int),n);
	for (int i = 0; i < n; i++) {
		scanf("%s", dex[i]);
		for (int j = 0; j < strlen(dex[i]); j++)
			hash[i] += dex[i][j] * (j + 1) * (i+1);
	}
	char temp[21];
	for (int i = 0; i < m; i++) {
		scanf("%s", temp);
		if ('1' <= temp[0] && temp[0] <= '9') {
			int number = 0, j = strlen(temp) - 1;
			while (1) {
				number += (temp[j] - '0') * (int)pow(10, strlen(temp)-j-1);
				j--;
				if (j <= -1) {
					printf("%s\n",dex[number - 1]);
					break;
				}
			}	
		} 
		else {
			int len = strlen(temp);
			long long int now_hash = 0;
			for (int j = 0; j < len; j++) {
				now_hash += temp[j] * (j + 1);
			}
			for (int j = 0; j < n; j++) {
				/*printf("j : %d\n", j);*/
				if ((now_hash * (j+1)) != hash[j]) {
					/*printf("해시 값이 다름 %lld != %lld\n", now_hash * (j+1), hash[j]);*/
					continue;
				}
				else {
					int is_find = 0, now = 0;
					for (int t = 0; t < len; t++) {
						if (temp[t] != dex[j][t])
							break;
						if (t == (len - 1))
							is_find = 1;
					}
					if (is_find) {
						printf("%d\n", j + 1);
						break;
					}
				}
			}
		}
	}
}