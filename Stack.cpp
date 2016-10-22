#include "Card.h"
#include "Stack.h"

# include<iostream>
# include<string>
#include<cstdlib>
using namespace std;

Stack::Stack()
{
	capacity = 52;
	size = 0;
	stack = new Card[capacity];
}

Stack::Stack(int c)
{
	capacity = c;
	size = 0;
	stack = new Card[capacity];
}

bool Stack::push(Card* otherCard)
{
	if (!isFull())
	{
		stack[size] = *otherCard;
		size++;
		return true;
	}
	
	//return(isFull());
	return false;
}

Card* Stack::pop()
{
	if (!isEmpty())
	{
		size--;
		return new Card(stack[size - 1]);
	}
	else
		return NULL;
}

Card* Stack::peek()
{
	if (!isEmpty())
	{
		return new Card(stack[size]);
	}
	else
		return NULL;
}

bool Stack::isEmpty()
{
	return size == 0;
}

bool Stack::isFull()
{
	return size == capacity;
}