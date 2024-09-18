#include <iostream>
using namespace std;
class Stack
{
    int top;
    int size;
    int *ptr;
public: 
    Stack(int size)
    {
        this->size=size; 
    }
    void push()
    {
        if(isFull())
        {
           cout<<"Stack is full";
        }
        else 
        top=top+1;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
        }
        else
        top=top-1;
    }
    void peek()
    {
        if(isEmpty())
        {
             cout<<"Stack is empty";
        }
    }
    
    int isEmpty()
    {
            if(top==-1)
            {
                return 1;
            }
    }
    int isFull()
    {
        if(size==size-1)
        {
            return 1;
        }

    }

};
int main()
{
    Stack *ptr=new Stack(5); 
}



// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int* stack;   // Pointer to dynamically allocated array
//     int top;      // Index of the top element
//     int size;     // Size of the stack

// public:
//     // Parameterized constructor with default size 5
//     Stack(int size = 5) {
//         this->size = size;
//         stack = new int[size];  // Dynamically allocate memory for the stack
//         top = -1;               // Initialize top to -1 (empty stack)
//     }

//     // Destructor to free the dynamically allocated memory
//     ~Stack() {
//         delete[] stack;
//     }

//     // Check if the stack is empty
//     bool isEmpty() {
//         return top == -1;
//     }

//     // Check if the stack is full
//     bool isFull() {
//         return top == size - 1;
//     }

//     // Push an element onto the stack
//     void push(int value) {
//         if (isFull()) {
//             cout << "Stack overflow! Cannot push." << endl;
//         } else {
//             stack[++top] = value;
//         }
//     }

//     // Pop an element from the stack
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack underflow! Cannot pop." << endl;
//             return -1;  // Returning -1 to indicate underflow
//         } else {
//             return stack[top--];
//         }
//     }

//     // Peek at the top element without removing it
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return -1;  // Returning -1 to indicate an empty stack
//         } else {
//             return stack[top];
//         }
//     }

//     // Print all elements in the stack
//     void print() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//         } else {
//             cout << "Stack elements are: ";
//             for (int i = 0; i <= top; i++) {
//                 cout << stack[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Stack s(5);  // Create a stack of size 5

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.print();  // Output: Stack elements are: 10 20 30

//     cout << "Peek: " << s.peek() << endl;  // Output: Peek: 30

//     s.pop();
//     s.print();  // Output: Stack elements are: 10 20

//     s.pop();
//     s.pop();
//     s.pop();  // Output: Stack underflow! Cannot pop.
    
//     return 0;
// }

