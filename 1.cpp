#include <iostream>
#include<stack>

using namespace std;



int main()
{
	stack<int> s1,s2;
	int check=1;
	cout << "Check stack initial state:";
	if (s1.empty())
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not Empty" << endl;
	}
	cout << endl << endl;
	cout << "Add elements to stack: 21 - 22 - 24 - 25" << endl << endl;

	s1.push(21);
	s1.push(22);
	s1.push(24);
	s1.push(25);
	
	while (!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}

	cout << "Show stack element (print first in to last in):" << endl;
	while (!s2.empty())
	{
		cout << s2.top() << " ";
		s1.push(s2.top());
		s2.pop();
	}

	cout << endl << endl;

	cout << "Show stack element (print last in to first in):" << endl;
	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s2.push(s1.top());
		s1.pop();
	}
	cout << endl << endl;

	while (!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}

	s1.pop();
	s1.pop();
	cout << "Delete last two elements from stack then show stack elements (print last in to first in):" << endl;
	
	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s1.pop();
	}
	cout << endl << endl;
}
