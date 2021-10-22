//
// Created by Azizxon on 10/18/2021.
//
#pragma once

#include <string>
#include <ostream>

using namespace std;

#ifndef DEMO_PROJECT_USER_H
#define DEMO_PROJECT_USER_H

class Employee {
private:
    long id{};
    string name;
    string date;
    string position;
public:
    const string &getDate() const;

    void setDate(const string &date);

    const string &getPosition() const;

    void setPosition(const string &position);

    double getSalary() const;

    void setSalary(double salary);

private:
    double salary{};

public:
    Employee();

    bool operator==(const Employee &rhs) const;

    bool operator!=(const Employee &rhs) const;

    [[nodiscard]] long getId() const;

    void setId(long n);

    [[nodiscard]] const string &getName() const;

    void setName(const string &n);


    ~Employee();

    bool operator<(const Employee &rhs) const;

    bool operator>(const Employee &rhs) const;

    bool operator<=(const Employee &rhs) const;

    bool operator>=(const Employee &rhs) const;

    friend ostream &operator<<(ostream &os, const Employee &employee);
};


#endif //DEMO_PROJECT_USER_H
