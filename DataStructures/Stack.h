#pragma once
#include <climits>

class Stack
{
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size);
    ~Stack();

    void push(int item);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};