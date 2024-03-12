#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    //Write your code here
    cin>>a>>b>>c;
    int res=(a>b&&a>c)?a:(b>c)?b:c;
    cout<<res;

    return 0;
}