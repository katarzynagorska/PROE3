#include <iostream>
#include <qDebug>
template <typename T> class myList;



//Wêze³ listy
template <typename T> class myNode{

	friend class myList<T>;

public:
	myNode(T);
	myNode();
	T getData(){ return data; }

private:
	T data;
	myNode* next;

};

template <typename T>
myNode<T>::myNode(T _data)
{
	data = _data;
	next = NULL;
}

template <typename T>
myNode<T>::myNode(){
	next = NULL
}

//****************************************************************************************************************************************
//*
//****************************************************************************************************************************************

//Lista
template <typename T> class myList{
public:
	myList();
	~myList();

	void push_back(T data);

	void pop_back();
	bool empty();
	int size(){ return _size; };

	T& operator[](int idx);

private:
	myNode<T> *last, *first;
	int _size;
};

template <typename T> 
myList<T>::myList()
{
	last = NULL;
	first = NULL;
	_size = 0;
}

template<typename T>
myList<T>::~myList()
{
	if (!empty()) // List is not empty
	{
		myNode<T> *currentPtr = first;
		myNode<T> *tempPtr;

		while (currentPtr != 0) // delete remaining nodes
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->next;
			delete tempPtr;
		}
	}
}

template <typename T>
bool myList<T>::empty()
{
	return ((last == NULL)&&(first == NULL));
}

template <typename T>
void myList<T>::push_back(T data)
{
	myNode<T> *newPtr = new myNode<T>(data);
	if(empty())	//Jeœli pusta to ostatni element 
	{	
		last = newPtr;
		first = newPtr;
	}
	else //Jeœli istnieje wstawiamy za ostatnim
	{
		last->next = newPtr;
		last = newPtr;
	}
	_size++;
}
//TODO
template <typename T>
void myList<T>::pop_back()
{
	if (!empty()) // List is not empty
	{
		myNode<T> *currentPtr = first;
		myNode<T> *tempPtr;

		while (currentPtr != 0) // delete remaining nodes
		{
			if (currentPtr->next == NULL)
			{

			}
			tempPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
}

template <typename T>
T& myList<T>::operator[](int idx){
	if ((idx > size()-1) || (idx < 0))
	{
		throw out_of_range("index out of range");
		return last->next->data;
	}
	else
	{

		myNode<T> *currentPtr = first;
		for (int i = 0; i < idx+1; i++)
		{
			currentPtr = currentPtr->next;
		}
		return currentPtr->data;
	}
}