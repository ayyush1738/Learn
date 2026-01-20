#include<bits/stdc++.h>
using namespace std;

bool searchInrotated(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(k==arr[mid])
        {
            return true;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=k && k<=arr[mid])
            {
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(arr[mid]<k && arr[high])
            {
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }

    return false;
}

int main()
{
    return 0;
}