#include "BinaryHeap.h"
#include <iostream>
#include <ctime>
using namespace std;

BinaryHeap::BinaryHeap()
{
    heap = new int[16] {5, 1, 6, 3, 9, 2, 23, 54, 54, 2, 87, 34, 72, 29, 1, 5};
    build();
}

void BinaryHeap::shiftUp(int item)
{
    while (item > 0 && heap[item] < heap[(item - 1) / 2])
    {
        swap(heap[item], heap[(item - 1) / 2]);
        item = (item - 1) / 2;
    }
}

void BinaryHeap::shiftDown(int item)
{
    int heapSize = 16;
    while (2 * item + 1 < heapSize)
    {
        int leftChild = 2 * item + 1;
        int rightChild = 2 * item + 2;
        int minChild = leftChild;
        if (rightChild < heapSize && heap[rightChild] < heap[leftChild])
        {
            minChild = rightChild;
        }
        if (heap[item] <= heap[minChild])
        {
            break;
        }
        swap(heap[item], heap[minChild]);
        item = minChild;
    }
}

void BinaryHeap::build()
{
    for (int i = (16 - 1) / 2; i >= 0; --i)
    {
        shiftDown(i);
    }
}
