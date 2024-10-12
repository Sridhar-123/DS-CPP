#include<iostream>
using namespace std;
// c1.Add(c2); c1 = c1+

class complex{
    int real,img;
    public:
    complex(){
        
    }
     complex(int r,int i):real(r),img(i){
         cout<<real<<"+"<<img<<"i"<<endl;
     }
     complex Add(complex t){
        complex temp;
        temp.real = real+t.real;
        temp.img = img + t.img;
        cout<<temp.real<<"+++++"<<temp.img<<"i"<<endl;
        return temp;

     }
     void print(){
                 cout<<real<<"++"<<img<<"i"<<endl;

     }
    
    
};

int main(){
    complex c1(2,5);
    complex c2(7,9);
    complex c3;
    c3=c2.Add(c1);
    c3.print();
    
    return 0;
}