//
// Created by azizx on 10/22/2021.
//

#include "Utils.h"

Employee Utils::strToEmployee(vector<string> employeePart) {
    Employee employee;
    employee.setId(rand());
    employee.setName(employeePart.at(0));
    employee.setPosition(employeePart.at(1));
    employee.setDate(employeePart.at(2));
    employee.setSalary(atof(employeePart.at(3).c_str()));
    return employee;
}

vector<string> Utils::spilt(const string &s, const string &delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;

}
