#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <fstream>
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

#endif