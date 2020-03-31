//
// Created by Ghirisan Sebastian on 30/03/2020.
//

#ifndef LAB3_OOP_ARBORE_H
#define LAB3_OOP_ARBORE_H


#include "nod.h"

class Tree {
   // friend class Node;
//public:
private:

   // Node* root;
   // Node* left;
  //  Node* right;
public:
    Node *root;
    Tree();
    //Tree(Node* root,Node* left,Node* right);
    void insert(int key, Node *leaf);
    void delete_elem(int key, Node *leaf);
    std::string preorder(Node *knoten);
    std::string inorder(Node *knoten);
    std::string postorder(Node *knoten);
    int countnode(Node *k);
    int countedge(Node *k);
    int hohe(Node *k);

};


#endif //LAB3_OOP_ARBORE_H



