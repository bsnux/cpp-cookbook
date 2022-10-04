#include "employee.h"
#include <string>

//Employee::Employee(std::string &fName, std::string &lName)

// Constructor (initializer syntax)
Employee::Employee(const char *fName, const char *lName):firstName(fName), lastName(lName) {}

Employee::~Employee() {

}

std::string Employee::getName() {
    return lastName + ", " + firstName;
}

std::string Employee::getDepartment() {
    return department;
}

void Employee::setDepartment(const char *dep) {
    department = dep;
}
