#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=51;
    vector<bool> vec(n+1,false);
    for(int i=1; i*i<=n; i++){
        if( n%i == 0 ){
            vec[i]=true;
            vec[n/i]=true;
        }
    }
    for(int i=1; i<=(n+1); i++)
    if(vec[i]) cout<<i<<endl;
}