#include<bits/stdc++.h>

using namespace std;

int getSum(vector<int> vec){
    int sum=0;
    for(auto i: vec) sum+=i;
    return sum;
}

void helper(vector<int> vec, int target, vector<vector<int>> &res, vector<int> output, int i=0){
    if(i==vec.size()) return;
    if(getSum(output)==target){
        res.push_back(output);
        output.pop_back();
        helper(vec,target,res,output,i+1);
        return;
    }
    helper(vec,target,res,output,i+1);
    output.push_back(vec[i]);
    helper(vec,target,res,output,i+1);
}

vector<vector<int>> SumSubset(vector<int> vec, int target){
    vector<vector<int>> res;
    vector<int> output;
    helper(vec,target,res,output);
    return res; 
}

int main(){
    vector<int> vec = {10,6,11,5};
    int target = 16;
    vector<vector<int>> res = SumSubset(vec,target);
    for(auto i: res){
        cout<<"[ ";
        for(auto j: i) cout<<j<<" ";
        cout<<"]"<<endl;    
    }
}