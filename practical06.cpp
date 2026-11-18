#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int roll;
    char course;

    void getStudent() {
        getPerson();

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Course: ";
        cin >> course;
    }

    void displayStudent() {
        displayPerson();

        cout << "Roll Number: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

class GraduateStudent : public Student {
public:
    string topic;

    void getGraduate() {
        getStudent();

        cout << "Enter Research Topic: ";
        cin >> topic;
    }

    void displayGraduate() {
        displayStudent();

        cout << "Research Topic: " << topic << endl;
    }
};

int main() {
    GraduateStudent g;
    int choice;

    cout << "Enter choice (1 for Student, 2 for Graduate Student): ";
    cin >> choice;

    if (choice == 1) {
        g.getStudent();

        cout << "\nStudent Details:\n";
        g.displayStudent();
    }
    else if (choice == 2) {
        g.getGraduate();

        cout << "\nGraduate Student Details:\n";
        g.displayGraduate();
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}