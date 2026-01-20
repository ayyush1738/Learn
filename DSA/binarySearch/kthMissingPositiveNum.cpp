#include<bits/stdc++.h>
using namespace std;

int kthMissing(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    int miss = -1;
    if(low<=high)
    {
        int mid = (low + high)/2;
        int missing = arr[mid] - (mid+1);
        if(missing<k)
        {
            low = mod+1;
        }else{
            high=mid-1;
        }
    }

    return k + (mid+1);
}

int main()
{
    return 0;
}