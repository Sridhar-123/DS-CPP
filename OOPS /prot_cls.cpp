#include <iostream>
using namespace std;
class  Demo {
 protected:
int var;

};

class Derived : public  Demo{
    public : 
void setVal(int a){
  var = a;
}
int getVal(){
    return var;
}
};

int main()
{
    
   Derived hhj;
   hhj.setVal(3);
   cout<<hhj.getVal(); 
    return 0;

}