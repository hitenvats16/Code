#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &vec,int s, int e){
	int m=(s+e)/2;
	int i=s, j=m+1;
	vector<int> temp;
	while(i<=m and j<=e){
		if(vec[i]<vec[j]) temp.push_back(vec[i++]);
		else temp.push_back(vec[j++]);
	}	
	while(i<=m) temp.push_back(vec[i++]);
	while(j<=e) temp.push_back(vec[j++]);
	i=0;
	for(int j=s; j<=e; j++){
		vec[j] = temp[i++];
	}
}

void mergeSort(vector<int> &vec, int s, int e){
	if(s>=e) return;
	int m= (s+e)/2;
	mergeSort(vec,s,m);
	mergeSort(vec,m+1,e);
	merge(vec,s,e);
}

int main(){
	vector<int> vec = {21,65,98,5};
	int n=vec.size();
	mergeSort(vec,0,n-1);
	for(auto i: vec) {
		cout<<i<<" ";
	}
}
