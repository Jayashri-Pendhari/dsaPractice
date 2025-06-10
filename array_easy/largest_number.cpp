#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int maxi=0;
  int mini=INT_MAX;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  //brute-force:
  // for(int i:v)
  // {
  //   maxi=max(i, maxi);
  //   mini=min(i, mini);
  // }
  maxi= v[n-1];
  mini=v[0];
  cout<<maxi<<endl<<mini;
  return 0;
}