#include<iostream>
using namespace std;
void add(int x, int y)
{
	cout << x + y << endl;
}
double add(double x, double y)
{
	return  x + y;
}
int main()
{
	double a, b;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	double z = add(a, b);
	cout << z;
}