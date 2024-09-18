#include<iostream>
using namespace std;
class Base{
public :

void display()
{
    cout<<"Hi Babes!"<<endl;
}

};
class Derived : public Base {

void display()
{
    cout<<"Helloe Harshiiii"<<endl;

}

};


int main()
{
  Base *t = new(Base);
  Derived d;
  t=&d;
  t->display();


    return 0;
}