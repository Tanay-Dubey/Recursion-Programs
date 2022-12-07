// Print all subsequences having sum k

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print all
// possible subsequences for given array
void printSubsequences(int arr[], int index,
                       vector<int> subarr, int n, int sum)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == n)
    {
        if (sum == 0)
        {

            for (auto it : subarr)
            {
                cout << it << " ";
            }
            if (subarr.size() == 0)
                cout << "{}";

            cout << endl;
            return;
        }
    }
    else
    {
        // not picking the element into the subsequence.
        printSubsequences(arr, index + 1, subarr, n, sum);

        // pick the current index into the subsequence.
        subarr.push_back(arr[index]);
        sum -= arr[index];
        printSubsequences(arr, index + 1, subarr, n, sum);
    }
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;
    int k = 3;
    printSubsequences(arr, 0, vec, n, k);

    return 0;
}
