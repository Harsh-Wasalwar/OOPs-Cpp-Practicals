#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T a[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if (top == 4)
            cout << "Stack overflow";
        else
            a[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack underflow";
        else
            cout << "Popped element: " << a[top--] << endl;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s1;
    Stack<float> s2;
    Stack<string> s3;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s2.push(1.5);
    s2.push(2.5);

    s3.push("Hello");
    s3.push("World");

    cout << "Integer Stack:" << endl;
    s1.display();
    s1.pop();

    cout << "\nFloat Stack:" << endl;
    s2.display();
    s2.pop();

    cout << "\nString Stack:" << endl;
    s3.display();
    s3.pop();

    return 0;
}