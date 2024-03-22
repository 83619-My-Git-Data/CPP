// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// Allocate the memory for the the object dynamically and test the functunalities using time ptr@
#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 2;
        minutes = 30;
        seconds = 20;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    int getHour()
    {
        return hours;
    }
    int getMin()
    {
        return minutes;
    }
    int getScon()
    {
        return seconds;
    }
    void setHour(int H)
    {
        hours = H;
    }
    void setMin(int M)
    {
        minutes = M;
    }
    void setScon(int S)
    {
        seconds = S;
    }
    void display()
    {
        cout<<"hours = "<<hours<<endl;
        cout<<"minutes = "<<minutes<<endl;
        cout<<"seconds = "<<seconds<<endl;
    }
};

int main()
{
    Time *ptr;
    ptr = new Time;
    Time *ptr2 = new Time(10, 20, 30);
    ptr -> display();
    ptr -> display();
    delete ptr;
    delete ptr2;
    ptr = NULL;
    ptr2 = NULL;
    return 0;
}