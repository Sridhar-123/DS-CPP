#include <iostream>
using namespace std;
class Private{
private : int privateD;
public:
     void setValue(int P){
        privateD = P;
     }
     int getValue(){
        return privateD;
     }

};


int main()
{
 Private p;
 p.setValue(200);
cout<<p.getValue();
    return 0;
}