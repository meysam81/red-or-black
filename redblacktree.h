
#include "node.h"

#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H


/* Forward declaration for circular relationship
 * because we wanted to add RedBlackTree as a friend to node
 * and also add a field of type node in the class RedBlackTree
 * as it is a circular relationship, we need a what so called 'forward declaration'
 * */
class node;


class RedBlackTree
{
private:


    node *root;
public:
    bool insert(int x);
    RedBlackTree();
};

#endif // REDBLACKTREE_H
