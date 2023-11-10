#include <iostream>
#include <string>

void reverse(char s[], int size);

struct Employee{
    private:
        std::string firstName;
        std::string secondName;
        std::string email;
        Employee* manager;
        std::string phoneNumber;
        int ID;
        int salary;

    public:

    void EmployeeSet(std::string firstName, std::string secondName, std::string email,
    Employee* manager, std::string phoneNumber, int ID, int salary) {
        this->firstName = firstName;
        this->secondName = secondName;
        this->email = email;
        this->manager = manager;
        this->phoneNumber = phoneNumber;
        this->ID = ID;
        this->salary = salary;
    }
    void employeeDetails() {
        std::cout << firstName << " ";
        std::cout << secondName << " ";
    }
    void employeeMnaager() {
        manager->employeeDetails();
    }
};

int main() {
    const double var = 2.4;
    const double* ptrVar = &var;

    //std::cout << "Pointer value: " << ptrVar << " address: " 
    //<< &ptrVar << " dereference: " << *ptrVar;

    char name[5] = {'H', 'a', 'r', 'r', 'y'};

    //reverse(name, 5);
    //std::cout << name;

    Employee employee1;
    Employee employee2;
    Employee employee3;
    employee1.EmployeeSet("Greg", "Gr", "greg@mail.com", &employee2, "2342342", 12, 12);
    employee2.EmployeeSet("Grog", "Gg", "greg@mail.com", &employee2, "2342342", 12, 12);
    employee1.employeeDetails();
    employee1.employeeMnaager();
    return 0;
}

void reverse(char s[], int size) {
    char name[size] = {};
    
    for (int i=0; i<size; i++) {
        name[i] = s[i];
    }

    for (int i=0; i<size; i++) {
        s[i] = name[size-i-1];
    }
}