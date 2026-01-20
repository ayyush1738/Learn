#include<bits/stdc++.h>
using namespace std;

long sjf(vector<int>& arr, int n)
{
    //[4, 7, 3, 1, 2]
    sort(arr.begin(), arr.end());
    //[1, 2, 3, 4, 7]
    int wt = 0;
    int t = 0;
    for(int i=0;i<n;i++)
    {
        wt+=t;
        t+=arr[i];
    }
    return wt/n;
}

int main()
{
    return 0;
}