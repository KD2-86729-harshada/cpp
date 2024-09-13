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
        building = " ";
        street = " ";
        city = " ";
        pin = 0;
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
        this->street = street;
    }
    string getStreet()
    {
        return street;
    }

    void setCity(string city)
    {
        this->city = city;
    }
    string getCity()
    {
        return city;
    }

    void setPin(int pin)
    {
        this->pin = pin;
    }

    int getPin()
    {
        return pin;
    }
    void acceptAddress()
    {
        cout << "Enter your Address" << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter the building :";
        cin >> building;
        cout << "enter the street :";
        cin >> street;
        cout << "enter the city :";
        cin >> city;
        cout << "enter the pin :";
        cin >> pin;
        // getline(cin,building);
    }
    void displayAddress()
    {
        cout << "buildings : " << getBuilding() << endl;
        cout << "Street : " << getStreet() << endl;
        cout << "City : " << getCity() << endl;
        cout << "Pin : " << getPin() << endl;
    }
};
int main()
{
    Address a1;

    a1.setBuilding("ShriNivas");
    a1.setStreet("rankala");
    a1.setCity("Kolhapur");
    a1.setPin(416205);

    a1.displayAddress();
    a1.acceptAddress();

    return 0;
}