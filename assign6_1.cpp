#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    int dob;

public:
    Date()
    {
        day;
        month;
        year;
        dob;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
};

class Employee
{
    int id;
    double sal;
    string dep;

public:
    Employee()
    {
        id = 0;
        sal = 0;
        dep = " ";
    }
    Employee(int id, double sal, string dept)
    {
        this->id = id;
        this->sal = sal;
        this->dep = dep;
    }
    void display()
    {
        cout << "Enter the details : " << endl;
        cout << " : " << endl;
    }
};

int main()
{
    Employee e1;
    e1.display();
}