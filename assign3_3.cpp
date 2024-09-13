#include <iostream>
using namespace std;
class Address
{
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        
    }

    void setBuilding(string building)
    {
        this->building = building;
    }
    string getBuilding()
    {
        return building;
    }

    void setStreet(string street)
    {
        //cout << "street : "<<endl;
        this->street = street;
    }

    string getStreet()
    {
        return street;
    }

    void acceptAddress()
    {
        cout << "Enter your Address" << endl;
        cout<<"--------------------------------"<<endl;
        // getline(cin,building);  
    }
    void displayAddress()
    {
        cout << "Street : " << getStreet()<< endl;
        cout << "buildings : "<< getBuilding()<<endl;
    }
};
int main()
{
    Address a1;
    a1.acceptAddress();

    a1.setBuilding("Anuda");
    a1.setStreet("rankala");

    a1.displayAddress();

    return 0;
}