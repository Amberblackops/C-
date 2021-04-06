#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void printDetails()
    {
        cout << "The name of our first Employee is " << this->name << " and his salary is " << this->salary << "$ " << endl;
    }
};

int main()
{
    Employee Am("Amber constructor", 445);
    // Am.name = "Amber";
    // Am.salary = 100;
    Am.printDetails();

    return 0;
}