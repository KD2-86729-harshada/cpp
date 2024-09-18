#include<iostream>
using namespace std;

class employee
{
    int id;
    double salary;
public:
    employee()
    {
       
    }
    employee(int id, double salaray)
    {
        this->id=id;
        this->salary= salaray;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }

    void setSalaray(double salary)
    {
        this->salary=salary;
    }
    double getSalary()
    {
        return salary;
    }
    virtual void accept()
    {
        cout<<"enter empid = ";
        cin>>id;
        cout<<"enter salary = ";
        cin>>salary;
    }
    virtual void display()
    {
        cout<<"empid : "<<id<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};

class manger: virtual public employee
{
    double bonus;

protected:
    void acceptManger()
    {
        cout<<"Enter the bonus : ";
        cin>>bonus;
    }

    void displayManger()
    {
        cout<<"Bonus : "<<bonus<<endl;
    }

public: 
    manger()
    {
        
    }
    manger(double bonus, int id, double salary)
    {
        this->bonus=bonus;

    }
    void setBonus(int bonus)
    {
        this->bonus=bonus;
    }
    double getBonus()
    {
        return bonus;
    }
    void accept()
    {
        employee::accept();
        acceptManger();
    }
    void display()
    {
        employee::display();
        display();
    }
 
};
class salesman : virtual public employee
{
    double commission;

protected:
    void acceptSaleman()
    {
        cout<<"Enter the commission : ";
        cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"commision : "<<commission<<endl;
    }
public:
    salesman()
    {
       
    }
    salesman(double commision, int id, double salary)
    {
        this->commission = commision;
    }
    void setCommision(double commision)
    {
        this->commission=commision;
    }
    double getCommision()
    {
        return commission;
    }
    void accept()
    {
        employee::accept();
        acceptSaleman();
    }
    void display()
    {
        employee::display();
        displaySalesman();
    }
   
};

class salesmanger : public manger, public salesman
{
    
public:
    salesmanger()
    {
        
    }
    salesmanger(int id , double salary, double bonus, double commision): employee(id, salary)
    {

    }
    void accept()
    {
        employee::accept();
        this->acceptManger();
        this->acceptSaleman();
    }
    void display()
    {   
        employee::display();
        this->displayManger();
        this->displaySalesman();
    }
};

int main()
{
    employee *e= new salesmanger;
    e->accept();

    cout<<"***********************here are the employee details***********************"<<endl;
    e->display();

    salesman s;

    return 0;
}

