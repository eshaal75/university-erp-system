#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 100;

    // Student Data
    int ids[SIZE];
    string names[SIZE];
    string departments[SIZE];
    int semesters[SIZE];
    int count = 0;

    // Teacher Data
    int teacherIds[SIZE];
    string teacherNames[SIZE];
    string teacherDepartments[SIZE];
    int teacherCount = 0;

    int choice;

    while(true)
    {
        cout << "\n=================================" << endl;
        cout << "     UNIVERSITY ERP SYSTEM" << endl;
        cout << "=================================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Add Teacher" << endl;
        cout << "5. View Teachers" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        // Add Student
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
            else
            {
                cout << "\nStudent Storage Full!" << endl;
            }
        }

        // View Students
        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "\nNo Students Found!" << endl;
            }
            else
            {
                cout << "\n========== STUDENT LIST ==========\n";

                for(int i = 0; i < count; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "ID: " << ids[i] << endl;
                    cout << "Name: " << names[i] << endl;
                    cout << "Department: " << departments[i] << endl;
                    cout << "Semester: " << semesters[i] << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }

        // Search Student
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

        // Add Teacher
        else if(choice == 4)
        {
            if(teacherCount < SIZE)
            {
                cout << "\nEnter Teacher ID: ";
                cin >> teacherIds[teacherCount];

                cin.ignore();

                cout << "Enter Teacher Name: ";
                getline(cin, teacherNames[teacherCount]);

                cout << "Enter Department: ";
                getline(cin, teacherDepartments[teacherCount]);

                teacherCount++;

                cout << "\nTeacher Added Successfully!" << endl;
            }
            else
            {
                cout << "\nTeacher Storage Full!" << endl;
            }
        }

        // View Teachers
        else if(choice == 5)
        {
            if(teacherCount == 0)
            {
                cout << "\nNo Teachers Found!" << endl;
            }
            else
            {
                cout << "\n========== TEACHER LIST ==========\n";

                for(int i = 0; i < teacherCount; i++)
                {
                    cout << "\nTeacher " << i + 1 << endl;
                    cout << "ID: " << teacherIds[i] << endl;
                    cout << "Name: " << teacherNames[i] << endl;
                    cout << "Department: " << teacherDepartments[i] << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }

        // Exit
        else if(choice == 6)
        {
            cout << "\nThank You For Using University ERP System!" << endl;
            break;
        }

        // Invalid Choice
        else
        {
            cout << "\nInvalid Choice!" << endl;
        }
    }

    return 0;
}