#include <iostream>
using namespace std;
class date
{
public:
    int day, month, year;

public:
    void initDate()
    {
        day = 1;
        month = 1;
        year = 1900;
    }
    void printDateOnConsole()
    {
        cout << "day -" << day << "- " << month << "- " << year << endl;
    }
    void accepDateFromConsole()
    {
        cout << ("enter date : ");
        cin >> day >> month >> year;
    }
    bool isLeapYear()
    {
        if (year%4==0)
        {
            return true;
        }
        else
            return false;
        
    }
};

int menu()
{
    int choice;
    cout << "0.exit" << endl;
    cout << "1.printdate" << endl;
    cout << "2.acceptdate" << endl;
    cout << "3.leap year" << endl;
    cout << "enter the choice: ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    date d1;
    d1.initDate();
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
         case 1:
            d1.accepDateFromConsole();
            break;

        case 2:
            d1.printDateOnConsole();
            break;

        case 3:
            
        if(d1.isLeapYear())
        {
            cout<<"is Leap year"<<endl;
        }
        else
        {
            cout<<"Not Leap year"<<endl;
        }
            break;
       
        default:
            cout << "Invalid choice!!!" << endl;
            break;
        }
    }

    return 0;
}
