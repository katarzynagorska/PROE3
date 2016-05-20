template <typename T> class myList;


//Wêze³ listy
template <typename T> class myNode{

	friend class myList<T>;

public:
	myNode(T);
	T getData(){ return data; }

private:
	T data;
	myNode* next;

};

template <typename T>
myNode<T>::myNode(T data)
{
	this.data = data;
	next = NULL;
}


//Lista
template <typename T> class myList{
public:
	myList();
	~myList();

	void push_back(T &data);
	///Method returning element at idx index
//	T at(int idx);			
	void pop_back();
	bool empty();
	int size(){ return _size; }

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

template <typename T>
bool myList<T>::empty()
{
	return ((last == NULL)&&(first == NULL));
}

template <typename T>
void myList<T>::push_back(T data)
{
	myNode<T> *newPtr = new myNode(data);
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

template <typename T>
void myList<T>::pop_back()
{
	
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
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
}