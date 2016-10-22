#include "Card.h"
#include "Stack.h"

#include<iostream>
using namespace std;

int main()
{
	Card c;
	c.display();

	Stack s;

	s.push(new Card(0, 0));

	s.pop()->display();
}