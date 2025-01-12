#include <iostream>
#include "ForwardNodeList.h"
#include "Stack.h"
#include "Queue.h"
#include "BinarySearchTree.h"
#include "BinaryHeap.h"

using namespace std;

void usingForwardList() 
{
    cout << endl << "ForwardList:";
    ForwardNodeList list;
    for (int i = 0; i < 5; i++) {
        list.push_back(i);
    }
    cout << list.find(2)->val << endl;
    cout << list.findByIndex(2)->val << endl;
    list.print();
    list.removeFirst();
    list.removeLast();
    list.removeByIndex(2);
    list.removeByIndex(4);
    list.print();
}

void usingStack()
{
    cout << endl << "Stack:";
    Stack pt(3);
    pt.push(1);
    pt.push(2);
    pt.pop();
    pt.pop();
    pt.push(3);
    cout << "The top element is " << pt.peek() << endl;
    cout << "The stack size is " << pt.size() << endl;
    pt.pop();
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
}

void usingQueue()
{
    cout << endl << "Queue:";
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "The front element is " << q.peek() << endl;
    q.dequeue();

    q.enqueue(4);

    cout << "The queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
}

void usingBinarySearchTree()
{
    BinarySearchTree* tree = new BinarySearchTree();
    tree->addItem(5);
    tree->addItem(3);
    tree->addItem(6);
    tree->addItem(10);
    tree->addItem(1);
    BinarySearchTreeItem* findItem = tree->findItem(3);
    BinarySearchTreeItem* unfindItem = tree->findItem(2);
}

void usingBinaryHeap()
{
    BinaryHeap* heap = new BinaryHeap();
    cout << endl << "Binary heap:";
    for (int i = 0; i < 16; i++)
    {
        cout << heap->heap[i] << " ";
    }
}

int main()
{
    usingForwardList();
    usingStack();
    usingQueue();
    usingBinarySearchTree();
    usingBinaryHeap();
}