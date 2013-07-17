#include<iostream>
using namespace std;
template <class T, int MAX>
class Stack
{
public :
	Stack();
	void push(T value);
	T pop();
	void printStack();
	int size();
	T peek();
	bool isEmpty();
private:
	T data[MAX];
	int top;
};

template <class T, int MAX>
Stack<T,MAX> :: Stack()
{
	top = -1; 
}

template <class T, int MAX>
void Stack<T, MAX> :: push(T value) 
{
	data[++top] = value;
}

template <class T, int MAX>
T Stack<T, MAX> :: pop()
{
	if (top > -1)
	{
		return data[top--];
	}
	else
	{
		cerr << "No data in Stack." << endl;
	}
}

template <class T, int MAX>
void Stack<T, MAX> :: printStack()
{
	int cursor = 0;
	cout << "Data in stack => ";
	while(cursor <= top)
	{
		cout << data[cursor++] << " ";
	}
	cout << endl;
}

template <class T, int MAX>
int Stack<T, MAX> :: size()
{
	return ++top;
}

template <class T, int MAX>
T Stack<T, MAX> :: peek()
{
	return data[--top];
}

template <class T, int MAX>
bool Stack<T, MAX> :: isEmpty()
{
	return top == -1;
}

int main()
{
	int const size = 20;
	Stack<int, 20> list;
	list.push(1);
	list.push(2);
	list.push(3);
	list.printStack();
	cout << "Size : " << list.size() << endl;
	cout << "Peek = " << list.peek() << endl;
	cout << "pop list => " << list.pop() << endl;
	return 0;
}