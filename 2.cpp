#include <iostream>
#include<stack>
#include<time.h>

using namespace std;

void printer(stack<int> );
int main()
{
	srand(time(NULL));
	stack<int> s1, s2,s3;
	int range = 0, temp;

	cout << "Enter the range:";
	cin >> range;

	for (int i = 0; i < range; i++)
	{
		s1.push(rand() % 100 + 1);
	}
	
	cout << endl << "Normal stack:" << endl;
	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s3.push(s1.top());
		s1.pop();
	}
	cout << endl << endl;
	printer(s1);

	while (!s3.empty())
	{
		s1.push(s3.top());
		s3.pop();
	}

	while (!s1.empty())
	{
		temp = s1.top();
		s1.pop();

		while (!s2.empty() &&s2.top()<temp )
		{
			s1.push(s2.top());
			s2.pop();
		}
		s2.push(temp);
	}
	cout << endl << endl;
	cout << "Sorted stack:" << endl;
	while (!s2.empty())
	{
		cout << s2.top() << " ";
		s2.pop();
	}
}
void printer(stack<int> t)
{
	while (!t.empty())
	{
		cout << t.top() << " ";
		t.pop();
	}
}
