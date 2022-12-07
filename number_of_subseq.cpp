// Print count of all subsequences with sum k

#include <bits/stdc++.h>
using namespace std;

int recursion(int arr[], int index, vector<int> v, int n, int sum)
{
    int count;
    if (index == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
            return 0;
    }
    count=recursion(arr, index+1, v, n, sum);
    v.push_back(arr[index]);
    sum -= arr[index];
    count+=recursion(arr, index+1, v, n, sum);
    return count;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;
    int k = 3;
    int ans = recursion(arr, 0, vec, n, 3);
    cout<<ans<<endl;

    return 0;
}