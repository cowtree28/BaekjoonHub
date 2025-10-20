#define _CRT_SECURE_NO_WARNINGS
#define M 100007
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int key;
	char value[21];
	char password[21];
	struct Node* next;
}Node;

typedef struct Bucket {
	Node* head;
	int count;
}Bucket;

Bucket* hashTable = NULL;
int bucketSize = M;

Node* createNode(int key, char* value, char* password) {
	Node* newNode;

	newNode = (Node*)malloc(sizeof(Node));

	newNode->key = key;
	strcpy(newNode->value, value);
	strcpy(newNode->password, password);
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

void add(char* value, char* password) {
	int key = hashFunction(value);
	Node* newNode = createNode(key, value, password);
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

Node* isInHashTable(char* value) {
	int key = hashFunction(value);
	Node* node = hashTable[key].head;
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
	hashTable = (Bucket*)calloc(bucketSize,sizeof(Bucket));
	int n, m;
	scanf("%d %d", &n, &m);
	char name[21], password[21];
	for (int i = 0; i < n; i++) {
		scanf("%s %s", name, password);
		add(name,password);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s", name);
		Node* node = isInHashTable(name);
		if (node != NULL)
			printf("%s\n", node->password);
	}
}