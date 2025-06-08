#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int flag=1;
  for(int i=2;i<sqrt(n);i++)
  //for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      flag=0;
      break;
    }
  }

  (flag==1)?cout<<"yes":cout<<"no";
  return 0;
}