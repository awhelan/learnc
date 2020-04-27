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

void printList(struct Node *node) {
	printf("Contents of the list: \n");
	while(node != NULL){
		printf("Data: %d \n", node->data);
		node=node->next;
	}
}

// Add a new item to the end of our linked list. 
//function append(struct Node** node, int value) {
//}


/* Given a node prev_node, insert a new node after the given
   prev_node */
void insert(struct Node* prev_node, int new_data)
{
    /* 1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    /* 2. allocate new node */
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

    /* 3. put in the data  */
    new_node->data  = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
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

    insert(second, 543);
	printList(head);

	return 0;
}
