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
        this->day=0;
        this->month=0;
        this->year=0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        //cout << "Enter the day, month, year " << endl;
        cin >> day >> month >> year;
    }
    void displayDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Employee
{
    int id;
    double sal;
    string dep;
    Date *DOB;
    Date DOJ;

public:
    Employee()
    {
        id = 0;
        sal = 0;
        dep = " ";
        DOB = NULL;
    }
    Employee(int id, double sal, string dept, int day, int month, int year):DOJ(day,month,year)
    {
        this->id = id;
        this->sal = sal;
        this->dep = dep;
        DOB=NULL;
    }
    void acceptEmp()
    {
        cout << "Enter the details : " << endl;
        cout << " id : ";
        cin>>id;
        cout << " sal : ";
        cin>>sal;
        cout << " dept : ";
        cin>>dep;
        cout<<" date of joining : ";
        DOJ.acceptDate();
    }
    void displayEmp()
    {
        cout << "---------------Emp details----------------" << endl;
        cout << "emp id =  "<<id <<endl <<"Sal = "<<sal <<endl << "department = " <<dep <<endl << "date of joining : ";
        DOJ.displayDate();
        if(DOB != NULL)
        {
            cout<<"Date of Birth = ";
            DOB->displayDate();
        }
    }

    void acceptDOB()
    {
        DOB = new Date();
        cout<<"Enter the Date of Birth : ";
        DOB->acceptDate();
    }

    ~Employee()
    {
        if(DOB != NULL)
        {
            delete DOB;
            DOB = NULL;
        }
    }
};

int main()
{
    Employee e1;
    e1.acceptEmp();
    e1.acceptDOB();
    cout<<"**********************************************************"<<endl;

    Employee e2;
    e2.acceptEmp();
    e2.acceptDOB();

    e1.displayEmp();
    
    e2.displayEmp();
}