#include<iostream>

using namespace std;

bool isSorted(int *arr,int n){
	if(n==1 or n==0) return true;
	if(arr[0]>arr[1]) return false;
	return isSorted(arr+1,n-1);
}

int main(){
	int arr[] = {1,2,3,4,89,6,8,9};
	cout<<isSorted(arr,sizeof(arr)/sizeof(int));
	return 0;
}
