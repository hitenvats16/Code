#include<bits/stdc++.h>

using namespace std;

int numberofjumps(int n, int i){
	if(n<=2) return 1;
	return numberofjumps(n-1)+numberofjumps(n-2);
}

int main(){
	int n;
	cout<<"Enter number of stairs: ";
	cin>>n;
	cout<<"Number of ways: "<<numberofjumps(n);
	return 0;
}
