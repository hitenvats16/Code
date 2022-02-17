#include<bits/stdc++.h>

using namespace std;

// vector<pair<int,int>> helper(vector<int> vec, int target){
//     unordered_map<int,int> mp;
//     vector<pair<int,int>> res;
//     int ind=-1;
//     for(auto i: vec){
//         ++ind;
//         if(mp.find(target-i)==mp.end()) mp.insert({i,ind});
//         else {
//             res.push_back({i,target-i});
//         }
//     }
//     return res;
// }

int main(){
    vector<int> vec = {2,5,9,8,1};
    int target = 10;
    vector<pair<int,int>> res;
    sort(vec.begin(),vec.end());
    int lp=0,rp=vec.size()-1;
    while(lp<rp){
        int sum = vec[lp]+vec[rp];
        if(sum==target){
            res.push_back({vec[lp],vec[rp]});
            lp++;
            rp--;
        } else if(sum>target) rp--;
        else lp++;
    }
    for(auto i: res){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
