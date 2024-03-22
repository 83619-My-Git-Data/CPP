// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.
#include<iostream>
using namespace std;

class cylinder
{
        int radius;
        int height;
        const double PI = 3.14;

    public:
        cylinder()
        {
            radius = 10;
            height = 10;

        }   

        cylinder(int radius,int height)
        {
            this ->radius = radius;
            this ->height = height;

        }
        
        void setRadius(int r)
        {
            radius = r;
        }
        int getRadius()
        {
            return radius;
        }
        
        
        void setHeight(int h)
        {
            height = h;
        }
        int getHeight()
        {
            return height;
        }
        void display()
        {
            int volume;
            volume = PI*height*radius*radius;
            cout<<"volume of cylinder"<<volume<<endl;
        }
};
int main()
{    
    cylinder c1;
    cylinder c2(20,20);
    c1.setRadius(20);
    c1.setHeight(20);
    c1.getRadius();
    c1.getHeight();
    

    c1.display();
    c2.display();
    return 0;
}