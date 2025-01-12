#include "HashTable.h"
#include <iostream>

HashTable::HashTable(int s) : size(s) {
    table.resize(size);
}

int HashTable::hashFunction(int key) {
    return key % size;
}

void HashTable::insertItem(int key, std::string value) {
    int index = hashFunction(key);
    table[index].emplace_back(key, value);
}

void HashTable::removeItem(int key) {
    int index = hashFunction(key);
    for (auto it = table[index].begin(); it != table[index].end(); ++it) {
        if (it->first == key) {
            table[index].erase(it);
            return;
        }
    }
}

std::string HashTable::searchItem(int key) {
    int index = hashFunction(key);
    for (const auto& pair : table[index]) {
        if (pair.first == key) {
            return pair.second;
        }
    }
    return "Item not found";
}

void HashTable::displayTable() {
    for (int i = 0; i < size; ++i) {
        std::cout << "Index " << i << ": ";
        for (const auto& pair : table[i]) {
            std::cout << "(" << pair.first << ", " << pair.second << ") ";
        }
        std::cout << std::endl;
    }
}
