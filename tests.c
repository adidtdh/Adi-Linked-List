#include "AdiLinkedList.h"
#include <stdio.h>

int main(){
    struct AdiLinkedList* list = initAdiLinkedList();
    
    int x = 7;
    insertAtBegining(list,&x);
    
    int retVal = *(int*)get(list,0);
    printf("%d", retVal);
}