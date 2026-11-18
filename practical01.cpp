#include <iostream>
using namespace std;

int main() {
    int age;
    int a = 10, b = 5;
    float height;
    char grade;

    const float pi = 3.14;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height: ";
    cin >> height;

    cout << "Enter grade: ";
    cin >> grade;

    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;

    cout << "Age after 4 years = " << age + 4 << endl;
    cout << "Height in meters = " << height / 100 << endl;
    cout << "Constant pi = " << pi << endl;

    cout << "Sum = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Product = " << a * b << endl;

    return 0;
}