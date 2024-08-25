#include <iostream>
using namespace std;

class Employee{
   private :
  int health;

   public:
Employee (int health){
this-> health = health;
  cout<<health<<endl;
}

   void set(){
   cout<<health+7;
    
   }
};


int main(){
Employee health(8);
health.set();

return 0;
   }

