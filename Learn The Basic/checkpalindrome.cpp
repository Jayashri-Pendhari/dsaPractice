#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  string org=s;
  int left=0;
  int right=s.size()-1;
  int flag=1;
  while(left<right){
    if(s[left]==s[right])
    {
    //swap(s[left],s[right]);
    left++;
    right--;

    }
    else{
      flag=0;
      break;
    }
  }

  (flag==1)?cout<<"yes":cout<<"no";
  return 0;
}