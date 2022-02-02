#include <bits/stdc++.h>

using namespace std;

void reverseSort(vector<int> &arr, vector<int> &brr, int n, int m)
{
    int ind=0;
    for(int i=0; i<m; i++){
        int elem = brr[i];
        while(find(arr.begin()+ind,arr.end(),elem)!=arr.end()){
            swap(arr[ind],arr[find(arr.begin()+ind,arr.end(),elem)-arr.begin()]);
            ind=ind+1;
        }
    }
    sort(arr.begin()+ind, arr.end());
    
}

int main()
{
    vector<int> arr = {1, 8, 1, 6};
    vector<int> brr = {1, 9, 6,7};
    reverseSort(arr,brr,arr.size(),brr.size());
    for(auto i: arr) cout<<i<<" ";
    return 0;
}