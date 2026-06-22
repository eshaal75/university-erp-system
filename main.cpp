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

    // Course Data
    string courseCodes[SIZE];
    string courseNames[SIZE];
    int creditHours[SIZE];
    int courseCount = 0;

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
        cout << "6. Add Course" << endl;
        cout << "7. View Courses" << endl;
        cout << "8. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        // Add Student
        if(choice == 1)
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

        // View Students
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
                    cout << "-------------------------" << endl;
                }
            }
        }

        // Search Student
        else if(choice == 3)
        {
            int searchID;
            bool found = false;

            cout << "\nEnter Student ID: ";
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

        // View Teachers
        else if(choice == 5)
        {
            if(teacherCount == 0)
            {
                cout << "\nNo Teachers Found!" << endl;
            }
            else
            {
                for(int i = 0; i < teacherCount; i++)
                {
                    cout << "\nTeacher " << i + 1 << endl;
                    cout << "ID: " << teacherIds[i] << endl;
                    cout << "Name: " << teacherNames[i] << endl;
                    cout << "Department: " << teacherDepartments[i] << endl;
                    cout << "-------------------------" << endl;
                }
            }
        }

        // Add Course
        else if(choice == 6)
        {
            cin.ignore();

            cout << "\nEnter Course Code: ";
            getline(cin, courseCodes[courseCount]);

            cout << "Enter Course Name: ";
            getline(cin, courseNames[courseCount]);

            cout << "Enter Credit Hours: ";
            cin >> creditHours[courseCount];

            courseCount++;

            cout << "\nCourse Added Successfully!" << endl;
        }

        // View Courses
        else if(choice == 7)
        {
            if(courseCount == 0)
            {
                cout << "\nNo Courses Found!" << endl;
            }
            else
            {
                for(int i = 0; i < courseCount; i++)
                {
                    cout << "\nCourse " << i + 1 << endl;
                    cout << "Code: " << courseCodes[i] << endl;
                    cout << "Name: " << courseNames[i] << endl;
                    cout << "Credit Hours: " << creditHours[i] << endl;
                    cout << "-------------------------" << endl;
                }
            }
        }

        // Exit
        else if(choice == 8)
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