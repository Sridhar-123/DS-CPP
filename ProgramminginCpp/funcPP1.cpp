#include <iostream>
using namespace std;
int sumeven(int n){
    int sum=0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {//i=2
      sum += i; // sum=0+2=2
    }
  }
  return sum;
}


int main() {
    //Write your code here
    int num;
    cin>>num;
    cout<<sumeven(num);

    return 0;
}