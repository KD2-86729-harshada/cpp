#include<iostream>
using namespace std;

class employee
{
    int id;
    double salary;
public:
    employee()
    {
        cout<<"Employee()";
    }
    employee(int id, double salaray)
    {

    }
    void setId(int id)
    {

    }
    int getId()
    {
        return id;
    }
    double getSalary()
    {
        return salary;
    }
    void accept()
    {

    }
    void display()
    {

    }
};
class manger: public employee
{
    double bonus;
public:
    manger()
    {
        cout<<"manger()";
    }
    manger(double bonus, int id, double salary)
    {

    }
    void setBonus(int bonus)
    {

    }
    double getBonus()
    {
        return bonus;
    }
    void accept()
    {

    }
    void display()
    {

    }

    void acceptManger()
    {
 
    }
    void displayManger()
    {
        
    }
    
};
class salesman : public employee
{
    double commission;
public:
    salesman()
    {
        cout<<"salesman()";
    }
    salesman(double commision, int id, double salary)
    {

    }
    void setCommision(double commision)
    {

    }
    double getCommision()
    {
        return commission;
    }
    void accept()
    {

    }
    void display()
    {

    }

    void acceptSaleman()
    {
 
    }
    void displaySalesman()
    {
        
    }
};
class salesmanger : manger, salesman
{
    
public:
    salesmanger()
    {
        cout<<"salesmanger()";
    }
    salesmanger(int, double, double, double)
    {
        cout<<"salesmanger()";
    }
    void accept()
    {

    }
    void display()
    {

    }
};

int main()
{
    salesmanger s1();
    return 0;
}