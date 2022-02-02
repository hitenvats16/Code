#include<bits/stdc++.h>

using namespace std;

void helper(vector<int> vec, vector<int> temp, vector<vector<int>> &res, int i){
    if(i==vec.size()){ res.push_back(temp); return; }
    temp.push_back(vec[i]);
    helper(vec,temp,res,i+1);
    temp.pop_back();
    helper(vec,temp,res,i+1);
}

vector<vector<int>> powerset(vector<int> vec){
    vector<int> temp;
    vector<vector<int>> res;
    int i=0;
    helper(vec,temp,res,i);
    return res; 
}

int main(){
    vector<int> vec = {1,2,3};
    vector<vector<int>> res = powerset(vec);
    for(auto i: res){
        for(auto j:i) cout<<j<<' ';
        cout<<endl;
    return 0;
}