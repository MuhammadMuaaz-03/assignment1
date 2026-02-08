#include<iostream>
using namespace std;
struct time {
	int hour;
	int minute;
	int second;
	int totalsecs;
};
int main()
{
	time t1;
	t1.hour;
	t1.minute;
	t1.second;
	cout << "Time : " << t1.hour << ":" << t1.minute << ":" << t1.second << endl;

	t1.totalsecs = t1.hour * 3600 + t1.minute * 60 + t1.second;
	cout << t1.totalsecs;

}