#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &v, int s, int e){
	int mid = (s+e)/2;
	vector<int> first,second;
	for(int i=s; i<=mid; i++) first.push_back(v[i]);
	for(int i=mid+1; i<=e; i++) second.push_back(v[i]);
	int i=0, j=0;
	int n=first.size(), m=second.size();
	int ind = s;
	while(i<n and j<m){
		if(first[i] > second[j]) v[ind++] = second[j++];
		else v[ind++] = first[i++]; 
	}
	while(i<n) v[ind++] = first[i++];
	while(j<m) v[ind++] = second[j++];
}

void mergesort(vector<int> &v, int s, int e){
	if(s>=e) return;
	int mid = s+(e-s)/2;
	mergesort(v,s,mid);
	mergesort(v,mid+1,e);
	merge(v,s,e);
}

int main(){
	vector<int> v = {21,54,87,35,9,454,8,4542,48,454,587,4,4,588,748,41,848454,5,45,45,45,4,545,4};
	mergesort(v,0,v.size()-1);
	cout<<"Sorted Array: ";
	for(auto i: v) cout<<i<<" ";
	return 0;
}
