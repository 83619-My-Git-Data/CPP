#include<iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
    Date()
    {

        day = 1;
        month = 1;
        year = 1001;

    }
    void accpetDate()
    {
        cout << "Please enter the day" << endl;
        cin >> day;
        cout << "Please enter the month" << endl;
        cin >> month;
        cout << "Please enter the year" << endl;
        cin >> year;
        
    }
    void displayDate()
    {
        cout << "The date is " << day << "-" << month << "-" << year << endl;
    }
};

class Person
{
    private:
        string name;
        string address;
        Date birthdate;

    public:
    Person()   
    {
        name = " ";
        address = " ";

    }
    void acceptPerson()
    {
        cout << "enter the details of person" << endl;
        cout << "please enter the name " << endl;
        cin >> name;
        cout << "please enter the address " << endl;
        cin >> address;
        cout << "Enter the date of birth" << endl;
        birthdate.accpetDate();
    }
    void displayPerson()
    {
        cout << "The name and address of person is " << name << "," << address << endl;
        cout << "The DOB IS " << endl;
        birthdate.displayDate();
    }
};
class Employee
{
    private:
        int empid;
        float salary;
        string Department;
        Date DOJ;

    public:
    Employee()
    {
        empid = 0;
        salary = 0;
        Department = " ";
    }

    // Employee(int empid,float salary,string Department,int day,int month ,int year):DOJ (day,month,year)
    // {
    //     this->empid = empid;
    //     this->Department = Department;
    //     this->salary = salary;
    // }
    

    void acceptEmployee()
    {
        cout << "enter Employee details" << endl;
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter Department - ";
        cin >> Department;
        cout << "Enter salary - ";
        cin >> salary;
        cout << "Enter Date of Joining - " << endl;
        DOJ.accpetDate();
    }
    void displayEmployee()
    {
        cout << "Empid - " << empid << endl;
        cout << "Department - " << Department << endl;
        cout << "Salary - " << salary << endl;
        cout << "Date of joining - ";
        DOJ.displayDate();

       
    }
};

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();
    cout << "--------------------------------------------------------------" << endl;
    // Employee e2(1, 1000000, "Dev", 26, 9, 2024);
    // e2.displayEmployee();

    // cout << "--------------------------------------------------------------" << endl;
    Person p1;
    p1.acceptPerson();
    p1.displayPerson();
}