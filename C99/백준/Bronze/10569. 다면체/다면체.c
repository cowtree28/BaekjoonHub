#include <stdio.h>

int main() {
	int T, v, e;
	scanf("%d", &T);
	for(int t = 0;t<T;t++){
		scanf("%d %d", &v, &e);
		printf("%d\n", e - v + 2);
	}
}