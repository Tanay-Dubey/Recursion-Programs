//Print nth fibonacci

#include<bits/stdc++.h>
using namespace std;

int recursion(int n)
{
    if(n<=1)
    {
        return n;
    }
    int ans=recursion(n-1)+recursion(n-2);
    return ans;
}

int main()
{
    cout<<recursion(6);
    return 0;
}