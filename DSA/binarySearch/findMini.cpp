#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>arr[high])
        {
            low=mid+1;
        }else{
            high=mid;
        }
    }

    return nums[low];
}

//  [4,5,6,7,0,1,2,3]
//  

int main()
{
    return 0;
}