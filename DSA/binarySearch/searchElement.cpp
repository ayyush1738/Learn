#include<bits/stdc++.h>
using namespace std;

int searchInRotated(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        if(nums[low]<=nums[mid])
        {
            if(nums[low]<=k && k<=nums[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }else{
            if(nums[mid]<k && k<=nums[high])
            {
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    return 0;
}