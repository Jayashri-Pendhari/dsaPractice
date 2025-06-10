#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int m, k;
  cin >> m;

  vector<int> v(n);
  vector<int> v1(m);
  // vector<int>union_v(k);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> v1[i];
  }
  map<int, int> mp;
  for (int i : v)
  {
    mp[i]++;
  }
  for (int j : v1)
  {
    mp[j]++;
  }
  for (pair<int, int> p : mp)
  {
    cout << p.first;
  }
}