#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int pow(int a,int b){
    int res=1;
     for(int i=1;i<=b;i++){
     res*=a;
     }
     return res;
}


int main() {
    //Write your code here
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}