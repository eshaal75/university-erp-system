#ifndef RESULTMANAGER_H
#define RESULTMANAGER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Result.h"

using namespace std;

void saveResult(Result result)
{
    ofstream file("data/results.txt", ios::app);

    file << result.studentID << "|"
         << result.marks << "|"
         << result.grade << "|"
         << result.gpa << endl;

    file.close();
}

int loadResults(Result results[])
{
    ifstream file("data/results.txt");

    int count = 0;
    string line;

    while(getline(file, line))
    {
        stringstream ss(line);
        string temp;

        getline(ss, temp, '|');
        results[count].studentID = stoi(temp);

        getline(ss, temp, '|');
        results[count].marks = stof(temp);

        getline(ss, temp, '|');
        results[count].grade = temp[0];

        getline(ss, temp, '|');
        results[count].gpa = stof(temp);

        count++;
    }

    file.close();
    return count;
}

#endif