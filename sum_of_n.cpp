//Print sum of first n numbers
#include<bits/stdc++.h>
using namespace std;

int recursion(int n)
{
    if(n==0)
    return 0;
    return n+recursion(n-1);
}

int main()
{
    int ans=recursion(10);
    cout<<ans<<endl;
}