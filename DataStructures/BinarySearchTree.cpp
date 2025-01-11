#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() 
{
	root = nullptr;
}

void BinarySearchTree::addItem(int _value)
{
    if (isEmpty())
    {
        root = new BinarySearchTreeItem(_value);
        return;
    }

    BinarySearchTreeItem* selectItem = root;
    BinarySearchTreeItem* parent = nullptr;

    while (selectItem != nullptr)
    {
        parent = selectItem;

        if (selectItem->value > _value)
        {
            selectItem = selectItem->left;
        }
        else if (selectItem->value < _value)
        {
            selectItem = selectItem->right;
        }
        else
        {
            break;
        }
    }

    if (selectItem == nullptr)
    {
        if (parent->value > _value)
        {
            parent->left = new BinarySearchTreeItem(_value);
        }
        else
        {
            parent->right = new BinarySearchTreeItem(_value);
        }
    }
}

BinarySearchTreeItem* BinarySearchTree::findItem(int _value)
{
    if (isEmpty())
    {
        return nullptr;
    }

    BinarySearchTreeItem* selectItem = root;

    while (selectItem != nullptr)
    {
        if (selectItem->value > _value)
        {
            selectItem = selectItem->left;
        }
        else if (selectItem->value < _value)
        {
            selectItem = selectItem->right;
        }
        else
        {
            break;
        }
    }
    return selectItem;
}

bool BinarySearchTree::isEmpty()
{
	return root == nullptr;
}
