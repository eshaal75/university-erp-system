#ifndef TEACHERMANAGER_H
#define TEACHERMANAGER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Teacher.h"

using namespace std;

void saveTeacher(Teacher teacher)
{
    ofstream file("data/teachers.txt", ios::app);

    file << teacher.id << "|"
         << teacher.name << "|"
         << teacher.department << endl;

    file.close();
}

int loadTeachers(Teacher teachers[])
{
    ifstream file("data/teachers.txt");

    int count = 0;
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        string temp;

        getline(ss, temp, '|');
        teachers[count].id = stoi(temp);

        getline(ss, teachers[count].name, '|');
        getline(ss, teachers[count].department, '|');

        count++;
    }

    file.close();
    return count;
}

#endif