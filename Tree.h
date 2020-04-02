//
// Created by a on 3/29/2020.
//

#ifndef LAB3_TREE_H
#define LAB3_TREE_H
#include "Node.h"

class Tree {

public:

    Node *root;
    Tree();
    void insert(int key, Node *leaf);
    //void delete_elem(int key, Node *leaf);
    //std::string preorder(Node *knoten);
    //std::string inorder(Node *knoten);
    //std::string postorder(Node *knoten);
    int countnode(Node *k);
    //int countedge(Node *k);
    //int hohe(Node *k);

};


#endif //LAB3_TREE_H