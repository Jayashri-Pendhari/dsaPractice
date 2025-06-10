#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;

  int len = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += v[j];
      if (sum == k)
      {
        len = max(len, j - i + 1);
      }
    }
  }
  cout << len;
}