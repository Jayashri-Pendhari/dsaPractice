#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int secMax= INT_MIN;
  int maxi= INT_MIN;
  vector<int>v(n);
  for(int i=0; i<n;i++)
  {
    cin>>v[i];
  }
  
  for(int i=0; i<n; i++)
  {
    if(v[i]>maxi)
    {
      secMax=maxi;
      maxi=v[i];
    }
    else if(v[i]!=maxi&& v[i]>secMax)
    {
      secMax=v[i];
    }
  }
  cout<<secMax;
  //brute force:
  // sort(v.begin(),v.end());
  // for(int i=n-1; i>0; i--)
  // {
  //   if(v[i]!=v[i-1])
  //   {
  //     maxi=v[i-1];
  //     break;
  //   }
  // }
  //cout<<maxi;
  return 0;
}
