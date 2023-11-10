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

    Employee() : manager(nullptr), ID(0), salary(0) {}

    Employee(std::string firstName, std::string secondName, std::string email, std::string phoneNumber, int ID, int salary) {
        this->firstName = firstName;
        this->secondName = secondName;
        this->email = email;
        this->phoneNumber = phoneNumber;
        this->ID = ID;
        this->salary = salary;
    }
    void setManager(Employee* manager) {
        this->manager = manager;
    }
    void employeeDetails() {
        std::cout << firstName << " ";
        std::cout << secondName << " ";
        std::cout << ID << " ";
    }
    void employeeMnaager() {
        manager->employeeDetails();
    }
};

void createUsers() {
    std::cout << "how many users? " << std::endl;
    int users;
    std::cin >> users;
    Employee* employeeArr = new Employee[users];

    for (int i=0; i<users; i++) {
        std::string firstName, lastName, email, phoneNumber;
        std::cout << "first name " << std::endl;
        std::cin >> firstName;
        std::cout << "last name " << std::endl;
        std::cin >> lastName;
        std::cout << "email " << std::endl;
        std::cin >> email;
        std::cout << "number " << std::endl;
        std::cin >> phoneNumber;
        
        int id, salary;
        std::cout << "id " << std::endl;
        std::cin >> id;
        std::cout << "salary " << std::endl;
        std::cin >> salary;        

        Employee employee(firstName, lastName, email, phoneNumber, id, salary);
        employeeArr[i] = employee;
    }
    for (int i=0; i<users; i++) {
        employeeArr[i].employeeDetails();
    }
}

int main() {
    const double var = 2.4;
    const double* ptrVar = &var;

    //std::cout << "Pointer value: " << ptrVar << " address: " 
    //<< &ptrVar << " dereference: " << *ptrVar;

    char name[5] = {'H', 'a', 'r', 'r', 'y'};

    //reverse(name, 5);
    //std::cout << name;

    //Employee employee1("Greg", "Gr", "greg@mail.com", "2342342", 12, 12);
    //Employee employee2("Grog", "Gg", "greg@mail.com", "2342342", 122, 122);
    //Employee employee3("henry", "hr", "henry@mail.com", "2342342", 123, 123);
//
    //employee1.setManager(&employee2);
    //employee1.employeeDetails();
    //employee1.employeeMnaager();

    createUsers();
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