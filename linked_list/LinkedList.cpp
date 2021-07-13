#include <iostream>
#include "Linkedlist.h"

namespace
{
    void _insert_to_head(Linkedlist* ll, Node& n) {
        if (ll->root) {
            n.next = ll->root;
            ll->root = &n; // Pass by reference by still need memory address?
        }
        else {
            std::cout << "Assigning to " << n.value << "\n";
            ll->root = &n;
        }
        ll->size += 1;
    }
}


Linkedlist::Linkedlist(Node* root) {
    this->root = root;
    if (root) {
        std::cout << "inside" << "\n";
        this->size += 1;
    }
};

void Linkedlist::insert_to_head(int value) {
    Node n(value);
    _insert_to_head(this, n);
};

void Linkedlist::insert_to_head(Node n) {
    _insert_to_head(this, n);
}

void Linkedlist::print_linked_list() {
    Node* n = this->root;
    while (n) {
        std::cout << n->value << " --> ";
        n = n->next;
    }
}

bool Linkedlist::remove_node_with_value(int value) {
    Node* previous_node = nullptr;
    Node* current_node = this->root;
    while (current_node) {
        if (current_node->value == value) {
            if (previous_node) {
                previous_node->next = current_node->next;
                this->size -= 1;
                return true;
            } else { /* Removing first item from list */
                this->root = current_node->next;
                this->size -= 1;
                return true;
            }
        }
        else {
            previous_node = current_node;
            current_node = current_node->next;
        }
    };
    return false;
}