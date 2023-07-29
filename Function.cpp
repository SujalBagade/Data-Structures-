#include <iostream>
#include <string>

struct Employee {
    int empId;
    std::string empName;
    double salary;
};

// Function to create a new employee record and return a pointer to it
Employee* createEmployee() {
    Employee* newEmployee = new Employee;

    std::cout << "Enter Employee ID: ";
    std::cin >> newEmployee->empId;

    std::cout << "Enter Employee Name: ";
    std::cin.ignore(); // Ignore the newline character from previous input
    std::getline(std::cin, newEmployee->empName);

    std::cout << "Enter Employee Salary: ";
    std::cin >> newEmployee->salary;

    return newEmployee;
}

// Function to display the information of an employee
void displayEmployee(Employee* emp) {
    std::cout << "Employee ID: " << emp->empId << std::endl;
    std::cout << "Employee Name: " << emp->empName << std::endl;
    std::cout << "Employee Salary: " << emp->salary << std::endl;
}

// Function to delete an employee record and free memory
void deleteEmployee(Employee* emp) {
    delete emp;
}

int main() {
    // Create an array of Employee pointers to store employee records
    const int numEmployees = 2;
    Employee* employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i] = createEmployee();
    }

    // Display employee information
    std::cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; i++) {
        std::cout << "\nEmployee " << i + 1 << ":\n";
        displayEmployee(employees[i]);
    }

    // Delete employee records to free memory
    for (int i = 0; i < numEmployees; i++) {
        deleteEmployee(employees[i]);
    }

    return 0;
}
