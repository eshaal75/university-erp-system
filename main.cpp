#include <iostream>
#include <string>

#include "Student.h"
#include "Teacher.h"
#include "Course.h"

using namespace std;

int main()
{
    const int SIZE = 100;

    Student students[SIZE];
    Teacher teachers[SIZE];
    Course courses[SIZE];

    int studentCount = 0;
    int teacherCount = 0;
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
        cout << "4. Delete Student" << endl;
        cout << "5. Add Teacher" << endl;
        cout << "6. View Teachers" << endl;
        cout << "7. Add Course" << endl;
        cout << "8. View Courses" << endl;
        cout << "9. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        // Add Student
        if(choice == 1)
        {
            cout << "\nEnter Student ID: ";
            cin >> students[studentCount].id;

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, students[studentCount].name);

            cout << "Enter Department: ";
            getline(cin, students[studentCount].department);

            cout << "Enter Semester: ";
            cin >> students[studentCount].semester;

            studentCount++;

            cout << "\nStudent Added Successfully!" << endl;
        }

        // View Students
        else if(choice == 2)
        {
            if(studentCount == 0)
            {
                cout << "\nNo Students Found!" << endl;
            }
            else
            {
                cout << "\n========== STUDENT LIST ==========\n";

                for(int i = 0; i < studentCount; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "ID: " << students[i].id << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "Department: " << students[i].department << endl;
                    cout << "Semester: " << students[i].semester << endl;
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

            for(int i = 0; i < studentCount; i++)
            {
                if(students[i].id == searchID)
                {
                    cout << "\nStudent Found!" << endl;
                    cout << "ID: " << students[i].id << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "Department: " << students[i].department << endl;
                    cout << "Semester: " << students[i].semester << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "\nStudent Not Found!" << endl;
            }
        }

        // Delete Student
        else if(choice == 4)
        {
            int deleteID;
            bool found = false;

            cout << "\nEnter Student ID to Delete: ";
            cin >> deleteID;

            for(int i = 0; i < studentCount; i++)
            {
                if(students[i].id == deleteID)
                {
                    for(int j = i; j < studentCount - 1; j++)
                    {
                        students[j] = students[j + 1];
                    }

                    studentCount--;

                    cout << "\nStudent Deleted Successfully!" << endl;

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
        else if(choice == 5)
        {
            cout << "\nEnter Teacher ID: ";
            cin >> teachers[teacherCount].id;

            cin.ignore();

            cout << "Enter Teacher Name: ";
            getline(cin, teachers[teacherCount].name);

            cout << "Enter Department: ";
            getline(cin, teachers[teacherCount].department);

            teacherCount++;

            cout << "\nTeacher Added Successfully!" << endl;
        }

        // View Teachers
        else if(choice == 6)
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
                    cout << "ID: " << teachers[i].id << endl;
                    cout << "Name: " << teachers[i].name << endl;
                    cout << "Department: " << teachers[i].department << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }

        // Add Course
        else if(choice == 7)
        {
            cin.ignore();

            cout << "\nEnter Course Code: ";
            getline(cin, courses[courseCount].code);

            cout << "Enter Course Name: ";
            getline(cin, courses[courseCount].name);

            cout << "Enter Credit Hours: ";
            cin >> courses[courseCount].creditHours;

            courseCount++;

            cout << "\nCourse Added Successfully!" << endl;
        }

        // View Courses
        else if(choice == 8)
        {
            if(courseCount == 0)
            {
                cout << "\nNo Courses Found!" << endl;
            }
            else
            {
                cout << "\n========== COURSE LIST ==========\n";

                for(int i = 0; i < courseCount; i++)
                {
                    cout << "\nCourse " << i + 1 << endl;
                    cout << "Code: " << courses[i].code << endl;
                    cout << "Name: " << courses[i].name << endl;
                    cout << "Credit Hours: " << courses[i].creditHours << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }

        // Exit
        else if(choice == 9)
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