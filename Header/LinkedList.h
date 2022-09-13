#pragma once
#include "stdio.h"
#include "stdlib.h"

typedef struct listNode {
	int Data;
	struct listNode* Next;
	struct listNode* Prev;
}Node;

Node* createNode(int data);
void deleteNode(Node* Node);
Node* getNodeAt(Node* Start, int index);
int countNode(Node* start);
void addNode(Node** start, Node* newNode);
void insertNode(Node* current, Node* newNode);
void screenNode(Node* start);
void removeNode(Node** start, Node* remove);
void clearNode(Node** start_pos);
void changeNode(Node** start_pos, Node* current);
void ascendingNode(Node** start_pos);
void descendingNode(Node** start_pos);