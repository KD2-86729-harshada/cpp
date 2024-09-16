#include <iostream>
using namespace std;

class Time
{
    int h;
    int m;
    int s;

public:
    Time()
    {
        int h = 0;
        int m = 0;
        int s = 0;
    }
    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    void acceptTime()
    {
        cout << "Enter Hr: ";
        cin >> h;
        cout << "Enter min : ";
        cin >> m;
        cout << "Enter sec : ";
        cin >> s;
        cout<<"---------------------------"<<endl;
    }

    void setHours()
    {
        this->h;
    }
    void setMinute()
    {
        this->m;
    }
    void setSeconds()
    {
        this->h;
    }

    int getHour()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSeconds()
    {
        return h;
    }

    void printTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main()
{
    Time *times = new Time[5];

    for (int i = 0; i < 5; i++)
    {
        int h, m, s;
        times[i].acceptTime();
        // cout<<" Time : "<<times[i].getHour()<<":"<<times[i].getMinute()<< ":"<<times[i].getSeconds()<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Time is : ";
        times[i].printTime();
    }
}