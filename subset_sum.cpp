//Given a list of integers, print sums of all subsets in it. Output should be printed in increasing order of sums.
//n=2
//arr=[2,3]
//0 2 3 5

#include <bits/stdc++.h>
using namespace std;

void recursion(int a[], int index, int n, set<int>&ans,int sum)
{
    if(index==n)
    {
        ans.insert(sum);
        return ;
    }
    recursion(a,index+1,n,ans,sum+a[index]);
    recursion(a,index+1,n,ans,sum);
}

int main()
{
    int arr[] = {5,2,1};
    int n=3;
    set<int>ans;
    recursion(arr, 0, n,ans,0);
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
}