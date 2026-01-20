#include<bits/stdc++.h>
using namespace std;

int howManyTimes(vector<int>& nums, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(nums[mid]>nums[high])
        {
            low=mid+1;
        }else{
            high=mid;
        }
    }

    return low;
}

int main()
{
    return 0;
}