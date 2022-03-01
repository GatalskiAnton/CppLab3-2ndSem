#include "Stack.h"
#include "SortedList.h"
int main()
{
	SortedList<int>list;
	list.push(1);
	list.push(3);
	list.push(2);
	list.push(5);
	list.push(4);
	list.print();
}