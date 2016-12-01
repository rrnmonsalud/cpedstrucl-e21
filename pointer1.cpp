#include <iostream>
using namespace std;
int main()
{
	int x, *p1;
	p1=&x;
	cout << "Enter number: ";
	cin >> x;
	cout << p1;
}
