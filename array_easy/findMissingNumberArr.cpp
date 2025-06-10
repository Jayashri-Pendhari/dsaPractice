#include<bits/stdc++.h>
using namespace std;
 int main(){
  int n;
  cin>>n;

  vector<int>v(n);
  for(int i=1; i<=n; i++)
  {
    cin>>v[i];
  }
  // for(int i=1; i<=n; i++)
  // {
  //   if((i) !=v[i])
  //   {
  //     cout<<i;
  //     break;
  //   }
  // }
  for(int i=1; i<=n; i++)
  {
    if(v[i]+1 != v[i+1])
    {
      cout<<v[i]+1;
      break;
    }
  }
  
 }
