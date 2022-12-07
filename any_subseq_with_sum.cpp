// Print any one subsequence with sum k

#include <bits/stdc++.h>
using namespace std;

bool recursion(int arr[], int index, vector<int> v, int n, int sum)
{
    if (index == n)
    {
        if (sum == 0)
        {
            for (auto it : v)
                cout << it << " ";
            if (v.size() == 0)
                cout << "{}";
            cout << endl;
            return true;
        }
        else
            return false;
    }
    if (recursion(arr, index+1, v, n, sum) == true)
    {
        return true;
    }
    v.push_back(arr[index]);
    sum -= arr[index];
    if (recursion(arr, index+1, v, n, sum) == true)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;
    int k = 3;
    bool ans = recursion(arr, 0, vec, n, k);

    return 0;
}