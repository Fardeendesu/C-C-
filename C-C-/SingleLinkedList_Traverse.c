#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
}sex;
struct Node* SingleLinkedList_Traverse(int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof (struct Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main(){
    struct Node* head = SingleLinkedList_Traverse(1);    
    struct Node* second = SingleLinkedList_Traverse(2);
    struct Node* third = SingleLinkedList_Traverse(3);

    head->next = second;
    second->next = third;

    struct Node* current = head;
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
    return 0;
}