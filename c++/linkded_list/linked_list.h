#ifndef LINKDED_LIST_LINKED_LIST_H
#define LINKDED_LIST_LINKED_LIST_H

#include <iostream>
#include "node.h"
#include "stdlib.h"

class LinkedList{
private:
    Node* head;

public:
    void show();
    void insert(int data);
    void insertAtStart(int data);
    void insertAt(int index, int data);
    int size();




};

#endif //LINKDED_LIST_LINKED_LIST_H
