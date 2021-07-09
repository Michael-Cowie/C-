#pragma once
#include "Node.h"

class Linkedlist {

    public:
        Node* root;
        int size;
        
        void insert_to_head(int value);
        void insert_to_head(Node node);

        Linkedlist(Node* root=nullptr);
};

