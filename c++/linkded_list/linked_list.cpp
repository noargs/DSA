#include "linked_list.h"

void LinkedList::show() {
    Node* node = head;
    while(node->next != NULL){
        std::cout << node->data << std::endl;
        node = node->next;
    }
    std::cout << node->data << std::endl;
}

void LinkedList::insert(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = NULL;

    Node* n = head;

    if(head == NULL) {
        head = node;
    } else {
        while(n->next != NULL){
            n = n->next;
        }
        n->next = node;
    }
}

void LinkedList::insertAtStart(int data) {
    Node* node = new Node;
    node->data = data;

    node->next = head;
    head = node;
}

void LinkedList::insertAt(int index, int data) {
    Node* node = new Node;
    node->data = data;

    if(index == 0){
        LinkedList::insertAtStart(data);
    }

    Node* n = head;

    for(int i = 0; i < index - 1; i++){
        n = n->next;
    }

    node->next = n->next;
    n->next = node;

}
