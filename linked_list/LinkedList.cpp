#include "Linkedlist.h"

namespace
{
    void _insert_to_head(Linkedlist* ll, Node& n) {
        if (ll->root) {
            n.next = ll->root;
            ll->root = &n;
        }
        else {
            ll->root = &n;
        }
    }
}


Linkedlist::Linkedlist(Node* root) {
    this->root = root;
    if (root) {
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