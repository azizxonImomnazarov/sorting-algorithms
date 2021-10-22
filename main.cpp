#include <iostream>
#include "vector"
#include "Employee.h"
#include "File.h"

using namespace std;

void bubbleSort(vector<Employee> &employees);

void insertionSort(vector<Employee> &employees);

void selectionSort(vector<Employee> &employees);

void quicksort(vector<Employee> &employees, int L, int R);

void printEmployees(vector<Employee> employees);

int main() {
    string path = "C:/Users/azizx/CLionProjects/demo-project/employee_data.txt";
    File fileReader(path);

    vector<Employee> employees = fileReader.getEmployees();

    printEmployees(employees);

//    bubbleSort(employees);
//    insertionSort(employees);
//    selectionSort(employees);
    quicksort(employees, 0, employees.size() - 1);

    printEmployees(employees);

    return 0;
}

// sorting employee with his salary
void bubbleSort(vector<Employee> &employees) {
    for (size_t i = 0; i < employees.size() - 1; ++i) {
        for (size_t j = 0; j < employees.size() - i - 1; ++j) {
            if (employees.at(j) > employees.at(j + 1))
                swap(employees.at(j), employees.at(j + 1));
        }
    }
}
// sorting employee with his salary
void insertionSort(vector<Employee> &employees) {
    for (unsigned int index = 1; index < employees.size(); index++) {
        Employee employee = employees[index];
        int position = index;
        while (position > 0 && employees[position - 1] > employee) {
            employees[position] = employees[position - 1];
            position--;
        }
        employees[position] = employee;
    }
}
// sorting employee with his salary
void selectionSort(vector<Employee> &employees) {
    for (unsigned int i = 0; i < employees.size() - 1; i++) {
        int min = i;
        for (unsigned int j = i + 1; j < employees.size(); j++)
            if (employees[j] < employees[min])
                min = j;
        Employee t = employees[i];
        employees[i] = employees[min];
        employees[min] = t;
    }
}

void quicksort(vector<Employee> &employees, int L, int R) {
    int i, j, mid;
    Employee piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = employees[mid];

    while (i<R || j>L) {
        while (employees[i] < piv)
            i++;
        while (employees[j] > piv)
            j--;

        if (i <= j) {
            swap(employees.at(i), employees.at(j));
            i++;
            j--;
        }
        else {
            if (i < R)
                quicksort(employees, i, R);
            if (j > L)
                quicksort(employees, L, j);
            return;
        }
    }
}

void printEmployees(vector<Employee> employees) {
    for (auto employeeItr = employees.begin(); employeeItr < employees.end(); employeeItr++)
        std::cout << ' ' << *employeeItr << endl;
    cout << endl;
}


