#ifndef ATTENDANCEMANAGER_H
#define ATTENDANCEMANAGER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Attendance.h"

using namespace std;

void saveAttendance(Attendance attendance)
{
    ofstream file("data/attendance.txt", ios::app);

    file << attendance.studentID << "|"
         << attendance.totalClasses << "|"
         << attendance.attendedClasses << endl;

    file.close();
}

int loadAttendance(Attendance attendanceRecords[])
{
    ifstream file("data/attendance.txt");

    int count = 0;
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        string temp;

        getline(ss, temp, '|');
        attendanceRecords[count].studentID = stoi(temp);

        getline(ss, temp, '|');
        attendanceRecords[count].totalClasses = stoi(temp);

        getline(ss, temp, '|');
        attendanceRecords[count].attendedClasses = stoi(temp);

        count++;
    }

    file.close();
    return count;
}

#endif