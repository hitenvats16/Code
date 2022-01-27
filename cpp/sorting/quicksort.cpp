#include<iostream>

using namespace std;

int partition(int arr[] ,int s,int e){

	int pivot = arr[s];
	int cnt=0;
	for(size_t i=s+1; i<=e; i++)
		if(arr[i]<pivot) cnt++;
	int pivotind=s+cnt;
	swap(arr[s],arr[pivotind]);
	int i=s,j=e;
	while(i<pivotind and j>pivotind){
		while(arr[i]<pivot) i++;
		while(arr[j]>pivot) j--;
		if(i<pivotind and j>pivotind)
			swap(arr[i++],arr[j--]);
	}
	return pivotind;

}

void quicksort(int arr[], int s, int e){

	if(s>=e) return ;
	int p = partition(arr,s,e);
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);

}

int main(){
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int n=sizeof(arr)/sizeof(int);
	quicksort(arr,0,n-1);
	for(auto i: arr) cout<<i<<" ";
	return 0;
}
