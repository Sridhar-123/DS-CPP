#include<iostream>
using namespace std;
// Class is also in form of template which we give the our required things 

// Actually Class is a User Defined Data Type And Int,bool are inbuilt data type and for int a u can say that a is an instance of class int
// so assuming that broader picture here the Object is created which is the actual model and it is also called the instance of the class 
class Hero{
    // Properties
    public :
int health;
char g;
float f;
bool gr; 
Hero(){
cout << health<<f<<gr<<g<<endl;
// if we dont initialise then there will storage of garbage value in that variables in that container
}

};

int main()
{
    Hero a;
  cout<<"Size:"<<sizeof(a)<<endl;
  // Here the Object return the total size occupied by the Data mem or Properties
}