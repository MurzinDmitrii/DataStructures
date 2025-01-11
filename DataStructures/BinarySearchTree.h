#pragma once
#include "BinarySearchTreeItem.h"
class BinarySearchTree
{
	BinarySearchTreeItem* root;

public:
	BinarySearchTree();
	void addItem(int _value);
	BinarySearchTreeItem* findItem(int _value);
	bool isEmpty();
};

