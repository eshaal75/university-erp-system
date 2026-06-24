#ifndef COURSEMANAGER_H
#define COURSEMANAGER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Course.h"

using namespace std;

void saveCourse(Course course)
{
    ofstream file("data/courses.txt", ios::app);

    file << course.code << "|"
         << course.name << "|"
         << course.creditHours << endl;

    file.close();
}

int loadCourses(Course courses[])
{
    ifstream file("data/courses.txt");

    int count = 0;
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        string temp;

        getline(ss, courses[count].code, '|');
        getline(ss, courses[count].name, '|');

        getline(ss, temp, '|');
        courses[count].creditHours = stoi(temp);

        count++;
    }

    file.close();
    return count;
}

#endif