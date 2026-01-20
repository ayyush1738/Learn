#include<bits/stdc++.h>
using namespace std;

vector<int> firstAndLast(vector<int>& arr, int n, int k)
{
    vector<int> ans;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]==k)
        {
            ans.push_back(mid);
            high=mid-1;
        }else if(arr[mid]>k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        if(arr[mid]==k)
        {
            ans.push_back(mid);
            low=mid+1;
        }else if(arr[mid]<k)
        {
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return ans;
}

int main()
{
    return 0;
}