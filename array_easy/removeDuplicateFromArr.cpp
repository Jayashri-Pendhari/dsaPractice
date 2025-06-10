#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }

  map<int, int>mp;
  for(int i:v)
  {
    mp[i]++;
  }
  for(pair<int, int> p:mp)
  {
    cout<<p.first<<" ";
  }
//optimized code:
//   int removeDuplicates(int arr[], int n) {
//   set < int > set;
//   for (int i = 0; i < n; i++) {
//     set.insert(arr[i]);
//   }
//   int k = set.size();
//   int j = 0;
//   for (int x: set) {
//     arr[j++] = x;
//   }
//   return k;
// }

}