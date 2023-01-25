
template<typename T>
class List 
{
public:
	List();
	~List();

	void clear();			//clear the linked list
	void pop_front();			// delete the first linked list element
	void push_back(T data);			// add element to linked list
	int get_size();			// get size of linked list
	T& operator[](const int index);			// [] operator overloading (to have access to list elements)

	void push_front(T data);
	void pop_back();
	void insert(T value, int index);
	void removeAt(int index);


private:

	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};

	int size;
	Node<T> *first_element;
};


template<typename T>
List<T>::List()
{
	size = 0;
	first_element = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
	std::cout << std::endl << "The list was deleted! Size = " << size << std::endl;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		pop_front();
	}
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *buffer = first_element;
	first_element = first_element->pNext;
	delete buffer;
	size--;
}

template<typename T>
void List<T>::push_back(T data)		
{
	if (first_element == nullptr)
	{
		first_element = new Node<T>(data);
	}
	else 
	{
		Node<T> *current = this->first_element;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}

	size++;
}

template<typename T>
int List<T>::get_size()
{
	return size;
}

template<typename T>
T & List<T>::operator[](const int index)
{
	Node<T> *current = this->first_element;
	int counter = 0;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{

}

template<typename T>
void List<T>::pop_back()
{
}

template<typename T>
void List<T>::insert(T value, int index)
{
}

template<typename T>
void List<T>::removeAt(int index)
{
}
