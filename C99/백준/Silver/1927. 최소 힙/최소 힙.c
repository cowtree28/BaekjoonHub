#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int* arr;
	int size;
}Heap;

void* xalloc(int size) {
	void* r = malloc(size);
	if (r == NULL)
		exit(1);
	return r;
}

Heap* heap_init(int size) {
	Heap* h = (Heap*)xalloc(sizeof(Heap));
	h->arr = (int*)xalloc(sizeof(int) * size);
	h->size = 0;
	return h;
}

int min_node(int a, int b) {
	return a < b ? a : b;
}

void heap_insert(Heap* h, int value) {
	h->arr[++h->size] = value;
	int now = h->size;
	while (now > 1 && value < h->arr[now / 2]) {
		h->arr[now] = h->arr[now / 2];
		now /= 2;
	}
	h->arr[now] = value;
}

int heap_pop(Heap* h) {
	if (h->size == 0) return -1;
	int deleted = h->arr[1];
	int last_val = h->arr[h->size--];
	int parent = 1;
	int child = 2;
	while (child <= h->size) {
		if (child + 1 <= h->size && h->arr[child] > h->arr[child + 1]) {
			child++;
		}
		if (last_val <= h->arr[child]) {
			break;
		}
		h->arr[parent] = h->arr[child];
		parent = child;
		child = parent * 2;
	}
	h->arr[parent] = last_val;
	return deleted;
}

int main() {
	int n, temp;
	scanf("%d", &n);
	Heap* h = heap_init(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp == 0) {
			temp = heap_pop(h);
			if (temp == -1)
				printf("%d\n", 0);
			else
				printf("%d\n", temp);
		}
		else
			heap_insert(h, temp);
	}
}