#include<iostream>
using namespace std;

class Employee{
    public:
    int r,g;
Employee(int m,int n)
{
    r=m;
    g=n;
    cout<<r<<g;
}
};

int main()
{   // Explicit CAll
    // Employee g=Employee(2,4);
     // Implicit CAll ,Also SHortHAnd Method
     Employee g(2,6);
    
    return 0;
}