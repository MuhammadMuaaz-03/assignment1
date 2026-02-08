#include<iostream>
using namespace std;
struct phone {
	int areacode;
	int exchange;
	int number;
};
int main()
{
	phone p1;
	p1.areacode;
	p1.exchange;
	p1.number;
	cout << "Enter the area code,exchange and number : ";
	cin >> p1.areacode >> p1.exchange >> p1.number;

	phone p2;
	p1.areacode = 212;
	p1.exchange = 767;
	p1.number = 8900;
	cout << "My number is (" << p1.areacode << ") " << p1.exchange << " - " << p1.number << endl;
}