#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Student.h"

using namespace std;

void saveStudent(Student student)
{
    ofstream file("data/students.txt", ios::app);

    file << student.id << "|"
         << student.name << "|"
         << student.department << "|"
         << student.semester << endl;

    file.close();
}

int loadStudents(Student students[])
{
    ifstream file("data/students.txt");

    int count = 0;
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        string temp;

        getline(ss, temp, '|');
        students[count].id = stoi(temp);

        getline(ss, students[count].name, '|');
        getline(ss, students[count].department, '|');

        getline(ss, temp, '|');
        students[count].semester = stoi(temp);

        count++;
    }

    file.close();
    return count;
}

#endif