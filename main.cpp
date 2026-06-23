#include <iostream>
#include <string>

#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Attendance.h"
#include "Result.h"

using namespace std;

int main()
{
    const int SIZE = 100;

    Student students[SIZE];
    Teacher teachers[SIZE];
    Course courses[SIZE];
    Attendance attendanceRecords[SIZE];
    Result results[SIZE];

    int studentCount = 0;
    int teacherCount = 0;
    int courseCount = 0;
    int attendanceCount = 0;
    int resultCount = 0;

    int choice;

    while(true)
    {
        cout << "\n=================================\n";
        cout << "     UNIVERSITY ERP SYSTEM\n";
        cout << "=================================\n";

        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Add Teacher\n";
        cout << "6. View Teachers\n";
        cout << "7. Add Course\n";
        cout << "8. View Courses\n";
        cout << "9. Mark Attendance\n";
        cout << "10. View Attendance\n";
        cout << "11. Enter Result\n";
        cout << "12. View Results\n";
        cout << "13. Exit\n";

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

            cout << "\nStudent Added Successfully!\n";
        }

        // View Students
        else if(choice == 2)
        {
            if(studentCount == 0)
            {
                cout << "\nNo Students Found!\n";
            }
            else
            {
                for(int i = 0; i < studentCount; i++)
                {
                    cout << "\nID: " << students[i].id;
                    cout << "\nName: " << students[i].name;
                    cout << "\nDepartment: " << students[i].department;
                    cout << "\nSemester: " << students[i].semester;
                    cout << "\n-----------------------------\n";
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

            for(int i = 0; i < studentCount; i++)
            {
                if(students[i].id == searchID)
                {
                    cout << "\nStudent Found!\n";
                    cout << "Name: " << students[i].name << endl;
                    cout << "Department: " << students[i].department << endl;
                    cout << "Semester: " << students[i].semester << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "\nStudent Not Found!\n";
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
                    found = true;

                    cout << "\nStudent Deleted Successfully!\n";
                    break;
                }
            }

            if(!found)
                cout << "\nStudent Not Found!\n";
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

            cout << "\nTeacher Added Successfully!\n";
        }

        // View Teachers
        else if(choice == 6)
        {
            for(int i = 0; i < teacherCount; i++)
            {
                cout << "\nID: " << teachers[i].id;
                cout << "\nName: " << teachers[i].name;
                cout << "\nDepartment: " << teachers[i].department;
                cout << "\n-----------------------------\n";
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

            cout << "\nCourse Added Successfully!\n";
        }

        // View Courses
        else if(choice == 8)
        {
            for(int i = 0; i < courseCount; i++)
            {
                cout << "\nCode: " << courses[i].code;
                cout << "\nName: " << courses[i].name;
                cout << "\nCredit Hours: " << courses[i].creditHours;
                cout << "\n-----------------------------\n";
            }
        }

        // Mark Attendance
        else if(choice == 9)
        {
            cout << "\nEnter Student ID: ";
            cin >> attendanceRecords[attendanceCount].studentID;

            cout << "Enter Total Classes: ";
            cin >> attendanceRecords[attendanceCount].totalClasses;

            cout << "Enter Attended Classes: ";
            cin >> attendanceRecords[attendanceCount].attendedClasses;

            attendanceCount++;

            cout << "\nAttendance Recorded Successfully!\n";
        }

        // View Attendance
        else if(choice == 10)
        {
            for(int i = 0; i < attendanceCount; i++)
            {
                double percentage =
                (double)attendanceRecords[i].attendedClasses /
                attendanceRecords[i].totalClasses * 100;

                cout << "\nStudent ID: "
                     << attendanceRecords[i].studentID;

                cout << "\nAttendance: "
                     << percentage << "%";

                cout << "\n-----------------------------\n";
            }
        }

        // Enter Result
        else if(choice == 11)
        {
            cout << "\nEnter Student ID: ";
            cin >> results[resultCount].studentID;

            cout << "Enter Marks (0-100): ";
            cin >> results[resultCount].marks;

            float marks = results[resultCount].marks;

            if(marks >= 85)
            {
                results[resultCount].grade = 'A';
                results[resultCount].gpa = 4.0;
            }
            else if(marks >= 70)
            {
                results[resultCount].grade = 'B';
                results[resultCount].gpa = 3.0;
            }
            else if(marks >= 60)
            {
                results[resultCount].grade = 'C';
                results[resultCount].gpa = 2.0;
            }
            else if(marks >= 50)
            {
                results[resultCount].grade = 'D';
                results[resultCount].gpa = 1.0;
            }
            else
            {
                results[resultCount].grade = 'F';
                results[resultCount].gpa = 0.0;
            }

            resultCount++;

            cout << "\nResult Added Successfully!\n";
        }

        // View Results
        else if(choice == 12)
        {
            if(resultCount == 0)
            {
                cout << "\nNo Results Found!\n";
            }
            else
            {
                for(int i = 0; i < resultCount; i++)
                {
                    cout << "\nStudent ID: "
                         << results[i].studentID;

                    cout << "\nMarks: "
                         << results[i].marks;

                    cout << "\nGrade: "
                         << results[i].grade;

                    cout << "\nGPA: "
                         << results[i].gpa;

                    cout << "\n-----------------------------\n";
                }
            }
        }

        // Exit
        else if(choice == 13)
        {
            cout << "\nThank You For Using University ERP System!\n";
            break;
        }

        else
        {
            cout << "\nInvalid Choice!\n";
        }
    }

    return 0;
}