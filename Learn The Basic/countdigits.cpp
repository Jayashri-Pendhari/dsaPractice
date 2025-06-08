#include<bits/stdc++.h>
using namespace std;

int main(){
  //Brute Force =>
  // string num;
  // cin>>num;

  // int count= num.size();
  // cout<<count;
  
  int n;
  cin>>n;
  int count=0;
  while(n>0)
  {
    count++;
    n=n/10;
  }

  cout<<count;
  return 0;
}