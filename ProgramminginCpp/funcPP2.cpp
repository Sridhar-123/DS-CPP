#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int temp(int S){
    int C;
    C = (S-32)*5/9;
    
   return C;

}


int main() {
    //Write your code here
    // C = (F-32)*5/9;
    int S,E,W;
    int res;
    cin>>S;
    cin>>E;
    cin>>W;
 while(S<E){
     
     res = temp(S);
     cout<<S<<" "<<res<<endl;
     S+=W;
 }




    return 0;
}