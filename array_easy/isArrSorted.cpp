#include<bits/stdc++.h>
using namespace std;
 int main(){
  int n;
  cin>>n;
  int flag=0;
  vector <int> v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  vector <int> v1 = v;
  //commented-brute force:
  //sort(v.begin(),v.end());
  for(int i=1;i<n; i++)
  {
     if(v[i]<v[i-1])
    {
      flag=1;
      break;
    }
    // if(v[i]!=v1[i])
    // {
    //   flag=1;
    //   break;
    // }
  }
  // for(int i=0; i<n; i++)
  // {
  //   for(int j=i+1; j<n; j++)
  //   {
  //     if(v[i]<v[j])
  //     {
  //       flag=1;
  //     }
  //     else{
  //       flag=0;
  //       break;
  //     }
  //   }
  // }
  (flag==0)?cout<<"yes":cout<<"no";
 }