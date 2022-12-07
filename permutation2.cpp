//Approach 2:Without extra space
//Print all permutations of given array

#include<bits/stdc++.h>
using namespace std;

void recursion(vector<int>a,int n,int index,vector<vector<int>>&ans)
{
    if(index==n)
    {
        ans.push_back(a);
        return;
    }
    for(int i=index;i<n;i++)
    {
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;

        recursion(a,n,index+1,ans);

        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}

int main()
{
    vector<int>a={1,2,3};
    int n=3;
    vector<vector<int>>ans;
    recursion(a,n,0,ans);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}