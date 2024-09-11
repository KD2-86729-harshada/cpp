#include <iostream>
using namespace std;

namespace NStudent
{
    class Student
    {
    public:
        int rollno = 1;
        string sname = " ";
        float marks = 89.52;

        void acceptdata(int rollno = 0, string sname =" ", float marks= 0)
        {
            cout << "Enter the details : " << endl;
            cin >> rollno;
            getline(cin, sname) >> sname;
            cin >> marks;
        }

        void displaydata()
        {
            cout << "rollno : " <<rollno<< ". name : "<<sname << ". marks : " <<marks<< endl;
        }
    };
}

int main()
{
    NStudent::Student s1;
    s1.acceptdata();
    s1.displaydata();
    return 0;
}