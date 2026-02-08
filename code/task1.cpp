#include<iostream>
#include<cmath>
using namespace std;
void root(int a)
{
	cout << cbrt(a) << endl;
}
void double_root(double a)
{
	cout << cbrt(a);
}
int main()
{
	double x;
	cout << "Enter  number: ";
	cin >> x;
	root(x);
	double_root(x);
}