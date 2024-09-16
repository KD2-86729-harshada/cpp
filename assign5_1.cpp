#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }

    int getday()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }

    void acceptDate()
    {
        cin>>day>>month>>year;
    }
    void printDate()
    {
        cout<<"DOB : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class person
{
    string name;
    string address;
    Date dob;

public:
    person()
    {
        name = " ";
        address = " ";
    }
    person(string name, string address, int day,int month,int year)
    {
        this->name=name;
        this->address=address;
        this->dob.setDay(day);
        this->dob.setMonth(month);
        this->dob.setYear(year);
    }
    void acceptPerson()
    {
        cout<<"enter the name : "<<endl;
        cin>>name;
        cout<<"enter the address : "<<endl;
        cin>>address;
        cout<<"enter the Date of birth : "<<endl;
        dob.acceptDate();
    }
    void printPerson()
    {
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;
        dob.printDate();
    }

};

int main()
{
    person p1;
    p1.acceptPerson();

    person p2("Harshada","Kolhapur",29,10,2002);
    cout<<"*******************************************"<<endl;

    p1.printPerson();
    cout<<"*******************************************"<<endl;
    p2.printPerson();
}