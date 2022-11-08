#include <iostream>
#include<stack>

using namespace std;

bool polindrome(string);

int main()
{
	
	
	string a;
	cout << "Enter a word:";
	cin >> a;
	cout << endl << endl;
	if (polindrome(a))
	{
		cout << a << " is a palindrome";
	}
	else
	{
		cout<<a << " is not a palindrome";
	}
	cout << endl << endl;
}
bool polindrome(string s) 
{
	int size,mid,i;
	char temp1, temp2;
	stack<char> a,ab;
	size = (int)s.size();
	
	for ( i = 0; i < size; i++)
	{
		a.push(s[i]);
	}
	for ( i = size-1; i >= 0; i--)
	{
		ab.push(s[i]);
	}
	while (!a.empty())
	{
		temp1 = a.top();
		temp2 = ab.top();
		if (temp1!=temp2)
		{
			return false;
		}
		a.pop();
		ab.pop();
	}
	return true;
}
