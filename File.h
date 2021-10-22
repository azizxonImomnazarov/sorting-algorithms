//
// Created by azizxon on 10/22/2021.
//
#include <vector>
#include "fstream"
#include "Employee.h"
#include "Utils.h"

using namespace std;

#ifndef DEMO_PROJECT_FILE_H
#define DEMO_PROJECT_FILE_H


class File {

private:
    string path;
    ifstream file;
    Utils utils;
public:
    File(const string& path);

    vector<Employee> getEmployees();
};


#endif //DEMO_PROJECT_FILE_H
