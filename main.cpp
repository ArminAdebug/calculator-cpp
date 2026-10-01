#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	string c = "";

	cout << "enter math:";

	cin >> a >> c >> b;

	if (c == "+")
	{
		cout << a + b;
	}
	else if (c == "-")
	{
		cout << a - b;
	}
	else if (c == "*")
	{
		cout << a * b;
	}
	else if (c == "/")
	{
		if (b == 0)
		{
			cout << "cannot divide by zero";
		}
		else
		{
			cout << a / b;
		}
	}

	return 0;
}
