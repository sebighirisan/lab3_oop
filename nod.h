//
// Created by Ghirisan Sebastian on 28/03/2020.
//

#ifndef LAB3_OOP_NOD_H
#define LAB3_OOP_NOD_H

#include "arbore.h"

class Node{
    friend class Tree;
private:
    int kn;
    Node* left;
    Node* right;
protected:
    explicit Node(int n){
        kn = n;
        left=right=nullptr;
    }

};
#endif //LAB3_OOP_NOD_H
