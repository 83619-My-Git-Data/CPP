#include <iostream>

using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    void acceptDate()
    {
        cout << "Enter day";
        cin >> day;
        cout << "Enter month";
        cin >> month;
        cout << "Enter year";
        cin >> year;
    }
    void displayDate()
    {
        cout << "The date is " << day << "-" << month << "-" << year << endl;
    }
};
class Person
{
    string name;
    string address;
    Date birthDate;

public:
   virtual void acceptData()
    {
        cout << "Enter the Name" << endl;
        cin >> name;
        cout << "Enter the Address" << endl;
        cin >> address;
        cout << "Enter the Birthdate in dd mm yy" << endl;
        birthDate.acceptDate();
    }
  virtual  void displayData()
    {
        cout << "The persons data is \n Name: " << name << "\n Adress: " << address << "\n";
        birthDate.displayDate();
    }
};
class Employee : public Person
{
    int empid;
    string dept;
    double salary;
    Date doj;

public:
    void acceptData()
    {
        
        cout << "\nEnter the empid" << endl;
        cin >> empid;
        cout << "Enter the department" << endl;
        cin >> dept;
        cout << "Enter the salary" << endl;
        cin >> salary;
        cout << "Enter the date of joining " << endl;
        doj.acceptDate();
    }
    void displayData()
    {

        cout << "Empid - " << empid << endl;
        cout << "Department - " << dept << endl;
        cout << "Salary - " << salary << endl;
        cout << "Date of joining - ";
        doj.displayDate();
    }
};

int main()
{
    // Person p;
    // p.acceptData();
    // p.displayData();

    // Employee e;
    // e.acceptData();
    // e.displayData();

    Person *ptr = new Employee;
    ptr->acceptData();
    ptr->displayData();

    delete ptr;
    ptr=NULL;

    // Employee *eptr = new Employee();
    // eptr->acceptData();
    // eptr->displayData();
}