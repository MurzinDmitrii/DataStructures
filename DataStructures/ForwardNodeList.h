#ifndef FORWARDNODELIST_H
#define FORWARDNODELIST_H

#include "ForwardNode.h"

struct ForwardNodeList //в целом двухсвязный +- то же, реализация тривиальна
{
    ForwardNode* first;
    ForwardNode* last;

    ForwardNodeList();
    bool isEmpty();
    void push_back(int val);
    void print();
    ForwardNode* find(int _val);
    void removeFirst();
    void removeLast();
    void removeByIndex(int index);
    ForwardNode* findByIndex(int index);
};

#endif
