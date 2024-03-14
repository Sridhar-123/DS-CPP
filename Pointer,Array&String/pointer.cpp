#include<iostream>
using namespace std;
int main(){
  int a=10;
  int *ptr;
  ptr=&a;
  int **q;
  q=&ptr;
  cout<<q<<endl; // &p
  cout<<*q<<endl;// &p=&a
  cout<<**q<<endl; // a
  return 0;
  
  
}

// 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
  int arr[]={10,20,30,40,50,60,70,80,90,100};
  cout<<arr<<endl;
  cout<<*arr<<endl;
  int *ptr = arr; // ptr = arr = *&arr[0]
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  for(char i=0;i<10;i++){
    cout<<(ptr+i)<<endl; //ptr+i=arr+i=*(arr+i)=*(arr+i)=arr[i]
    


    
  }

  
    return 0;
}