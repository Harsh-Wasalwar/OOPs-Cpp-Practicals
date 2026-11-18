#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    // Create and write CSV file
    ofstream out("students.csv");

    out << "ID,Name,Marks\n";
    out << "1,Amit,78\n";
    out << "2,Riya,92\n";
    out << "3,Karan,65\n";

    cout << "Byte count (tellp): " << out.tellp() << endl;
    out.close();

    // Read CSV file
    ifstream in("students.csv");
    string line;

    getline(in, line); // Skip header

    cout << "\nRecords read from file:\n";

    while (getline(in, line))
    {
        stringstream ss(line);
        string id, name, marks;

        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, marks, ',');

        cout << "ID: " << id
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }

    in.clear();
    cout << "\nEnd position (tellg): " << in.tellg() << endl;

    in.seekg(14, ios::beg);
    getline(in, line);

    cout << "Line after seekg(14): " << line << endl;
    cout << "Current position (tellg): " << in.tellg() << endl;

    in.close();

    // Append a new record
    fstream file("students.csv", ios::in | ios::out | ios::ate);

    file.seekp(0, ios::end);
    file << "4,Neha,55\n";

    cout << "\nFile size after adding (tellp): "
         << file.tellp() << endl;

    // Display final file contents
    file.seekg(0, ios::beg);

    cout << "\nFinal file content:\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}