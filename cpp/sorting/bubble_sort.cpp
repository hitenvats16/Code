#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v={1,7,34,76,23,8,4,87,23};
  int n = v.size();
  for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    }
  }
  cout<<"Sorted Array: ";
  for(int i: v) cout<<i<<" ";
  return 0;
}
