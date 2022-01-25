# include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v = {12,43,12,0,65,34,3,423,231,24,34};
	int n = v.size();
	for(int i=0; i<n; i++){
		int min_ind=i;
		for(int j=i+1; j<n; j++)
			if(v[min_ind]>v[j]) min_ind=j;
		swap(v[i],v[min_ind]);
	}	
	cout<<"Sorted Array: ";
	for(int i: v) cout<<i<<" ";
	return 0;
}
