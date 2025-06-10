#include<bits/stdc++.h>
using namespace std;
 int main(){
  int n, temp;
  cin>>n>>temp;
  
  vector<int> v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  for(int i=0; i<n; i++)
  {
    if(temp==v[i])
    {
      cout<<i;
    }
  }

  return 0;

 }