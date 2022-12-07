//Print 1 to n linearly using recursion

#include<iostream>
using namespace std;

void recursion(int i,int n)
{
    if(i>n)
    return;
    cout<<i<<endl;
    recursion(i+1,n);
}

int main()
{
    int n=10;
    recursion(1,n);
    return 0;
}