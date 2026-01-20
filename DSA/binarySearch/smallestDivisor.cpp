#include <bits/stdc++.h>
using namespace std;

int checkDivisor(vector<int>& arr, int n, int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // ✅ FIX: Proper ceiling division for integers
        sum += (arr[i] + mid - 1) / mid;
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int n, int limit)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // ✅ FIX: Wrong variable name "max" → "maxi"
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }

        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }

    // ✅ FIX: Lower bound must be 1, NOT mini
    int low = 1;
    int high = maxi;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (checkDivisor(arr, n, mid) <= limit)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // ✅ FIX: Missing return statement
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 5, 9};
    int limit = 6;

    cout << smallestDivisor(arr, arr.size(), limit) << endl;
    return 0;
}
