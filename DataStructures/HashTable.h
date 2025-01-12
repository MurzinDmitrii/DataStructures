#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <list>
#include <vector>
#include <string>

class HashTable {
private:
    std::vector<std::list<std::pair<int, std::string>>> table;
    int size;

    int hashFunction(int key);

public:
    HashTable(int s);
    void insertItem(int key, std::string value);
    void removeItem(int key);
    std::string searchItem(int key);
    void displayTable();
};

#endif // HASHTABLE_H
