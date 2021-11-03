#include <iostream>
#include "linked_list.h"

int main() {

    LinkedList linkedList{};
    linkedList.insert(5);
    linkedList.insert(10);
    linkedList.insert(21);


    linkedList.insertAtStart(23);
    linkedList.insertAt(2, 70);
    linkedList.show();


    return 0;
}
