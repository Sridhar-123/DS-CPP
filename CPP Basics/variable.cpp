#include <iostream>
using namespace std;
int k=15; // k is a global variable.
void fun()
{
    int val=10;
    cout<<k<<endl;
    cout<<val<<endl;
    
}
// 
#include <iostream>
using namespace std;
//initialising a function
void fun()
{
    int val=10;
    cout<<val<<endl;
    
}
//
#include <iostream>
using namespace std;
void fun()
{
    int k=15;
    static int val=10; // val is a static variable
    cout<<k<<endl;
    cout<<val<<endl;
    val++;
    k++;
}
