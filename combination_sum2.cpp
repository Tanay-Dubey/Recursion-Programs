// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
// Each number in candidates may only be used once in the combination.
// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]

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
        recursion(a, i+1, n, v, sum, ans);
        sum+=a[i];
        v.pop_back();
    }
}

int main()
{
    int arr[] = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int> v = {};
    recursion(arr, 0, 7, v, target, ans);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}