#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Human {
	int rank;
	int weight;
	int height;
}Human;

int main() {
	int n, height, weight;
	scanf("%d", &n);
	Human* humans = (malloc(sizeof(Human) * n));
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &height, &weight);
		humans[i].weight = weight;
		humans[i].height = height;
		humans[i].rank = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (humans[i].weight < humans[j].weight && humans[i].height < humans[j].height)
				humans[i].rank++;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", humans[i].rank);
}