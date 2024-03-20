#include<stdio.h>

struct Date
{
   int day;
   int month;
   int year;

};

void initDate(struct Date* ptrDate)
{
    ptrDate->day= 19;
    ptrDate->month= 03;
    ptrDate->year= 2024;
    printf("------------------------------------------------------------------------------------------------------\n");
}

void printDateOnConsole(struct Date* ptrDate)
{
 printf("The Date is %d - %d - %d \n",ptrDate->day,ptrDate->month,ptrDate->year);
     printf("------------------------------------------------------------------------------------------------------\n");

}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the date you want to display in day <32 month <12 and year\n");
    scanf("%d\t%d\t%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
    printf("Noted!! caution Inital date has been set to your date\n");
    printf("------------------------------------------------------------------------------------------------------\n");

}

int main()
{
    struct Date MyDate;
    int choice;
    initDate(&MyDate);
    
   
   do{
    printf("Enter your choice \n '0' for Exit\n '1' for print initital date\n '2' for Giving your date \n '3' for printing your date \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0 :
            printf("Thank you anyways\n");            
        break;
    case 1:
            printDateOnConsole(&MyDate);
        break;
    case 2:
            acceptDateFromConsole(&MyDate);
            break;
    case 3:
            printDateOnConsole(&MyDate);
            break;
     default:
            printf("wrong choice");
        break;
    }
   }
    while(choice!=0);
    return 0;
}