//Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
//The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.
//Input: candidates = [2,3,6,7], target = 7
//Output: [[2,2,3],[7]]

#include <bits/stdc++.h>
using namespace std;

void recursion(int a[], int index, int n, vector<int> v, int sum, vector<vector<int>> &ans)
{
    if (sum < 0)
    {
        return;
    }
    if (sum == 0)
    {
        ans.push_back(v);
        return;
    }
    for (int i = index; i < n; i++)
    {
        v.push_back(a[i]);
        sum -= a[i];
        recursion(a, i, n, v, sum, ans);
        sum+=a[i];
        v.pop_back();
    }
}

int main()
{
    int arr[] = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> v = {};
    recursion(arr, 0, 4, v, target, ans);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}