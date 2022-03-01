#pragma once
#include "List.h"

template<typename T>
class Stack
{
private:
	List<T> stack_;
	int size_;
public:
	Stack() : stack_(), size_(0) {};
	inline void push(T data);
	inline T top();
	inline void pop();
	inline void print();
	inline bool isEmpty();
};

template<typename T>
inline void Stack<T>::push(T data)
{
	stack_.push(data);
	++size_;
}

template<typename T>
inline T Stack<T>::top()
{
	--size_;
	return stack_.front();
}

template<typename T>
inline void Stack<T>::pop()
{
	stack_.front();
	--size_;
}

template<typename T>
inline void Stack<T>::print()
{
	int size = size_;
	for (int i = 0; i < size; i++)
	{
		std::cout << this->top() << "\n";
	}
}

template<typename T>
inline bool Stack<T>::isEmpty()
{
	return !size_;
}
