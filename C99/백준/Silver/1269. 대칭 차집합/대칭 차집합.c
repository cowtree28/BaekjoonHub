#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_BUCKET_SIZE 200000
typedef struct {
	int key;
	int value;
	struct Node* next;
}Node;

typedef struct {
	Node** head;
}HashTable;

Node* createNode(int key, int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->key = key;
	newNode->value = value;
	newNode->next = NULL;
	return newNode;
}

int hash(int value) {
	return value % MAX_BUCKET_SIZE;
}

void add(HashTable* h, int value) {
	int key = hash(value);
	Node* newNode = createNode(key, value);
	if (h->head[key] == NULL) {
		h->head[key] = newNode;
	}
	else {
		newNode->next = h->head[key];
		h->head[key] = newNode;
	}
}

int find(HashTable* h, int value) {
	int key = hash(value);
	Node* node = h->head[key];
	while (node != NULL) {
		if (node->value == value)
			return 1;
		node = node->next;
	}
	return 0;
}

HashTable* initHashTable() {
	HashTable* h = (HashTable*)malloc(sizeof(HashTable));
	h->head = (Node**)calloc(MAX_BUCKET_SIZE, sizeof(Node*));
	return h;
}
// A에는 있고 B에는 없는거 B에는 있고 A에는 없는거
int main() {
	HashTable* A = initHashTable();
	HashTable* B = initHashTable();
	int a_len, b_len;
	scanf("%d %d", &a_len, &b_len);

	int* a_input = malloc(sizeof(int) * a_len);
	int* b_input = malloc(sizeof(int) * b_len);
	for (int i = 0; i < a_len; i++) {
		scanf("%d", &a_input[i]);
		add(A, a_input[i]);
	}
	for (int i = 0; i < b_len; i++) {
		scanf("%d", &b_input[i]);
		add(B, b_input[i]);
	}
	int answer = 0;
	for (int i = 0; i < a_len; i++)
		if (!find(B, a_input[i]))
			answer++;
	for (int i = 0; i < b_len; i++)
		if (!find(A, b_input[i]))
			answer++;
	printf("%d", answer);
}