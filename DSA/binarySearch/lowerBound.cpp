#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> nums, int n, int k)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(k<=arr[mid])
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
