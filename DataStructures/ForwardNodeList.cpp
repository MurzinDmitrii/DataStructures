#include "ForwardNodeList.h"
#include <iostream>

using namespace std;

ForwardNodeList::ForwardNodeList() : first(nullptr), last(nullptr) {}

bool ForwardNodeList::isEmpty() {
    return first == nullptr;
}

void ForwardNodeList::push_back(int val) {
    ForwardNode* node = new ForwardNode(val);
    if (isEmpty()) {
        first = node;
        last = node;
        return;
    }
    last->next = node;
    last = node;
}

void ForwardNodeList::print() {
    if (isEmpty()) {
        return;
    }
    ForwardNode* node = first;
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

ForwardNode* ForwardNodeList::find(int _val) {
    ForwardNode* node = first;
    while (node && node->val != _val) {
        node = node->next;
    }
    return (node && node->val == _val) ? node : nullptr;
}

void ForwardNodeList::removeFirst() {
    if (isEmpty()) {
        return;
    }
    ForwardNode* node = first;
    first = node->next;
    delete node;
}

void ForwardNodeList::removeLast() {
    if (isEmpty()) {
        return;
    }
    if (first == last) {
        removeFirst();
        return;
    }
    ForwardNode* node = first;
    while (node->next != last) {
        node = node->next;
    }
    node->next = nullptr;
    delete last;
    last = node;
}

void ForwardNodeList::removeByIndex(int index) {
    if (isEmpty()) return;
    if (first->val == index) {
        removeFirst();
        return;
    }
    else if (last->val == index) {
        removeLast();
        return;
    }
    ForwardNode* slow = first;
    ForwardNode* fast = first->next;
    while (fast && fast->val != index) {
        fast = fast->next;
        slow = slow->next;
    }
    if (!fast) {
        cout << "This element does not exist" << endl;
        return;
    }
    slow->next = fast->next;
    delete fast;
}

ForwardNode* ForwardNodeList::findByIndex(int index) {
    if (isEmpty()) {
        return nullptr;
    }
    ForwardNode* node = first;
    for (int i = 0; i < index; i++) {
        node = node->next;
        if (!node) {
            return nullptr;
        }
    }
    return node;
}