#include<iostream>
using namespace std;

class Base{
public:
Base()
{
    cout<<"Helllooooo"<<endl;
}

};
class Derived : public Base{
    public:
    Derived(){
        cout<<"DErived Class";
    }


};




int main()
{
    Derived d;


    return 0;
}