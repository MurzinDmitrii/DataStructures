#pragma once
class BinaryHeap
{
public:
	BinaryHeap();
	int* heap;
	void shiftUp(int item);
	void shiftDown(int item);
	void build();
};

