#include <stdlib.h>

struct Node{
    struct Node* next;
    void * data;
};

struct Node* initNode(void* data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // new node is given space in heap
    newNode->data = data;
    
    return newNode;
}

void join(struct Node* head, struct Node* tail){
    getLastNode(head)->next = tail; // tail is joined to the last node in the head
}

void* get(struct Node* head, int index){
    for(int i = 0; i < index; i++){
        head = head->next;
    }
    return head->data;
}

struct Node* getLastNode(struct Node* head){
    // head is used as cursor
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}