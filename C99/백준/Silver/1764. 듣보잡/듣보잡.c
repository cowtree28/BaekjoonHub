#define _CRT_SECURE_NO_WARNINGS
#define M 1000007
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int key;
	char value[21];
	struct Node* next;
}Node;

typedef struct Bucket {
	Node* head;
	int count;
}Bucket;

typedef struct Human {
	char name[21];
}Human;

Bucket* hashTable = NULL;
int BUCKET_SIZE = M;

Node* createNode(int key, char* value) {
	Node* newNode;

	newNode = (Node*)malloc(sizeof(Node));

	newNode->key = key;
	strcpy(newNode->value,value);
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

int add(char* value) {
	int key = hashFunction(value);
	Node* newNode = createNode(key, value);
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

int isInHashTable(char* value) {
	int key = hashFunction(value);
	Node* node = hashTable[key].head;
	int flag = 0;
	while (node != NULL) {
		if (!strcmp(node->value, value)) {
			flag = 1;
			break;
		}
		node = node->next;
	}
	return flag;
}

int compare(const void* a, const void* b) {
	return strcmp(((Human*)a)->name, ((Human*)b)->name);
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char name[21];
	hashTable = (Bucket*)calloc(BUCKET_SIZE, sizeof(Bucket));
	for (int i = 0; i < n; i++) {
		scanf("%s", name);
		add(name);
	}
	Human* humans = (Human*)malloc(sizeof(Human) * (n > m ? n : m));
	int idx = 0;
	for (int i = 0; i < m; i++) {
		scanf("%s", name);
		if (isInHashTable(name)) {
			strcpy(humans[idx++].name, name);
		}
	}
	qsort(humans, idx, sizeof(Human), compare);
	printf("%d\n", idx);
	for (int i = 0; i < idx; i++) {
		printf("%s\n",humans[i].name);
	}
}
	