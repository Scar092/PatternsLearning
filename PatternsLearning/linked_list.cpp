
template<typename T>
class List 
{
public:
	List();
	~List();

	void push_back(T data);			// add element to linked list
	int get_size();			// get size of linked list
	T& operator[](const int index);			// [] operator overloading (to have access to list elements)

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
