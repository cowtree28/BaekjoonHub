#define _CRT_SECURE_NO_WARNINGS
#define M 10007
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
	int key;
	char value[501];
	struct Node* next;
};

struct HashTable {
	struct Node* head;
	int count;
};

struct HashTable* hashTable = NULL;
int hashTableSize = M;

struct Node* createNode(int key, char* value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->key = key;
	strcpy(newNode->value, value);
	newNode->next = NULL;

	return newNode;
}

int hashFunction(char* value) {
	int len = strlen(value);
	int hash = 0;
	for (int i = 0; i < len; i++)
		hash = (hash + (((value[i] % M) * (i + 1)) % M * 31) % M) % M;
	return hash;
}

void add(char* value) {
	int key = hashFunction(value);
	struct Node* newNode = createNode(key, value);
	if (hashTable[key].count == 0) {
		hashTable[key].count = 1;
		hashTable[key].head = newNode;
	}
	else {
		newNode->next = hashTable[key].head;
		hashTable[key].head = newNode;
		hashTable[key].count++;
	}
}

struct Node* isInHashTable(char* value) {
	int key = hashFunction(value);
	struct Node* node = hashTable[key].head;
	int flag = 0;
	while (node != NULL) {
		if (!strcmp(node->value, value)) {
			return node;
			break;
		}
		node = node->next;
	}
	return NULL;
}
int main() {
	hashTable = (struct HashTable*)calloc(hashTableSize, sizeof(struct HashTable));
	int n, m;
	char temp[501];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", temp);
		add(temp);
	}
	int sum = 0;
	for (int i = 0; i < m; i++) {
		scanf("%s", temp);
		struct Node* n = isInHashTable(temp);
		if (n != NULL)
			sum++;
	}
	printf("%d", sum);
}