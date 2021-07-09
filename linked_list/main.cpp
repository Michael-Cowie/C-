#include <iostream>

#include "Node.h"
#include "Linkedlist.h"


int main() {
    Linkedlist linked_list = Linkedlist(); // using "new" returns a pointer to the object, this returns a value.
    linked_list.insert_to_head(5);
    std::cout << linked_list.root->value << "\n"; // 5

    Node n(0);
    linked_list.insert_to_head(n);
    std::cout << linked_list.root->value << "\n"; // 0
    return 0;
}