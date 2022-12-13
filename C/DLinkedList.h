typedef struct DLinkedList_Node DLinkedList_Node; 
struct DLinkedList_Node{
    void* pointer;
    DLinkedList_Node* prev;
    DLinkedList_Node* next;
};

typedef struct{
    DLinkedList_Node* start;
    DLinkedList_Node* end;
    unsigned long length;
}DLinkedList;

DLinkedList* createDLinkedList();
void DLinkedList_Append(DLinkedList* list, void* pointer);