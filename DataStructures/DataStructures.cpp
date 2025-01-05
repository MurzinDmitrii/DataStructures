#include <iostream>
#include "ForwardNodeList.h"

using namespace std;

int main()
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