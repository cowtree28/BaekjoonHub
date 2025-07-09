#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int age;
	char name[101];
	int idx;
}Member;

int compare(const void* a, const void* b) {
	Member* m1 = (Member*)a;
	Member* m2 = (Member*)b;

	if (m1->age != m2->age)
		return m1->age - m2->age; 
	else
		return m1->idx - m2->idx; 
}

int main() {
	int n;
	scanf("%d", &n);
	Member* members = (Member*)malloc(sizeof(Member) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &members[i].age, members[i].name);
		members[i].idx = i;
	}
	qsort(members, n, sizeof(Member), compare);
	for (int i = 0; i < n; i++)
		printf("%d %s\n",members[i].age,members[i].name);
}