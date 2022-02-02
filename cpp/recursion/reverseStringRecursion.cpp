#include<iostream>
#include<string> 
using namespace std;

void reverse(string &str, int s, int e){
	if(s>e) return ;
	swap(str[s],str[e]);
	reverse(str,++s,--e);
}

int main(){
	string str = "HitenVats";
	reverse(str,0,str.length()-1);
	cout<<str;
	return 0;
}
