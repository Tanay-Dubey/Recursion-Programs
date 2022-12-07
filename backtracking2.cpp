//Print n to 1 using backtracking
#include<bits/stdc++.h>
using namespace std;

void recursion(int i,int n)
{
    if(i>n)
    return;
    recursion(i+1,n);
    cout<<i<<endl;
}

int main()
{
    int n=10;
    recursion(1,n);
    return 0;
}