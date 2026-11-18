#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student
{
    string name;
    int marks;
};

int main()
{
    vector<Student> students = {
        {"Amit", 78},
        {"Riya", 92},
        {"Karan", 65},
        {"Sneha", 85},
        {"Neha", 55}
    };

    // Sort students from highest to lowest marks
    sort(students.begin(), students.end(),
         [](const Student &a, const Student &b)
         {
             return a.marks > b.marks;
         });

    cout << "Sorted (High to Low):" << endl;

    for (const auto &s : students)
        cout << s.name << " " << s.marks << endl;

    // Find first student with marks below 60
    auto it = find_if(students.begin(), students.end(),
                      [](const Student &s)
                      {
                          return s.marks < 60;
                      });

    if (it != students.end())
        cout << "\nStudent with marks below 60: "
             << it->name << " " << it->marks << endl;
    else
        cout << "\nNo student found with marks below 60." << endl;

    return 0;
}