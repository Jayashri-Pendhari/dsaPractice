#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin>>s;
  int left=0;
  int right=s.size()-1;
  string temp;

  while(left<right)
  {
    swap(s[left],s[right]);
    left++;
    right--;

  }
  cout<<s;

  //In-built reverse =>
  // string s;
  // cin>>s;
  // reverse(s.begin(),s.end());
  // cout<<s;

  // int n;
  // cin>>n;
  // int rev=0;
  // while(n>0)
  // {
  //   int ld=n%10;
  //   rev=(rev*10)+ld;
  //   n=n/10;
  // }
  // cout<<rev;
  // return 0;
}