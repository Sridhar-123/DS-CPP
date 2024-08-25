#include <iostream>
using namespace std;

class Employee{
    private :
     int salary;
     string name;
     public:
    void set(int s,string n)
    {
        salary = s;
        name = n;
    }
    void get()
    {
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};

int main()
{
    Employee* obj = new Employee();
    obj->set(100,"Sridhar");
    obj->get();
    return 0;
}