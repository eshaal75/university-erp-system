#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 100;

    int ids[SIZE];
    string names[SIZE];
    string departments[SIZE];
    int semesters[SIZE];

    int count = 0;
    int choice;

    while(true)
    {
        cout << "\n=================================" << endl;
        cout << "     UNIVERSITY ERP SYSTEM" << endl;
        cout << "=================================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;

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

                cout << "Enter Department: ";
                getline(cin, departments[count]);

                cout << "Enter Semester: ";
                cin >> semesters[count];

                count++;

                cout << "\nStudent Added Successfully!" << endl;
            }
        }
        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "\nNo Students Found!" << endl;
            }
            else
            {
                for(int i = 0; i < count; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "ID: " << ids[i] << endl;
                    cout << "Name: " << names[i] << endl;
                    cout << "Department: " << departments[i] << endl;
                    cout << "Semester: " << semesters[i] << endl;
                    cout << "---------------------" << endl;
                }
            }
        }
        else if(choice == 3)
        {
            int searchID;
            bool found = false;

            cout << "\nEnter Student ID to Search: ";
            cin >> searchID;

            for(int i = 0; i < count; i++)
            {
                if(ids[i] == searchID)
                {
                    cout << "\nStudent Found!" << endl;
                    cout << "ID: " << ids[i] << endl;
                    cout << "Name: " << names[i] << endl;
                    cout << "Department: " << departments[i] << endl;
                    cout << "Semester: " << semesters[i] << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "\nStudent Not Found!" << endl;
            }
        }
        else if(choice == 4)
        {
            cout << "\nThank You For Using University ERP System!" << endl;
            break;
        }
        else
        {
            cout << "\nInvalid Choice!" << endl;
        }
    }

    return 0;
}