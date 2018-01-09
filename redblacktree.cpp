#include "redblacktree.h"

bool RedBlackTree::insert(int x)
{
    node *p = root;
    node *q = new node(x);

    if (p == nullptr)
    {
        p = q;
        p->color = node::BLACK;
        return true;
    }

    while (true)
    {
        if (p->value < x) // one way to access a pointer's member
        {
            if (p->right != nullptr)
                p = p->right;
            else
            {
                p->right = q;
                q->parent = p;
                break;
            }

        }
        else if ((*p).value > x) // another way to access a pointer's member
        {
            if (p->left != nullptr)
                p = p->left;
            else
            {
                p->left = q;
                q->parent = p;
                break;
            }
        }
        else
        {
            // node already exists
            return false;
        }

    }


    // still need some work
    if (q->parent->color != node::BLACK)
    {
        node *uncle;
        if (p->parent->right != p)
            uncle = p->parent->right;
        else
            uncle = p->parent->left;

        if (uncle->color == node::RED)
        {
            p->color = node::BLACK;
            uncle->color = node::BLACK;
            p->parent->color = uncle->parent->color = // it's the same, no difference
                    node::RED;
        }
        else // if (uncle->color == node::BLACK)
        {

        }
    }
}

RedBlackTree::RedBlackTree() : root(nullptr)
{
//     = node::BLACK;
}
