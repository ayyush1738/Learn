#include<bits/stdc++.h>
using namespace std;

bool mbqs(vector<int>& arr, int n, int m, int day, int k)
{
    int cnt = 0;
    int nob = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=day)
        {
            cnt++;
        }else{
            nob+=(cnt/k);
            cnt=0;
        }
    }
    nob+=(cnt/k);
    if(nob>=m)
    {
        return true;
    }

    return false;
}

int minDays(vector<int>& nums, int n, int m, int k)
{
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(arr, n, mid, m, k)==true)
        {
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return ans;
}

int main()
{
    return 0;
}