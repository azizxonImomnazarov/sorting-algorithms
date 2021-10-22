//
// Created by azizx on 10/22/2021.
//

#include <iostream>
#include <utility>
#include "File.h"


File::File(const string& path) {
    this->path = path;
    file.open(path);

    if (!file.is_open()) {
        cerr << "Error when open file" << endl;
        exit(1);
    }
}

vector<Employee> File::getEmployees() {
    string data;
    string delimiter = "  ";

    vector<Employee> employees;
    vector<Employee>::iterator it;

    while (!file.eof()) {
        getline(file, data);
        vector<string> employeeStr = utils.spilt(data, delimiter);
        Employee employee = utils.strToEmployee(employeeStr);
        employees.insert(employees.end(), employee);
    }
    file.close();

    return employees;
}



