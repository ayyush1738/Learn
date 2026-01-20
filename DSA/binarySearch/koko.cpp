#include<bits/stdc++.h>
using namespace std;

int ateTime(vector<int>& arr, int mid, int n)
{
    int hrs = 0;

    for(int i = 0; i < n; i++)
    {
        hrs += (arr[i] + mid - 1) / mid;   // ceil division
    }

    return hrs;
}

int koko(vector<int>& arr, int n, int h)
{
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    int low = 1;
    int high = maxi;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(ateTime(arr, mid, n) <= h)
        {
            ans = mid;          // valid speed
            high = mid - 1;     // try smaller speed
        }
        else
        {
            low = mid + 1;      // need faster speed
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {3, 6, 7, 11};
    int h = 8;

    cout << koko(arr, arr.size(), h);  // ✅ Output: 4
    return 0;
}
