#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,gcd;
  cin>>a>>b;
  for(int i=1;i<=a;i++)
  {
    if(a%i==0 && b%i==0){
      gcd = i;
    }
  }
  cout<<(a*b)/gcd;
  return 0;
}