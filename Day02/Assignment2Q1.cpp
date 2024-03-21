#include <iostream>

using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    Box()
    {
        length = 10;
        breadth = 20;
        height = 30;
    }
    Box(int value)
    {
        length = value;
        breadth = value;
        height = value;
    }
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double calculateArea()
    {
        return length * breadth * height;
    }
};

int main()
{

    // Box b1;
    int v, l, b, h;
    int c;
    // Box b2(v);
    // Box b3(l,b,h);
    do
    {
        cout << "  //-----------------------------------------------------------------------------//\n";
        cout << "Enter your choice where \n 0. Exit \n 1. To enter single value for all sides \n 2. Enter different values for l,b,h \n";
        cin >> c;
        switch (c)
        {
        case 0:
            cout << "------------\nThank you anyways\n";
            break;
        case 1:
        {
            cout << "----------\nEnter the value you want the cube of\t";
            cin >> v;
            Box b2(v);
            cout << "---------\nThe volume is : " << b2.calculateArea() << "\n";
            break;
        }
        case 2:
        {
            cout << "----------\nEnter the values of l,b,&h  \t\n";
            cin >> l >> b >> h;
            Box b3(l, b, h);
            cout << "---------\nThe volume is : " << b3.calculateArea() << "\n";
            break;
        }
        default:
            cout << "Wrong choice\n";
            break;
        }

    } while (c != 0);
}
