#include <iostream>

using namespace std;

int main()
{
    enum Day
    {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    Day payDay;
    payDay = Thursday;
    cout << payDay << endl;
}