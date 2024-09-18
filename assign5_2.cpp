#include <iostream>
using namespace std;
class student
{
public:
    const int rollNumber;
    string name;
    string gender;
    static int genrollno;
    int marks[3];
    double obtainedMarks;
    double percentage;

public:
    student() : rollNumber(++genrollno)
    {
        name = " ";
        gender = " ";
        // rollNumber = 0;
    }
    student(string name, string gender, int rollNumber, int marks[3]) : rollNumber(++genrollno)
    {
        this->name = name;
        this->gender = gender;
        this->marks[3] = marks[3];
    }

    void acceptStudent()
    {
        cout << "roll number = " << rollNumber << endl;
        cout << "name = ";
        cin >> name;
        cout << "gender = ";
        cin >> gender;

        for (int i = 0; i < 3; i++)
        {
            cout << "subject:" << i + 1 << ":";
            cin >> marks[i];
        }
    }

    void calculatePercentage()
    {
        for (int i = 0; i < 3; i++)
        {
            this->obtainedMarks += this->marks[i];
        }
        cout << "**" << obtainedMarks << endl;
        this->percentage = (this->obtainedMarks / 300) * 100;
    }

    void printStudent()
    {
        cout << "rollNumber = " << rollNumber << endl;
        cout << "name = " << name << endl;
        cout << "gender = " << gender << endl;
        cout << "obtainedMarks = " << obtainedMarks << endl;
        cout << "percentage : " << percentage << endl;
        cout << "-------------------------------------" << endl;
    }
};

int student ::genrollno = 100;

int menu()
{
    int choice;
    cout << "0.exit" << endl;
    cout << "1.accept" << endl;
    cout << "2.print" << endl;
    cout << "3.search" << endl;
}
int main()
{
    student *arr[5];
    arr[0] = new student();
    arr[1] = new student();
    arr[2] = new student();
    arr[3] = new student();
    arr[4] = new student();

    int choice;
    while ((menu()) != 0)
    {
    case1:
        cout << "Thank you...." << endl;
        break;

    case2:
        for (int i = 0; i < 3; i++)
        {
            arr[i]->acceptStudent();
        }

        for (int i = 0; i < 3; i++)
        {
            arr[i]->calculatePercentage();
        }
        cout << "********************************************************" << endl;
        break;

    case3:
        for (int i = 0; i < 5; i++)
        {
            cout << "Here are the Students details: " << endl;

            arr[i]->printStudent();
        }
        break;
    }

}