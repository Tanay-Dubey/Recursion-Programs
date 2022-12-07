#include<bits/stdc++.h>
using namespace std;

void recursion1(int i,int j,vector<int>&v)  //1st method
{
    if(j-i<=0)
    return ;
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    recursion1(i+1,j-1,v);
}

vector<int>recursion2(int i,int j,vector<int>v)  //2nd method   
{
    if(j-i<=0)
    return v;
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    return v=recursion2(i+1,j-1,v);
}

int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    vector<int>t=v;
    recursion1(0,6,v); 
    for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>ans=recursion2(0,6,t);
    for(int i=0;i<7;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}