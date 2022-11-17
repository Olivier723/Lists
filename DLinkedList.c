#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

DLinkedList* createDLinkedList(){
    DLinkedList* list = malloc(sizeof(DLinkedList));
    list->start = NULL;
    list->end = NULL;
    return list;
}

void DLinkedList_Append(DLinkedList* list, void* pointer){
    if(list == NULL) return;
    DLinkedList_Node* newNode = malloc(sizeof(DLinkedList_Node));
    newNode->pointer = pointer;
    newNode->next = NULL;
    newNode->prev = list->end;
    list->end = newNode;
    if(list->start == NULL) list->start = newNode;
}

DLinkedList_Node* DLinkedList_getNode(DLinkedList* list, size_t index){
    size_t middle = index/2;
    if(index <= middle){
        DLinkedList_Node* tempNode = list->start;
        for(int i = 0; i < index; ++i) tempNode->next;
    }else{
        DLinkedList_Node* tempNode = list->end;
        for(int i = list->length-1; i >= index; --i) tempNode->prev;
    }
    return tempNode;
}

void DLinkedList_Insert(DLinkedList* list, void* pointer, size_t index){

}