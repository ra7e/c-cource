#include <string>

class Employee{
private:
    std::string name;
    std::string sec_name;
    std::string position;

public:

    Employee (std::string name, std::string sec_name, std::string position){
        this->name = name;
        this->sec_name = sec_name;
        this->position = position;
    }

    void setName(std::string name) {this->name = name;}
    void setSecName(std::string sec_name) {this->sec_name = sec_name;}
    void setPosition(std::string pos) {this->position = pos;}

    std::string getName (void) {return name;}
    std::string getSecName (void) {return sec_name;}
    std::string getPosition (void) {return position;}
};

class Fulltime_Employee : public Employee {
private:
    float salary;
public:

    Fulltime_Employee (std::string name = "noname", std::string sec_name = "noname", std::string position = "noname", float salary = 0) : Employee(name, sec_name, pos){
        this->salary = salary;
    }

    void setSalary(float amount) {salary += amount;}
    float getSalaty (void) {return salary;}
};

class Parttime_Employee : public Employee {
private:
    float wage;
public:

    Parttime_Employee (std::string name = "noname", std::string sec_name = "noname", std::string position = "noname", float wage = 0) : Employee(name, sec_name, pos){
        this->wage = wage;
    }

    void setWage(float amount) {wage += amount;}
    float getWage (void) {return wage;}
}