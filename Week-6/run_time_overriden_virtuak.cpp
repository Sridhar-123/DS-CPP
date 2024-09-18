#include<iostream>
using namespace std;
class Base{
public:

virtual void display()
{
    cout<<"Helloooooo"<<endl;
}

 virtual ~Base(){}
};

class Derived:public Base{
public:
void display() override
{

    cout<<"Harshiiii"<<endl;
}

};


int main()
{
  Base *B = new(Base);
  Derived d;
  B = &d;
  B->display(); 

    return 0;
}