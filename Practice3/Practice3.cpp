#include "Stack.h"
#include "SortedList.h"
int main()
{
	List<int>list;
	list.push(1);
	list.push(2);
	list.push(3);
	list.push(4);
	list.push(5);
	list.print();
	Stack<int> stack;
	stack.push(10);
	stack.push(9);
	stack.push(8);
	stack.push(7);
	stack.push(6);
	stack.print();
}