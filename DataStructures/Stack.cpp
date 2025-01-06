#include "Stack.h"
#include <climits>

Stack::Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int item) {
    if (isFull()) {
        return;
    }
    arr[++top] = item;
}

int Stack::pop() {
    if (isEmpty()) {
        return INT_MIN;
    }
    return arr[top--];
}

int Stack::peek() {
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        return INT_MIN;
    }
}

int Stack::size() {
    return top + 1;
}

bool Stack::isEmpty() {
    return size() == 0;
}

bool Stack::isFull() {
    return size() == capacity;
}
