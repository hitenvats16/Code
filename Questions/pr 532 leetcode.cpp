#include<bits/stdc++.h>

using namespace std;

// using Binary search

bool search(vector<int> &vec, int s, int e, int target){
    while(s<=e){
        int m= s+(e-s)/2;
        if(target == vec[m]) return true;
        else if(target > vec[m]) s=m+1;
        else e=m-1;
    }
    return false;
}    
int solution1(vector<int>& nums, int k) {
    int counter = 0;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n-1; i++){
        if(search(nums,i+1,n-1,k+nums[i])) counter++;
        while(nums[i]==nums[i+1]) i++;
    }
    return counter;
}

//using hash maps ( TOTALLY CORRECT )

int solution2(vector<int>& nums, int k) {
       int n= nums.size();
       int count=0;
       unordered_map<int, int>mp;
       for(auto x: nums) mp[x]++;
       if(k==0){
           for(auto x:mp){
               if(x.second>1) count++;
           }
       } else {
           for(auto x:mp){
               x.second--;
               if(mp.count(x.first-k)) count++;
               x.second++;
           }
       }
       
       return count;
   }

int main(){
    vector<int> nums={1,1};
    cout<<solution1(nums,0);
}