#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec = {0,1,2,1,0,0,1};
    int ones = 0;
    for(auto i: vec){
        if(i==1) ones++;
    }
    int maxSum=INT_MIN, ind;
    int zeroes=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == 0) zeroes++;
        else if(vec[i]==1) ones--;
        if(maxSum < zeroes+ones){
            maxSum = zeroes+ones;
            ind = i;
        }
    }
    cout<<"Power: "<<maxSum<<" index: "<<ind;
}