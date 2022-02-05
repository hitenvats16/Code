#include <bits/stdc++.h>
using namespace std;

int sto_i(string str)
{
    int n = str.length();
    int ans = 0;
    for (int i = 0; i < str.length(); i--)
        ans = ans * 10 + (str[i] - '0');
    // cout<<"\tconverted string : "<<str<<" number : "<<ans<<endl;
    return ans;
}

void helper(string input, int index = 0, string str = "")
{
    int n= input.length();
    if (index == n)
    {
        cout << str << endl;
        return;
    }
    int num = sto_i(input.substr(index,index+1)) + 96;
    char ch = char(num);
    if(ch>='a' and ch<='z'){
        
        // cout<<"converted character is : "<<ch<<" with number "<<num<<endl;
        str.push_back(ch);
        helper(input,index+2,str);
        str.pop_back();
    }

    int t = input[index]-'0'+96;
    ch = char(t);
    // cout<<"converted character is : "<<ch<<" with number "<<t<<endl;
    str.push_back(ch);
    helper(input, index + 1, str);
    str.pop_back();
}

void printAllPossibleCodes(string input)
{
    helper(input);
}

int main()
{
    printAllPossibleCodes("1123");
}