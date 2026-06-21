#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;

    cout << "===== UNIVERSITY ERP SYSTEM =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;

    cout << "\nEnter Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        int id;
        string name;

        cout << "\nEnter Student ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "\nStudent Added Successfully!" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
    else if(choice == 2)
    {
        cout << "\nNo students available yet." << endl;
    }
    else if(choice == 3)
    {
        cout << "\nExiting..." << endl;
    }
    else
    {
        cout << "\nInvalid Choice!" << endl;
    }

    return 0;
}