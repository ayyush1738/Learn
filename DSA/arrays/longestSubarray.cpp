#include<bits/stdc++.h>
using namespace std;

vector<int> longSub(vector<int> arr, int n, int k)
{
    int longest = INT_MIN;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        int sum +=arr[i];
        if(sum==k)
        {
            longest=max(longest, i+1);
        }

        int rem = sum - k;
        if(mp.find(rem)!=mp.end())
        {
            int len = i - mp[rem];
            longest = max(longest, len);
        }

        if(mp.find(sum)==mp.end())
        {
            mp[sum] = i;
        }
    }
}

int main()
{
    return 0;
}