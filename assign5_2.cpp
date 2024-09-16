#include<iostream>
using namespace std;
class student
{
    string name;
    string gender;
    const int rollNumber;
    static int genrollno;


public: 
    student():rollNumber(++genrollno)
    {
        name=" ";
        gender= " ";
        //rollNumber = 0;
    }
    student(string name, string gender, int rollNumber):rollNumber(++genrollno)
    {
        this->name=name;
        this->gender=gender;
    }

    void printStudent()
    {
        cout<<"rollNumber = "<<rollNumber<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"gender = "<<gender<<endl;
    }
};
int main()
{
    student s1;
    s1.printStudent();
    //student*arr[5];
}