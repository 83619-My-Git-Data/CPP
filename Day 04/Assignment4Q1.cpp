#include<iostream>
using namespace std;

class Stack
{
    private:
        int size;
        int top;
        int *ptr;
    public: 
    Stack(int size=5)
    {
        top = -1;
        this->size = size;
        ptr = new int[size];
    }

    void push(int element)
    {
       if(!isFull())
       {
           top++;
           ptr[top] = element;
       }
       else
           cout << "Stack OverFlow" << endl;
    }

    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }

    void pop()
    {
        if(!isEmpty())
        {
            top--;
        }
        else
            cout << "Stack Underflow" << endl;
    }
    int peek()
    {
        return ptr[top];
    }
    void print()
    { 
        if(top!=-1)
        {
        for (int i = 0; i <= top;i++)
        {
            cout << ptr[i] << endl;
        }
        }
        else
            cout << "Stack is empty" << endl;
    }
    ~Stack(){
        delete[] ptr;
        ptr = NULL;
    }
};

int main()
{
    Stack s;
    
    int element, choice;

    do{
        cout << "Press 0 to exit" << endl;
        cout << "Press 1 to push" << endl;
        cout << "Press 2 to pop" << endl;
        cout << "Press 3 to peek" << endl;
        cout << "Press 4 to print" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:{
                cout << "enter the element to be inserted" << endl;
                        cin>>element;
                s.push(element);
                }break;
            
            case 2: 
            {
                s.pop();
            }
            break;
            

            case 3:{
                cout << "The current element is " << endl;
                s.peek();
            }

                break;

            case 4:
                s.print();
                break;

            case 0:
                cout << "Thank You" << endl;
                break;
            }
    }
    while (choice != 0);
}