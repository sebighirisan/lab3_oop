//
// Created by Ghirisan Sebastian on 30/03/2020.
//

#include <iostream>
#include "arbore.h"
#include <queue>
#include "nod.h"



Tree::Tree() {
    root = nullptr;
}

//void Tree::insert(Node *tree, int v) {
// if (root == nullptr) {
// root = new Node(v);
//root->val=v;
//root->links = nullptr;
//root->rechts = nullptr;
//  } else {
//   Node *ptr = root;
//while (ptr->rechts!= nullptr and ptr->links!= nullptr) {
//   while (ptr){
//       if (ptr->val > v) {
//      if (ptr->links == nullptr){
//        ptr->links = new Node(v);
//      break;
//   }
//  ptr = ptr->links;
// } else if (ptr->val < v) {
//    if (ptr->rechts == nullptr){
//   ptr->rechts = new Node(v);
//       break;
//  }
//  ptr = ptr->rechts;
// }


// }
//  }
//}

void Tree::insert(int key, Node* leaf){
    if(key < leaf->kn){
        if(leaf->left != NULL){
            insert(key, leaf->left);
        }else{
            leaf->left = new Node(key);
            leaf->left->kn = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }else if(key >= leaf->kn){
        if(leaf->right != NULL){
            insert(key, leaf->right);
        }else{
            leaf->right = new Node(key);
            leaf->right->kn = key;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }

}


void Tree::delete_elem(int key, Node *leaf){
    Node *ptr = root;
    while (ptr){
        if(ptr->right!= nullptr)
            if(ptr->right->kn == key){
                ptr->right=ptr->right->left;
                break;
            }
        if(ptr->left!= nullptr)
            if(ptr->left->kn == key){
                ptr->left=ptr->left->right;
                break;
            }
        if (ptr->kn > key) {
            if (ptr->left == nullptr){
                break;
            }
            ptr = ptr->left;
        } else
        if (ptr->kn < key) {
            if (ptr->right == nullptr){
                break;
            }
            ptr = ptr->right;
        }
    }

}

std::string Tree::inorder(Node *root){
    if (root == NULL)
        return "";
    return inorder(root->left) + std::to_string(root->kn) + " " + inorder(root->right);
}
std::string Tree::preorder(Node *root){
    if (root == NULL)
        return "";
    return std::to_string(root->kn) + " " + preorder(root->left) + preorder(root->right);
}
std::string Tree::postorder(Node *root){

    if (root == NULL)
        return "";
    return postorder(root->left) + postorder(root->right) + std::to_string(root->kn) + " ";
}

int Tree::countnode(Node *k){
    if(k == nullptr)
        return 0;
    else
        //if(n->links != nullptr)
        return 1+ countnode(k->left) +countnode(k->right);
    //if(n->rechts != nullptr)
    //return 1+countNodes(n->rechts);
}

int Tree::countedge(Node *k){
    return countnode(k) - 1;
}

int Tree::hohe(Node *k){
    if (k == NULL)
        return 0;
    else
    {
        int l = hohe(k->left);
        int r = hohe(k->right);

        if (l > r)
            return(l + 1);
        else return(r + 1);
    }
}
