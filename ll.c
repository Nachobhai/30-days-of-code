#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


void show(struct node *n){
    while(n!=NULL){
        printf("%d", n->data);
        n=n->next;
    }
}

int main() {
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;


    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));


    first->data = 6;
    first->next = third;

    second->data = 420;
    second->next = NULL;

    third->data = 9;
    third->next = second;

    show(first);

    return 0;  
}