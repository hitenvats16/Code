#include<iostream>

using namespace std;

bool binarySearch(int *arr,int s, int e, int k){
	if(s>e) return false;
	int m=s+(e-s)/2;
	if(arr[m]==k) return true;
	if(arr[m]>k) return binarySearch(arr,s,m-1,k);
	else return binarySearch(arr,m+1,e,k);
}

int main(){
	int arr[] = {1,2,3,4,5,7,8,9};
	cout<<binarySearch(arr,0,9,9);
	return 0;
}
