#include <iostream>
#include<stack>

using namespace std;

bool polindrome(string);

int main()
{
	
	
	string a;
	cout << "Enter a word:";
	cin >> a;

	if (polindrome(a))
	{
		cout << "Yes";
	}
	else
	{
		cout << "no";
	}
}
bool polindrome(string s) 
{
	int size,mid,i;
	//char e;
	stack<char> a,ab;
	size = (int)s.size();
	/*mid = size / 2;
	
	for ( i = 0; i < mid; i++)
	{
		a.push(s[i]);
	}
	if (size%2!=0)
	{
		i++;
	}	
	while (s[i]!='\0')
	{
		e = a.top();
		a.pop();
		if (e!=s[i])
		{
			return false;
		}
	}*/

	for ( i = 0; i < size; i++)
	{
		a.push(s[i]);
	}
	for ( i = size; i > 0; i--)
	{
		ab.push(s[i]);
	}
	while (!a.empty())
	{
		if (a.top()!=ab.top())
		{
			return false;
		}
		a.pop();
		ab.pop();
	}
	return true;
}
