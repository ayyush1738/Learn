#include<bits/stdc++.h>
using namespace std;

int largestSum(vector<int> arr, int n)
{
    int largest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum+=arr[i];

        largest = max(largest, sum);

        if(sum<=0)
        {
            sum=0;
        }
    }

    return largest;
}

int main()
{
    return 0;
}