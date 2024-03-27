/*A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product*/

#include <iostream>

using namespace std;

class Product
{
    int id;
    string title;
    double price;

public:
    virtual void accept()
    {
        cout << "Enter product id" << endl;
        cin >> id;
        cout << "Enter the title" << endl;
        cin >> title;
        cout << "Enter the price " << endl;
        cin >> price;
    }
    double getPrice()
    {
        return price;
    }
    virtual double getDiscount()=0;
    virtual void display()
    {

        cout << "Id -" << id << "\ttitle- " << title << "\tprice - " << price << endl;
        // partial complete function
        // todo to accept id,title,price;
    }
};
class Book : public Product
{
    string author;
    double bPrice;
    double dbprice;
    
    public:
    void accept()
    {
        cout << "Enter the author" << endl;
        cin >> author;
        Product::accept();
        bPrice = getPrice();
        // complete function by accepting author;
        // also reuse the function of Product(Base) class accept
        // give discount of 10% on price and update the price.use mutators and inspector for price
    }
    double getDiscount()
    {
        return bPrice - (bPrice * .10);
    }
    virtual void display()
    {
        cout << "author:- " << author << endl;
        Product::display();
        cout << "The discounted price is -" << dbprice;
        // complete function by displaying author;
        // also reuse the function of Product(Base) class display
    }
};
class Tape : public Product
{
    string artist;
    double dtprice;

    public:
    void accept()
    {
        cout << "Enter the artist " << endl;
        cin >> artist;
        Product::accept();
        // complete function by accepting artist
        // also reuse the function of Product(Base) class accept
        // give discount of 5% on price and update the price.use mutators and inspector for price
    }
    double getDiscount()
    {
        return getPrice() - (getPrice() * .05);
    }

    virtual void display()
    {
        cout << "\nartist - " << artist << endl;
        Product::display();
        cout << "\nThe discounted price is " << dtprice;
        // complete function by displaying artist;
        // also reuse the function of Product(Base) class display
        // todo to display artist;
    }
};
int main()
{
    Product *arr[3];
    int c;
    int index = 0;
    double total=0;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Enter book details" << endl;
        cout << "2. Enter tape details" << endl;
        cout << "3. Total bill of three products" << endl;
        cout << "4.The product details are " << endl;
        cin>>c;
        switch (c)
        {
        case 0:
            cout << "Thank you...!!!";
            break;
        case 1:
            if(index < 3)
            {
            arr[index] = new Book;
            arr[index]->accept();
            index++;
            }
            else
            cout<<"Array is full";
            break;
        case 2:
            if(index < 3){
            arr[index]=new Tape;
            arr[index]->accept();
            index++;}
            else
            cout<<"Array is full";
            break;
        case 3:
            for(int i=0;i<3;i++)
            {
                total +=arr[i]->getDiscount();
            }
            cout<<total<<endl;
            break;
        case 4:
            for(int i=0;i<3;i++)
            {
                arr[i]->display();
            }
            break;
        default :
            cout<<"wrong choice"<<endl;
            break;

        }
    } while(c!=0);

    for (int i = 0; i < index; i++)
        delete arr[i];
    return 0;
    
}