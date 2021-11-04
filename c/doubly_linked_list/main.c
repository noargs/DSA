#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head;

struct node* get_new_node(int x){
    struct node* node_ptr = (struct node*)malloc(sizeof(struct node));

    node_ptr->data = x;
    node_ptr->prev = NULL;
    node_ptr->next = NULL;

    return node_ptr; 
}

void insert_at_head(int x){
    struct node* new_node = get_new_node(x);

    if(head == NULL){
        head = new_node;
        return;
    }

    head->prev = new_node;
    new_node->next = head;
    head = new_node;
}

void insert_at_end(int x){
    struct node* new_node = get_new_node(x);

    if(head == NULL){
        head = new_node;
        return;
    }

    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
}

void print(){
    struct node* temp = head;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse_print(){
    struct node* temp = head;
    if(temp == NULL) return; // empty list, exit
    // Going to last node
    while(temp->next != NULL){
        temp = temp->next;
    }
    // Traversing backward using prev pointer
    printf("Reverse: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");

}

int main(int argc, char** argv){
    head = NULL;
    insert_at_head(2); print(); //reverse_print();
    insert_at_head(4); print(); //reverse_print();
    insert_at_head(6); print(); //reverse_print();
    insert_at_end(8); print(); //reverse_print();
    insert_at_head(7); print();

}