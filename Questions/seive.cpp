#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=40;
    vector<bool> vec(n+1,true);
    for(int i=2; i*i<=n; i++){
        if(vec[i]){
            for(int j=2*i; j<=n; j=j+i) vec[j]=false;
        }
    }
    for(int i=2; i<=(n); i++) 
    if(vec[i]) cout<<i<<endl;
}