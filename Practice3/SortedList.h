#pragma once
#include "List.h"

template<class T>
class SortedList:public List<T>
{
private:

public:
	void push(const T& data);
};

template<class T>
inline void SortedList<T>::push(const T& data)
{
	if (List<T>::size_ == 0)
	{
		Node<T>* head = new Node<T>(nullptr, data);
		List<T>::head_ = head;
	}
	else if(List<T>::size_ == 1)
	{
		if (List<T>::head_->data_ > data)
		{
			Node<T>* newNode = List<T>::head_;
			Node<T>* head = new Node<T>(nullptr, data);
			List<T>::head_ = head;
			List<T>::head_->next_ = newNode;
		}
		else
		{
			Node<T>* newNode = new Node<T>(nullptr, data);
			List<T>::head_->next_ = newNode;
		}
	}
	else if (List<T>::size_ > 1)
	{
		Node<T>* temp = List<T>::head_;
		Node<T>* previous = List<T>::head_;
		bool isLast = true;
		for (int i = 0; i <= List<T>::size_ - 2; i++)
		{
			previous = temp;
			temp = temp->next_;
			if (data < temp->data_ && data > previous->data_)
			{
				isLast = false;
				break;
			}
		}
		if (isLast)
		{
			Node<T>* newNode = new Node<T>(nullptr, data);
			temp->next_ = newNode;
		}
		else
		{
			Node<T>* newNode = new Node<T>(nullptr, data);
			previous->next_ = newNode;
			newNode->next_ = temp;
		}
	}
	List<T>::size_++;
}
