#include "AdiLinkedList.h"
#include <stdlib.h>

struct Node* initNode(void* data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // new node is given space in heap
    newNode->data = data;
    
    return newNode;
}

struct AdiLinkedList* initAdiLinkedList(){
    struct AdiLinkedList* newList = (struct AdiLinkedList*)malloc(sizeof(struct AdiLinkedList));
    return newList;
}

void* get(struct AdiLinkedList* list, int index){
    struct Node* head = list->head;

    for(int i = 0; i < index; i++){
        head = head->next;
    }
    return head->data;
}

void insertAtBegining(struct AdiLinkedList* list, void* data){
    struct Node* newNode = initNode(data);
    newNode->next = list->head;
    list->head = newNode;
}

void insertAtEnd(struct AdiLinkedList* list, void* data){
    struct Node* newNode = initNode(data);
    if(list->head == NULL){
        list->head = newNode;
        list->tail = newNode;
        return;
    }
    list->tail->next = newNode;
    list->tail = newNode;
}

void freeNodes(struct Node* head){
    struct Node* next;
    struct Node* curr = head;

    while(curr !=  NULL){
        next = curr->next;
        free(curr->data);
        free(curr);
        curr = next;
    }
}

void freeAdiLinkedList(struct AdiLinkedList* list){
    freeNodes(list->head);
    free(list);
}

void freeHead(struct AdiLinkedList* list){
    struct Node* oldhead = list->head;
    list->head = list->head->next;
    free(oldhead->data);
    free(oldhead);
}
