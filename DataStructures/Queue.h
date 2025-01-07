#pragma once
class Queue
{
    int* arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue(int size);
    ~Queue();

    void enqueue(int item);
    int dequeue();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};

