#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int n, int k)
{
    int ans=-1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]>k)
        {
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return ans;
}

//dry-run: {1,2,2,3}, k=2
//low = 0, high=3;
//mid=1; val=2;
//low = 2, mid = 2


int main()
{
    return 0;
}