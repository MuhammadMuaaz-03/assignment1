#include <iostream>
using namespace std;
struct Time
{
    int hours;
    int minutes;
    int seconds;
    int totalSeconds;
};
int main()
{

    Time t1;
    cout << "Enter hours, minutes and seconds: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    cout << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;

    t1.totalSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;/*finding seconds*/

    cout << "Total seconds: " << t1.totalSeconds << endl;
    return 0;
}