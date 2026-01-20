#include<bits/stdc++.h>
using namespace std;

int findNthRoots(int mid, int n)
{
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        ans = ans * mid;
    }

    return ans;
}

int nthRoot(int m, int n)
{
    int low = 1;
    int high = m;
    int ans = -1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(findNthRoots(mid, n)<=m)
        {
            ans=mid;
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