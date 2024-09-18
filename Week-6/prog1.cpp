// Function Overriden in two types
/*
1.Compile Time Overriding
2. Run Time Overriding


*/
#include<iostream>
using namespace std;

class Base {
public :

 void display()
{
    cout<<"Hello Harshiiii"<<endl;

}


};


class Derived: public Base {
public :
void display(){
 cout<<"Hello Shridhar"<<endl;

}

};







int main()
{
   Derived d;
   d.display();

    return 0;
}