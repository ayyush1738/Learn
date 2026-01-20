#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n)
{
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]>=1)
        {
            ans = mid;
            high=mid-1;
            
        }else{
            low = mid+1;
        }
    }

    return ans;
}

int maxiOnes(vector<vector<int>>& mat, int n, int m)
{
    int ind = -1;
    int max_count = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int cntOnes = m - lowerBound(mat[i],m);
        if(cntOnes > max_count)
        {
            max_count = cntOnes;
            ind = i;
        }
    }

    return ind;
}