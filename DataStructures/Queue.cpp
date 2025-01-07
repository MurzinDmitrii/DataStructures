#include "Queue.h"
#include <climits>

Queue::Queue(int size) {
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        return INT_MIN;
    }
    int ret = arr[front];
    front = (front + 1) % capacity;
    count--;
    return ret;
}

int Queue::peek() {
    if (!isEmpty()) {
        return arr[front];
    }
    else {
        return INT_MIN;
    }
}

int Queue::size() {
    return count;
}

bool Queue::isEmpty() {
    return size() == 0;
}

bool Queue::isFull() {
    return size() == capacity;
}