//Print 1 to n using backtracking
#include<bits/stdc++.h>
using namespace std;

void recursion(int i,int n)
{
    if(i==0)
    return ;
    recursion(i-1,n);
    cout<<i<<endl;
}

int main()
{
    int n=10;
    recursion(10,10);
    return 0;
}