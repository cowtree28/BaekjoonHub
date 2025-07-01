#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int set[21] = { 0 };

int check(int x) {
	return set[x];
}
void toggle(int x){
	set[x] = !set[x];
}
void add(int x) {
	set[x] = 1;
}
void remove_1(int x) {
	set[x] = 0;
}
void all() {
	for (int i = 1; i < 21; i++)
		set[i] = 1;
}
void empty() {
	for (int i = 1; i < 21; i++)
		set[i] = 0;
}

int main() {
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		char temp[7];
		int n;
		scanf("%s", temp);
		if (!strcmp(temp, "add")) {
			scanf("%d", &n);
			add(n);
		}
		else if (!strcmp(temp, "remove")) {
			scanf("%d", &n);
			remove_1(n);
		}
		else if (!strcmp(temp, "check")) {
			scanf("%d", &n);
			printf("%d\n",check(n));
		}
		else if (!strcmp(temp, "toggle")) {
			scanf("%d", &n);
			toggle(n);
		}
		else if (!strcmp(temp, "all")) {
			all();
		}
		else if (!strcmp(temp, "empty")) {
			empty();
		}
	}
}