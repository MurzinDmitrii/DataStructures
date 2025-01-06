#include <iostream>
#include "ForwardNodeList.h"
#include "Stack.h"

using namespace std;

void usingForwardList() 
{
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

int main()
{
    usingForwardList();
    usingStack();
}