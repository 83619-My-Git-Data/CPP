#include<iostream>
using namespace std;

class Tollbooth
{
private:
    int carstotal;
    double amount;

public:

    Tollbooth()
    {
        carstotal=0;
        amount=0;
    }
    void payingCar()
    {
        carstotal++;
        amount+=0.50;
    }

    void nopayCar()
    {
        carstotal++;
    }
    void printOnConsole()
    {
        cout<<"The total number of cars is - "<<carstotal<<endl;
        cout <<"The total amount recieved is - "<<amount<<endl;

    }

};

int main()
{
    int choice;
    Tollbooth t1;

    do{
    cout<<"0.Exit\n1. The car paid\n2. The car did not pay\n3. Check the details\nEnter your choice"<<endl;
    cin>>choice;

    switch(choice){
        
    case 0:
            cout << "Thank you! \n" <<endl;
            break;

    case 1:
            t1.payingCar();
            cout<<"SAVED"<<endl;
            break;
    case 2:
            t1.nopayCar();
            cout<<"SAVED"<<endl;
            break;

    case 3:
            t1.printOnConsole();
            break;
   
    default:
        cout<<"Wrong choice\n"<<endl;
        break;

    }
    }while(choice!=0);
    return 0;
}
