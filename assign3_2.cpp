#include <iostream>
using namespace std;
class tollbooth
{
    unsigned int cars;
    double amt;
    unsigned int pcar;
    unsigned int npcar;

public:
    tollbooth()
    {
        cars = 0;
        amt = 0;
        pcar = 0;
        npcar = 0;
    }

    void payingCar()
    {
        cars = cars + 1;
        amt = amt + 0.50;
        pcar = pcar + 1;
    }

    void nopayCar()
    {
        cars = cars + 1;
        npcar = npcar + 1;
    }

    void printOnConsole()
    {
        cout << "total numbers of cars " << cars << endl;
        cout << "total amout of payingcar " << amt << endl;
        cout << "total numbers of payingcar " << pcar << endl;
        cout << "total numbers of non-payingcar " << npcar << endl;
        cout<<"-------------------------"<<endl;

    }
};
int menu()
{
    int choice;
    cout << "0.exit"<<endl;
    cout << "1.paying cars"<<endl;
    cout << "2.nopaying cars"<<endl;
    cout<<"enter your choice "<<endl;

    cin>>choice;
    return choice;
}
int main()
{
    int choice;
    tollbooth t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.payingCar();
            t1.printOnConsole();
            break;
        case 2:
            t1.nopayCar();
            t1.printOnConsole();
            break;
        default:
            cout << "invalid choice..." << endl;
            break;
        }
        
    }
        
}
