#include <iostream>
#include <stdio.h>

using namespace std;

int test()
{
	int a;
	int b;
	int c;
	int d;

	a = sizeof(short int);
	b = sizeof(long int);
	c = sizeof(long long int);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("PAUSE");
	return 0;
}
	