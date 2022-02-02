#include<iostream>

using namespace std;

bool linear_search(int *arr, int n, int key){
	if(n==0) return false;
	if(arr[0]==key) return true;
	return linear_search(arr+1, n-1,key);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	cout<<linear_search(arr,sizeof(arr)/sizeof(int),2);
	return 0;
}
