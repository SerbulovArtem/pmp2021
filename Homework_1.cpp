// new solution
#include <iostream>

using namespace std;

int main() 
{
	short a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << endl;
	if (a >= b && a >= c) 
	{
		if (b <= c) 
		{
			cout << b << ' ' << c << ' ' << a << endl;
		}
		else if (b >= c) 
		{
			cout << c << ' ' << b << ' ' << a << endl;
		}
	}
	else if (a <= b && a <= c)
	{
		if (b <= c) 
		{
			cout << a << ' ' << b << ' ' << c << endl;
		}
		else if(b >= c)
		{
			cout << a << ' ' << c << ' ' << b << endl;
		}
	}
	else if (a > b && a < c)
	{
		cout << b << ' ' << a << ' ' << c << endl;
	}
	else if (a < b && a > c)
	{
		cout << c << ' ' << a << ' ' << b << endl;
	}
	else if (a == b == c)
	{
		cout << a << ' ' << b << ' ' << c << endl;
	}
	return 0;
}