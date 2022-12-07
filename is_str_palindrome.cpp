//Check if the string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool recursion(string s,int i,int j)
{
    if(j-i<=0)
    {
        return true;
    }
    return (s[i]==s[j]) && recursion(s,i+1,j-1);
}

int main()
{
    string s="abcedcba";
    bool ans=recursion(s,0,s.length()-1);
    cout<<ans<<endl;
    return 0;
}