//Approach 1:Using extra space
//Print all permutations of given array

#include<bits/stdc++.h>
using namespace std;

void recursion(int a[],int n,vector<bool>isPresent,vector<int>v,vector<vector<int>>&ans)
{
    if(v.size()==n)
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isPresent[i]==false)
        {
            isPresent[i]=true;
            v.push_back(a[i]);
            recursion(a,n,isPresent,v,ans);
            isPresent[i]=false;
            v.pop_back();
        }
    }
}

int main()
{
    int a[]={1,2,3};
    int n=3;
    vector<bool>isPresent(n,false);
    vector<int>v;
    vector<vector<int>>ans;
    recursion(a,n,isPresent,v,ans);
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