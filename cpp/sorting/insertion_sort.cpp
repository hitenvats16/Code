#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v = {32,543,23,5,476,7,2335,457,23,2};
	int n=v.size();
	for(int i=1; i<n;i++){
		int key=v[i];
		int j=i;
		while(key<=v[j] and j>0) {
			v[j]=v[j-1];
			j--;
		}
		v[j]=key;
	}
	cout<<"Sorted Array: ";
	for(int i: v) cout<<i<<" ";
	return 0;
}
