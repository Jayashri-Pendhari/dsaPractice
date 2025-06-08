#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,temp;
  cin>>a>>b;
  for(int i=1;i<=a;i++)
  {
    if(a%i==0 && b%i==0){
      temp = i;
    }
  }
  cout<<temp;
  return 0;
}