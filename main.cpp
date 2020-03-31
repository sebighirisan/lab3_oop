#include <iostream>
//#include "Node.h"
#include "arbore.h"
#include <assert.h>

int main() {
    Tree tr;
    tr.insert(5,tr.root);
    tr.insert(4,tr.root);
    tr.insert(10,tr.root);
    tr.insert(8,tr.root);
    assert(tr.countnode(tr.root)==4);
    tr.delete_elem(8,tr.root);
    assert(tr.countnode(tr.root)==3);
    tr.insert(11,tr.root);
    tr.insert(12,tr.root);
    tr.insert(3,tr.root);
    assert(tr.preorder(tr.root)=="5 4 3 10 11 12 ");
    assert(tr.inorder(tr.root)=="3 4 5 10 11 12 ");
    assert(tr.postorder(tr.root)=="3 4 12 11 10 5 ");
    assert(tr.countnode(tr.root)==6);
    assert(tr.countedge(tr.root)==5);
    assert(tr.hohe(tr.root)==4);
    std::cout<<"Test End!";

    return 0;
}