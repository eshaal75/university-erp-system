#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 100;

    int ids[SIZE];
    string names[SIZE];
    int count = 0;

    int choice;

    while(true)
    {
        cout << "\n===== UNIVERSITY ERP SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(count < SIZE)
            {
                cout << "\nEnter Student ID: ";
                cin >> ids[count];

                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, names[count]);

                count++;

                cout << "\nStudent Added Successfully!" << endl;
            }
            else
            {
                cout << "\nStorage Full!" << endl;
            }
        }
        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "\nNo students found!" << endl;
            }
            else
            {
                cout << "\n===== STUDENT LIST =====" << endl;

                for(int i = 0; i < count; i++)
                {
                    cout << "ID: " << ids[i]
                         << " | Name: " << names[i] << endl;
                }
            }
        }
        else if(choice == 3)
        {
            cout << "\nExiting..." << endl;
            break;
        }
        else
        {
            cout << "\nInvalid Choice!" << endl;
        }
    }

    return 0;
}