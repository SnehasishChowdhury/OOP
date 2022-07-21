#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    
    Time()
    {
        hours=minutes=seconds=0;
    }
    
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s; 
    }

    void display() const
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }

    Time add(Time A, Time B)
    {
        Time tmp;
        tmp.hours = A.hours + B.hours;
        if (tmp.hours > 23)
        {
            tmp.hours = tmp.hours - 24;
        }

        tmp.minutes = A.minutes + B.minutes;
        if (tmp.minutes > 59)
        {
            tmp.minutes = tmp.minutes - 60;
            tmp.hours++;
        }

        tmp.seconds = A.seconds + B.seconds;
        if (tmp.seconds > 59)
        {
            tmp.seconds = tmp.seconds - 60;
            tmp.minutes++;
        }

        return (tmp);
    }
};

int main()
{
    Time time1(10, 20, 30);
    Time time2(20, 40, 50);
    Time time3;
    time3 = time3.add(time1, time2);
    time3.display();
    return 0;
}
