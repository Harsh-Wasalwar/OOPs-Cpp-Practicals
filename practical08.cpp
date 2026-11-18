#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
private:
    static const int MAX = 100;
    T arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty() const
    {
        return top == -1;
    }

    bool isFull() const
    {
        return top == MAX - 1;
    }

    void push(const T &value)
    {
        if (isFull())
        {
            cout << "Stack overflow!" << endl;
            return;
        }

        arr[++top] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!" << endl;
            return;
        }

        top--;
    }

    T peek() const
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return T();
        }

        return arr[top];
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    Stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Int Stack: ";
    s1.display();

    cout << "Top element: " << s1.peek() << endl;
    s1.pop();

    cout << "After pop: ";
    s1.display();


    Stack<float> s2;

    s2.push(1.5);
    s2.push(2.5);
    s2.push(3.5);

    cout << "\nFloat Stack: ";
    s2.display();

    cout << "Top element: " << s2.peek() << endl;
    s2.pop();

    cout << "After pop: ";
    s2.display();


    Stack<string> s3;

    s3.push("Hello");
    s3.push("C++");
    s3.push("World");

    cout << "\nString Stack: ";
    s3.display();

    cout << "Top element: " << s3.peek() << endl;
    s3.pop();

    cout << "After pop: ";
    s3.display();

    return 0;
}