#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> arr, int n, int x)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]<=x)
        {
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return ans;
}

int ciel(vector<int> arr, int n, int k)
{
    int low = 0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=k)
        {
            ans = k;
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