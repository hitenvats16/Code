#include<iostream>

using namespace std;

long double sqrt(int n, int p){
    int s=0;
    int e=n;
    double root=0.0;
    while(s<e){
        int m=s+(e-s)/2;
        if(m*m==n) return m;
        else if(m*m>n) e=m-1;
        else{
            root=m;
            s=m+1;
        }
    }
    double incr=0.1;
    while(p--){
        while(root*root<n) root+=incr;
        root-=incr;
        incr*=0.1;
    }
    return root;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<sqrt(n,p);
}