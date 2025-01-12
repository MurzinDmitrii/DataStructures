#include "BinaryHeap.h"
#include <xstring>
#include <ctime>
using namespace std;

BinaryHeap::BinaryHeap() 
{
	heap = new int[16] {5, 1, 6, 3, 9, 2, 23, 54, 54, 2, 87, 34, 72, 29, 1, 5};
	build();
}

void BinaryHeap::shiftUp(int item)
{
	while (item > 1 && heap[item] < heap[item / 2])
	{
		swap(heap[item], heap[item / 2]);
		item /= 2;
	}
}

void BinaryHeap::shiftDown(int item)
{
	while (item * 2 <= 16)
	{
		int left = 2 * item;
		int right = 2 * item + 1;
		int child = (right <= 16 && heap[right] < heap[left] ? right : left);
		if (heap[item] <= heap[child])
		{
			break;
		}
		swap(heap[item], heap[child]);
		item = child;
	}
}

void BinaryHeap::build()
{
	for (int i = 16; i > 0; --i)
	{
		shiftDown(i);
	}
}