// AdiLinkedList.h

#ifndef ADILINKEDLIST_H
#define ADILINKEDLIST_H

// Define a node structure
struct Node {
    struct Node* next;
    void* data;
};

// Define the AdiLinkedList

struct AdiLinkedList{
    struct Node* head;
    struct Node* tail;
};

// Function prototypes
struct Node* initNode(void* data);
struct AdiLinkedList* initAdiLinkedList();
void* get(struct AdiLinkedList* list, int index);
void insertAtBegining(struct AdiLinkedList* list, void* data);
void insertAtEnd(struct AdiLinkedList* list, void* data);
void freeNodes(struct Node* head);
void freeAdiLinkedList(struct AdiLinkedList* list);
void freeHead(struct AdiLinkedList* list);


#endif
