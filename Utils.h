//
// Created by azizxon on 10/22/2021.
//

#ifndef DEMO_PROJECT_UTILS_H
#define DEMO_PROJECT_UTILS_H


#include "Employee.h"
#include "vector"

class Utils {

public:
    Employee strToEmployee(vector<string> employeePart);

    vector<string> spilt(const string &s, const string &delimiter);
};


#endif //DEMO_PROJECT_UTILS_H
