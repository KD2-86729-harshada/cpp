#include <iostream>
using namespace std;

class product
{
    int id;
    string title;
    double price;

public:
    product()
    {
    }

    product(int id, string title, double price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }
    virtual void accept()
    {
        cout << "Enter the id : ";
        cin >> id;
        cout << "Enter the title : ";
        cin >> title;
        cout << "Enter the price : ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Product Id : " << id << endl;
        cout << "Product title : " << title << endl;
        cout << "Product price : " << price << endl;
    }
};

class Book : public product
{
    string author;

public:
    Book()
    {
    }
    Book(string author, int id, string title, double price) : product(id, title, price)
    {
        this->author = author;
    }

    void accept()
    {
        cout << "Enter the Prod_Book details : " << endl;
        cout << "Enter the author of book : " << endl;
        cin >> author;
        product::accept();
    }
    void display()
    {
        cout << "Author of the book : " << author << endl;
        product::display();
    }
};

class Tapes : public product
{
    int id;
    string title;
    string artist;
    double price;
    Tapes()
    {
    }
    Tapes(string artist, int tapeid, string title, double price) : product(id, title, price)
    {
        this->artist = artist;
    }

    void accep()
    {
        cout << "Enter the Prod_Artist :" << endl;
        cin >> artist;
        product::accept();
    }
    void display()
    {
        cout << "Prod_Artist :" << endl;
        product::display();
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Add BOOK" << endl;
    cout << "2. Add Product " << endl;
    cout << "3. Display Books" << endl;
    cout << "4. Display Tapes" << endl;
    cout << "5. Calculate Discount" << endl;
    cout << "Enter your choice..." << endl;

    cin >> choice;
    return choice;
}
int main()
{
    int choice = 0;
    int ind = 0;
    product *arr[3];

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (ind < 3)
            {
                arr[ind] = new Book;
                arr[ind]->accept();
                ind++;
            }
            else
            {
                cout << "Books are Full" << endl;
            }
            break;

        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    }
}
