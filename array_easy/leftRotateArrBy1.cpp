//left rotate array by k 
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 1; i <= k; i++)
  {
    int temp = v[0];
    for (int i = 0; i < n; i++)
    {
      v[i] = v[i + 1];
    }

    v[n - 1] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    cout << v[i];
  }
}