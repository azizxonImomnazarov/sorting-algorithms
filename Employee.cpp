//
// Created by azizxon on 10/18/2021.
//

#include "Employee.h"

Employee::Employee() = default;

Employee::~Employee() = default;

long Employee::getId() const {
    return id;
}

void Employee::setId(long n) {
    Employee::id = n;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &n) {
    Employee::name = n;
}

const string &Employee::getDate() const {
    return date;
}

void Employee::setDate(const string &date) {
    Employee::date = date;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double salary) {
    Employee::salary = salary;
}

bool Employee::operator==(const Employee &rhs) const {
    return id == rhs.id &&
           name == rhs.name &&
           date == rhs.date &&
           position == rhs.position &&
           salary == rhs.salary;
}

bool Employee::operator!=(const Employee &rhs) const {
    return !(rhs == *this);

}

bool Employee::operator<(const Employee &rhs) const {
    return salary < rhs.salary;
}

bool Employee::operator>(const Employee &rhs) const {
    return rhs < *this;
}

bool Employee::operator<=(const Employee &rhs) const {
    return !(rhs < *this);
}

bool Employee::operator>=(const Employee &rhs) const {
    return !(*this < rhs);

}

ostream &operator<<(ostream &os, const Employee &employee) {
    os << "id: " << employee.id << " name: " << employee.name << " date: " << employee.date << " position: "
       << employee.position << " salary: " << employee.salary;
    return os;
}
