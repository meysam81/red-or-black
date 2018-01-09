#include "node.h"

node::node(int value) : value(value), color(COLOR::BLACK),
    left(nullptr), right(nullptr), parent(nullptr)
{

}

node::~node()
{
    left = right = parent =  nullptr;
    delete left;
    delete right;
    delete parent;
    delete this;
}
