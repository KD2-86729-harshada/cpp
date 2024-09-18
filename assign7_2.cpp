#include <iostream>
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
        this->id = id;
        this->salary = salaray;
    }
    // void setId(int id)
    // {
    //     this->id = id;
    // }
    // int getId()
    // {
    //     return id;
    // }

    // void setSalaray(double salary)
    // {
    //     this->salary = salary;
    // }
    // double getSalary()
    // {
    //     return salary;
    // }
    virtual void accept()
    {
        cout << "enter empid = ";
        cin >> id;
        cout << "enter salary = ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "empid : " << id << endl;
        cout << "salary : " << salary << endl;
    }
};

class manger : virtual public employee
{
    double bonus;

protected:
    void acceptManger()
    {
        cout << "Enter the bonus : ";
        cin >> bonus;
    }

    void displayManger()
    {
        cout << "Bonus : " << bonus << endl;
    }

public:
    manger()
    {
    }
    manger(double bonus, int id, double salary)
    {
        this->bonus = bonus;
    }
    // void setBonus(int bonus)
    // {
    //     this->bonus = bonus;
    // }
    // double getBonus()
    // {
    //     return bonus;
    // }
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
        cout << "Enter the commission : ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "commision : " << commission << endl;
    }

public:
    salesman()
    {
    }
    salesman(double commision, int id, double salary) : employee(id, salary)
    {
        this->commission = commision;
    }
    // void setCommision(double commision)
    // {
    //     this->commission = commision;
    // }
    // double getCommision()
    // {
    //     return commission;
    // }
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
    salesmanger(int id, double salary, double bonus, double commision) : employee(id, salary)
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

int menu()
{
    int choice;
    cout << "0.exit" << endl;
    cout << "1.Accept Employee - " << endl;
    cout << "2.cout of Employee with respect  to designation- " << endl;
    cout << "3.Display Manager - " << endl;
    cout << "4.Display Salesman - " << endl;
    cout << "5.Display SalesManager - " << endl;

    cout << "Enter your choice: " << endl;

    cin >> choice;
    cout << "*******************" << endl;

    return choice;
}

int main()
{
    int choice = 0;
    employee *arr[3];

    int ind = 0;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            arr[ind] = new manger;
            arr[ind]->accept();
            ind++;

            break;

        case 2:

            arr[ind] = new salesman;
            arr[ind]->accept();
            ind++;

            break;

        case 3:
            arr[ind] = new salesmanger;
            arr[ind]->accept();
            break;

        case 4:
            cout << "Count of all Employess : " << ind << endl;
            break;

        case 5:
            cout << "Displaying all Manager" << endl;
            for (int i = 0; i < ind; i++)
            {
                if (typeid(*arr[i]) == typeid(manger))
                {
                    arr[i]->display();
                }
                else
                {
                    cout << "No Manager Found..." << endl;
                }
            }
            break;

        case 6:
            cout << "Displaying all SalesMan" << endl;
            for (int i = 0; i < ind; i++)
            {
                if (typeid(*arr[i]) == typeid(salesman))
                {
                    arr[i]->display();
                }
                else
                {
                    cout << "No Salesman Found..." << endl;
                }
            }

            break;

        case 7:
            cout << "Displaying all Salesmanager" << endl;
            for (int i = 0; i < ind; i++)
            {
                if (typeid(*arr[i]) == typeid(salesmanger))
                {
                    arr[i]->display();
                }

                else
                {
                    cout << "No SalesManager Found..." << endl;
                }
            }

            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

// void countEmployee(employee **arr, int index)

// {

// }
// case 1:
// case1:
// arr[index] = new salesman;
// arr[index] ->accept();
// index++;

// case 2:
// {

// }