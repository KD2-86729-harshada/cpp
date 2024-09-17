#include<iostream>
using namespace std;
class student
{
    const int rollNumber;
    string name;
    string gender;
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

    void acceptStudent()
    {
        cout<<"roll number = "<<rollNumber<<endl;
        cout<<"name = ";
        cin>>name;
        cout<<"gender = ";
        cin>>gender;
    }
    void printStudent()
    {
        cout<<"rollNumber = "<<rollNumber<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"gender = "<<gender<<endl<<endl;
    }
};

int student :: genrollno = 101;
int main()
{
    // student s1;
    // s1.printStudent();
    student*arr[5];
    arr[0]=new student();
    arr[1]=new student();
    arr[2]=new student();
    arr[3]=new student();
    arr[4]=new student();

    for(int i = 0; i<5; i++)
    {
        arr[i]->acceptStudent();
    }
    cout<<"********************************************************"<<endl;
    cout<<"Here are the Students details: "<<endl<<endl;
    for(int i = 0; i<5; i++)
    {
        arr[i]->printStudent();
    }

}