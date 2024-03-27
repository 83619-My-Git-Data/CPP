#include <iostream>
using namespace std;
class Employee  {

    int empid;
   
    double salary;

public:
Employee(){
    empid=10;
    salary=10000;

}
Employee(int id,double salary){
    this ->empid=id;
    this->salary=salary;
}
 virtual void setId(int id){
    this->empid=id;

}
int getId(){
    return empid;

}
virtual void setSalary(double salary){
    this->salary= salary;

}
double getSalary(){
    return salary;

}


   void acceptData()  { 
       
        cout << "Enter empId: ";
        cin >> empid;
  
        cout << "Enter salary: ";
        cin >> salary;
      
       
    }


   virtual void displayData(){ 

        cout << "Empid: " << empid << endl;
        cout << "Salary: " << salary << endl;
       
    }


};

class Manager :virtual public Employee{
    double bonus;
    public:
    Manager(){
        this ->bonus=10;
     

    }
   void  setBonus(double bonus){
this->bonus=bonus;
    }
    Manager(int id,double salary ,double bonus){
           this ->bonus=bonus;
       this->setId(id);
       this->setSalary(salary);
    }

    void acceptManager(){
        Employee::acceptData();
        cout<<"enter bonus - "<<endl;
        cin>>bonus;
        
    }
    void displayManager(){
        Employee::displayData();
        cout<<"Bonus - "<<bonus<<endl;
    }
};

class Salesman :  virtual public Employee{
    double commission;
    public:
    Salesman( ){
        this ->commission=10;
      
    }
    void setCommission(double commission){
        this->commission=commission;
    }

    Salesman(int id,double salary ,double bonus){
           this ->commission=commission;
       this->setId(id);
       this->setSalary(salary);
    }

    void acceptSalesman(){
        Employee::acceptData();
        cout<<"enter commission - "<<endl;
        
    }
    void displaySalesman(){
        Employee::displayData();
        cout<<"Bonus - "<<commission<<endl;
    }
};

class salesManager:  public Manager , Salesman{
public:
    salesManager()
{
  cout<<"salesmanages"<<endl;
}

salesManager(int id,double salary ,double bonus,double commission){
    this->setId(id);
    this->setSalary(salary);
    this->setBonus(bonus);
    this ->setCommission(commission);
}


void accept(){
   Employee::acceptData();
    Manager::acceptManager();
    Salesman::acceptSalesman();

}
void display(){
    Employee::displayData();
   // Manager::displayManager();
    Salesman::displaySalesman();
}

};
int main(){
 salesManager sm;
sm.accept();
sm.display();
//    Employee e1;
//    e1.acceptData();
//    e1.displayData();

//   Manager m1;
//   m1.acceptManager();
//   m1.displayManager();
 
}