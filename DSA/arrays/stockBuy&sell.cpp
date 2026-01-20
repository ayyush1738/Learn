#include<bits.stdc++.h>
using namespace std;

int maxProfit(vector<int>& nums, int n)
{
    int maxPro=INT_MIN;
    int maxEle=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxEle=max(maxEle, nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        maxPro = max(maxPro, maxEle-arr[i]);
    }
    return maxPro;
}

int main()
{
    return 0;
}