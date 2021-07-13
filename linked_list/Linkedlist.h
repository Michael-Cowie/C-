#pragma once
#include "Node.h"

class Linkedlist {

    public:
        Node* root;
        int size;
        
        void insert_to_head(int value);
        void insert_to_head(Node node);

        bool remove_node_with_value(int value);
        void print_linked_list();

        Linkedlist(Node* root=nullptr);
};

