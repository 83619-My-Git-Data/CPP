#include <iostream>

using namespace std;

class Employee
{
    int id;
    double salary;

    Employee()
    {
        id = 1;
        salary = 5000.00;
    }
    Employee(int i, double s)
    {
        id = i;
        salary = s;
    }
    void setId(int i)
    {
        id = i;
    }
    int getId()
    {
        return id;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
    accept()
    {
        cout << "Enter Emp Id " << endl;
        cin >> id;
        cout << "Enter emp salary" << endl;
        cin >> salary;
    }
    display()
    {
        cout << "EMP id - " << id;
        << endl;
        cout << "Salary - " << salary << endl;
    }
};
class Manager : public Employee
{
    double bonus;

    Manager()
    {

    }
    Manager(int , double, double)
    {

    }
    void setBonus(double)
    {

    }
    double getBonus()
    {

    }
    accept()
    {

    }
    display()
    {

    }
    void acceptManager()
    {

    }
    void displayManager()
    {
        
    }
}