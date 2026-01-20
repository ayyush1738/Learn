#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1])
        {
            high=mid;
        }else{
            low=mid+1;
        }
    }

    return low;
}

int main()
{
    return 0;
}