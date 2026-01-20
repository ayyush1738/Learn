#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& arr, int dist, int k)
{
    int cowCount = 1;
    int last = arr[0];

    // FIX: you forgot n, so use arr.size()
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] - last >= dist)
        {
            cowCount++;
            last = arr[i];
        }
    }

    return cowCount >= k;
}

int aggressiveCows(vector<int>& arr, int n, int k)
{
    // Always sort the stalls
    sort(arr.begin(), arr.end());

    int low = 1; // minimum possible distance
    int high = arr[n-1] - arr[0]; // maximum possible distance
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        // FIX: function takes only arr, dist, k
        if(canPlace(arr, mid, k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = arr.size();
    int k = 3;

    cout << aggressiveCows(arr, n, k);
    return 0;
}
