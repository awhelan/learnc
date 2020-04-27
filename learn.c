// Include Standard IO Library. 
#include <stdio.h>
// Include Standard bool Library. 
#include <stdbool.h>
// STDlib is required because we are using malloc()
#include <stdlib.h>

// Creating a data structure called Node = a single node in the list.
struct Node {
	int data; 
	struct Node* next;
};

struct LinkedList {
	struct Node* first;
	struct Node* last;
};

void printList(struct Node *node) {
	printf("Contents of the list: \n");
	while(node != NULL){
		printf("Data: %d \n", node->data);
		node=node->next;
	}
}

// Add a new item after the given node. 
void insert(struct Node** node, int value) {
	struct Node* new = NULL;
}

// Add a new item at the very end of the list.
void append(struct Node** node, int value)
{
	
	while(true) {	}

}

struct Node** last(struct Node** node)
{

}

int main() {
	// Declare 3 nodes in our linked list.
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;

	// Allocate memory in C for our 3 nodes. 
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	// Set the value of the first item in the list. 
	head->data = 25;
	head->next = second;

	// Set the value of the second item in the list. 
	second->data = 32;
	second->next = third;

	// Set the value of the third item. 
	third->data = 45;
	third->next = fourth;

	// 4th. 
	fourth->data = 49;
	fourth->next = NULL;

	printList(head);

	return 0;
}
