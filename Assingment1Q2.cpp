#include<iostream>

using namespace std;


struct Date
{
    int day;
    int month;
    int year;
};
class Dated{
    struct Date d1;
    public:
    void initDate(){
        d1.day=19;
        d1.month=03;
        d1.year=2024;
    }
    void printDateOnConsole(){
        cout<<"The date is "<<d1.day<<"-"<<d1.month<<"-"<<d1.year;
        cout<<"-------------------------------------------------------------------------------------------------------------------------------";
    }
    void acceptDateOnConsol(){
        cout<<"Enter the date you want to Enter in days<32 month<12 and year";
        cin>>d1.day>>d1.month>>d1.year;
        cout<<"Noted!!!, caution the initial date has been changed to your date";
        cout<<"-------------------------------------------------------------------------------------------------------------------------------";
    }
    bool leapyear(){
        if((d1.year%4 == 0 && d1.year%100 !=0) || (d1.year%400 == 0))
        
            return true;
        
        else
            return false;
        
    }

};

int main()
{    
    bool b;
    Dated d1;
    d1.initDate();
    int choice;
    do{
    printf("Enter your choice \n '0' for Exit\n '1' for print initital date\n '2' for Giving your date \n '3' for printing your date \n '4' for finding leap year\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0 :
            printf("Thank you anyways\n");            
        break;
    case 1:
            d1.printDateOnConsole();
        break;
    case 2:
            d1.acceptDateOnConsol();
            break;
    case 3:
            d1.printDateOnConsole();
            break;
    case 4:
            b = d1.leapyear();
            if (b=1){
            cout<<"leap year\n";}
            else{
            cout<<"not leap year\n";}
            break;
            
        default:
            cout<<"wrong choice\n";
        break;
    }
   }
    while(choice!=0);
    return 0;
}
