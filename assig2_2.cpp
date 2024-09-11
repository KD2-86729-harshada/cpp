#include <iostream>
using namespace std;

class student
{
    int rollno;
    string sname;
    float marks;

public:
    void initStudent()
    {
        int rollno = 0;
        string sname = " ";
        float marks = 0;
    }

    void printStudentOnConsole()
    {
        cout << "roll no :" << rollno << " sname : " << sname << " marks :" << marks<<endl;
    }
    void acceptStudentFromConsole()
    {
        cout<<("Enter details: ")<<endl;
        cin>>rollno;
        getline(cin, sname)>>sname;

        cin>>marks;

    }
};

int main()
{
    student s1;
    
s1.initStudent();
    
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
}
