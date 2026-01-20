#include<iostream>
#include<vector.h>
using namespace std;

vector<int> findTwoDistinctNums(vector<int> nums)
{
    long xorr = 0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        xorr ^= nums[i];
    }

    int rightMost = (xorr & (xorr-1)) & xorr;

    int b1 = 0;
    int b2 = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i] & rightMost)
        {
            b1 ^= nums[i];
        }else{
            b2 ^= nums[i];
        }
    }

    return {b1, b2};
}

int main()
{
    return 0;
}