#ifndef FORWARDNODE_H
#define FORWARDNODE_H

struct ForwardNode
{
    int val;
    ForwardNode* next;
    ForwardNode(int _val);
};

#endif