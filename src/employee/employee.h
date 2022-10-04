#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

// Avoid putting the using directive in a header file, as that pollutes the global
// namespace and can cause problems with naming collisions in other libraries
#include <string>

class Employee {
    std::string firstName;
    std::string lastName;
    std::string department;

public:
    // constructor
    Employee(const char *fName, const char *lName);
    // destructor
    ~Employee();
    // methods
    std::string getName();
    std::string getDepartment();
    void setDepartment(const char *dep);
};


#endif