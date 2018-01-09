#ifndef NODE_H
#define NODE_H
#include "redblacktree.h"


class node
{
private:


    enum COLOR {RED, BLACK};
    bool color;
    int value;
    node *left;
    node *right;
    node *parent;
public:

    node(int value = 0);
    ~node();

    friend class RedBlackTree;
};

#endif // NODE_H
