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
	p2.areacode = 212;
	p2.exchange = 767;
	p2.number = 8900;

	cout << "Your number is (" << p1.areacode << ") " << p1.exchange << " - " << p1.number << endl;
	cout << "My number is (" << p2.areacode << ") " << p2.exchange << " - " << p2.number << endl;

}