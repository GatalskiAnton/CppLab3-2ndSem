#include <iostream>
#pragma once

template<class T>
class Node
{
public:
	Node* next_;
	T data_;
	Node(Node* next, T data) : next_(next), data_(data) {};
};

template<class T>
class List
{
protected:
	int size_;
	Node<T>* head_;
public:
	List() :size_(0), head_(nullptr){};
	inline void push(const T& data);
	inline T front();
	inline void print();
	inline void remove(const T& data);
};

template<class T>
inline void List<T>::push(const T& data)
{
	if (size_ == 0)
	{
		Node<T>* head = new Node<T>(nullptr, data);
		head_ = head;
	}
	else 
	{
		Node<T>* temp = head_;
		for (int i = 0; i < size_ - 1; i++)
		{
			temp = temp->next_;
		}
		Node<T>* newNode = new Node<T>(nullptr, data);
		temp->next_ = newNode;
	}
	++size_;
}

template<class T>
inline T List<T>::front()
{
	Node<T>* temp = head_;
	for (int i = 0; i < size_ - 1; i++)
	{
		temp = temp->next_;
	}
	--size_;
	return temp->data_;
}

template<class T>
inline void List<T>::print()
{
	Node<T>* temp = head_;
	while (temp != nullptr)
	{
		std::cout << temp->data_ << "\n";
		temp = temp->next_;
	}
}

template<class T>
inline void List<T>::remove(const T& data)
{
	Node<T>* temp = head_;
	Node<T>* previous = 0;
	for (int i = 0; i < size_ - 1; i++)
	{
		if (temp->data_ == data)
		{
			previous->next_ = temp->next_;
		}
		previous = temp;
		temp = temp->next_;
	}
	--size_;
}
