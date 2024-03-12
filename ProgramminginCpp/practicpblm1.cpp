#include<iostream>
using namespace std;

int main() {
  // Write your code here
  char a;
  cin>>a;
  if(isupper(a)){
    cout<<1;
  }
  else if (islower(a)){
	  cout<<0;
  }
  else if (!isalpha(a)){
	  cout<<-1;
  }

}

